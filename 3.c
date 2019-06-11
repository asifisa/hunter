#include<stdio.h>
#include<string.h>
int main()
{
    int n,a[100],i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        if(i==a[i])
        {
            printf("%d ",a[i]);
            count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}
