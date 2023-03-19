#include <iostream>

using namespace std;

// merge sort test
void merge(int arr[], int l, int m, int r) // l = leftIndex, m = midIndex, r = rightIndex
{
    int leftArraySize = m - l + 1;
    int rightArraySize = r - m;

    int leftArray[leftArraySize];
    int rightArray[rightArraySize];

    for (int i = 0; i < leftArraySize; i++) // left
    {
        leftArray[i] = arr[l + i];
    }
    for (int j = 0; j < rightArraySize; j++) // right
    {
        rightArray[j] = arr[m + 1 + j];
    }

    int k = l;
    int i = 0;
    int j = 0;
    while (i < leftArraySize && j < rightArraySize)
    {
        if (leftArray[i] < rightArray[j])
        {
            arr[k] = leftArray[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            k++;
            j++;
        }
    }
    while (i < leftArraySize)
    {
        arr[k] = leftArray[i];
        k++;
        i++;
    }
    while (j < rightArraySize)
    {
        arr[k] = rightArray[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, 0, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    cout << "Enter 5 elements in the array: "
         << "\n";
    int myarr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    cout << "Before Merge Sort: "
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }

    mergeSort(myarr, 0, 4);
    cout << "\n";
    cout << "After Merge Sort: "
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    return 0;
}