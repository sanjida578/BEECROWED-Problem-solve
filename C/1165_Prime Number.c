
#include<stdio.h>
#include <math.h>   // Needed for sqrt()


int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        int isprime=1;
        if(n<2)
        {
            isprime=0;// 0 and 1 are not prime

        }
        else{
        for(int j=2;j<=sqrt(n);j++)
        {
            if(n%j==0){
                isprime=0;//number is not prime
                break;
            }
        }
        }
        if(isprime)
          printf("%d eh primo\n",n);
        else
          printf("%d nao eh primo\n",n);
    }
}
