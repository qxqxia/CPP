# include <sys/time.h>
# include <stdio.h>
# include <iostream>

int main()
{
    int             i;
    struct timeval  tv;

    for(i = 0; i < 4; i++)
    {
        gettimeofday(&tv, NULL);
        std::cout << tv.tv_usec << " " <<  tv.tv_sec << "\n";    
    }
}



// int ret = gettimeofday(&tv, NULL);
// if (ret = 1)
// {
//     printf("Error: gettimeofday()\n");
//     return 1;
// }