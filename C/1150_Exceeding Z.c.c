//Exceeding Z

#include<stdio.h>
int main()
{
    int x,z,sum=0;
    scanf("%d\n%d\n",&x,&z);
    while(z<=x)
    {
        scanf("%d",&z);
    }
    int count=0;
    for(int i=0;sum<=z;i++)
    {
        sum+=x+i;
        count++;

    }
    printf("%d\n",count);
    return 0;
}

