#include <stdio.h>





int main()
{
    int n;
    scanf("%d", &n);

    printf("W");
    for (; n > 0; printf("o"), n--);
    printf("w!\n");

    
    return 0;
}
