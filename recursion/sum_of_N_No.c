#include<stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;

    else if (n > 0)
        return  n+sum(n - 1);
}

int main()
{
    printf("%d\n",sum(10));
}