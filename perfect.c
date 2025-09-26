#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int sum=0;
	for(i=1;i<n;i++)
	{
	   if(n%i==0){
	   	sum+=i;
	   }
	}
	if(sum==n)
	printf("perfect");
	else
	printf("not a perfect");
}
