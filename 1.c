#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k=0,a[1000],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                //printf("%d ",a[i]);
                b[k]=a[i];
                k++;
            }
        }
    }
    //printf("\n");
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[i]==b[j])
            {
                b[j]=0;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(b[i]!=0)
        {
            printf("%d ",b[i]);
        }
    }
    return 0;
}
