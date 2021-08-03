#include <stdio.h>




#define say_sentece printf("man khoshghlab hastam\n")
#define readInt(x) scanf("%d", &x)


int main()
{
    int n;
    readInt(n);
    

    for (; n > 0; say_sentece, n--);


    return 0;
}