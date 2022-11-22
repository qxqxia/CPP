/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:23 by xuwang            #+#    #+#             */
/*   Updated: 2022/11/22 13:43:08 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int main()
{
    std::cout << "~~~Template int~~~\n";    
    Array<int> A(2);
    A[0] = 456;
    A[1] = 123;
    std::cout << "A[0] is " << A[0] << std::endl;
    std::cout << "A[1] is " << A[1] << std::endl;
    
    try {
        std::cout << A.operator[](3) << std::endl;//index is not correct
    }catch (const std::exception &e) {
        std::cout << "operator[](3) " << e.what() << std::endl;
    }
    try {
        std::cout << "A[1] is: " << A.operator[](1) << std::endl;
    }catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "size of A is: " << A.size() << std::endl << std::endl;
    
    std::cout << "~~~deep copy and assignment operator tests~~~\n";
    Array<int> A2(2);
    A2 = A;
    std::cout << "size of A2 is: " << A2.size() << std::endl;
    for(int i = 0; i < 2; i++) {
        std::cout << A2.operator[](i) << " " ;
    }
    std::cout << std::endl;
    A2[0] = 654;
    std::cout << "A2[0] is " << A2[0] << std::endl;
    std::cout << "A[0] is " << A[0] << std::endl << std::endl;
    std::cout << std::endl;
        
    std::cout << "~~~Template char~~~\n";    
    Array<char> C; //size is 0
    try {
        C[0] = 'Q';
        std::cout << C[0] << std::endl;
    }catch (const std::exception &e) {
        std::cout << e.what() << std::endl; 
    }
    std::cout << std::endl;
    
    std::cout << "~~~Template float~~~\n";    
    Array<float> F(1);
    try {
        F[0] = 12.34f;
        std::cout << "F[0] is: " << F[0] << std::endl;
    }catch (const std::exception &e) {
        std::cout << e.what() << std::endl; 
    }
    std::cout << std::endl;
    std::cout << "~~~test in the sujet~~~\n";

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;//operator=
        Array<int> test(tmp);//copy constructor
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0; //index is unsigned int, cann't be negative
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0; //index out of range
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
