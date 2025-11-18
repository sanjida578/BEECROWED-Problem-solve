// Ages

#include<stdio.h>
int main()
{
    int n,sum=0,count=0;
    double avg;
    while(1){
        scanf("%d",&n);
        if(n<0)
            break;
            count++;
        sum+=n;
    }
    avg=(float)sum/count;
    printf("%.2lf\n",avg);
}
