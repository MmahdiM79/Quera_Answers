#include <stdio.h>








#define for_each(int_arr, expression) \
            { \
                int size = sizeof(int_arr)/sizeof(int_arr[0]); \
                int current; \
                for (int i = 0; i < size; i++) \
                {    \
                    current = int_arr[i]; \
                    expression; \
                } \
            }






int main()
{
    int angles[3];
    scanf("%d %d %d", &angles[0], &angles[1], &angles[2]);


    for_each(angles, 
             if (current == 0) 
             { 
                 printf("No\n"); 
                 return 0; 
             })



    int sum_of_angles = 0;
    for_each(angles, sum_of_angles += current);

    if (sum_of_angles == 180)
        printf("Yes\n");
    else 
        printf("No\n");



    
    return 0;
}



