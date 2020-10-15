#include <stdio.h>




#define scan(kind, var) scanf("%"#kind, &var)
#define done(num) {printf("%d\n", num); return 0;}



int main()
{
    long long n;
    scan(lld, n);


    if (n%9 == 0)
        done(9)


    while (n > 10) n %= 9;

    done(n)
}


