#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int *l,*r,temp;
	l=a;
	r=a+n-1;
	while(l<r){
		temp =*l;
		*l = *r;
		*r = temp;
		l++;
		r--;
		
	}
for(i=0;i<n;i++)
	printf("%d  ",a[i]);
}
