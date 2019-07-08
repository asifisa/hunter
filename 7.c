#include <stdio.h>

int main() {
	long long int a,i;
	int arr[100000];
	scanf("%lld",&a);
	for(i=0;i<a;i++)
	{
	    scanf("%d",&arr[i]);
	    if(i%2==0 && arr[i]%2!=0)
	    printf("%d ",arr[i]);
	    else if(i%2!=0 && arr[i]%2==0)
	    printf("%d ",arr[i]);
	}
	return 0;
}
