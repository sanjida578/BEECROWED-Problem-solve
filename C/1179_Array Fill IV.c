#include<stdio.h>
int main()
{
    int par[5],impar[5],i,j,x;
    int p=0,im=0;
    for(i=0; i<15; i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            par[p]=x;
            p++;
            if(p==5)
            {
                for(j=0; j<5; j++)
                {
                    printf("par[%d] = %d\n",j,par[j]);
                }
                p=0;
            }
        }
        else
        {
            impar[im]=x;
            im++;
            if(im==5)
            {
                for(j=0; j<5; j++)
                {
                    printf("impar[%d] = %d\n",j,impar[j]);
                }
                im=0;
            }
        }
    }
    // print remaining odds first

    for(j=0; j<im; j++)
    {
        printf("impar[%d] = %d\n",j,impar[j]);
    }
    for(j=0; j<p; j++)
    {
        printf("par[%d] = %d\n",j,par[j]);
    }
    return 0;
}



