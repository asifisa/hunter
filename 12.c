#include<stdio.h>

int main() 
{
    long long int a,b,arr[100000],i,j,temp,max=0;
    scanf("%lld %lld",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%lld ",&arr[i]);
    }
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%lld",arr[b-1]);
	return 0;
}
