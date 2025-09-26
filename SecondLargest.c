#include<stdio.h>
int main(){
	int i,n,max1,max2;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++){
		if(max1<a[i])
		{
			max2 = max1;
			max1 = a[i];
		}
	}
	for(i=0;i<n;i++){
		if(max2 < a[i] && max1>a[i])
		max2 = a[i];
	}
	printf("%d",max2);
}
