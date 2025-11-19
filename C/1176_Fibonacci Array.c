#include<stdio.h>
int main()
{
    int t,n,s,i;
    scanf("%d",&t);//input number of test case
    unsigned long long a[61];// Array to store Fibonacci numbers from 0 to 60
    a[0]=0;
    a[1]=1;

        for(i=2;i<=60;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        while (t--) {
        scanf("%d", &n);// Read the index N

        printf("Fib(%d) = %llu\n", n, a[n]);
    }

    return 0;
}
