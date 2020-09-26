#include<stdio.h>

int main()
{
    int input,k,a[50],count=0,i;
    scanf("%d%d",&input,&k);
    for(i=0; i<input; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<input; i++)
    {
        if(a[i]>=a[k-1]&&a[i]>0)
            count++;
    }
    printf("%d\n",count);
    return 0;

}
