#include<stdio.h>
int main(){
	int a,b,c;
	a=0;
	b=1;
    int i,n;
	scanf("%d",&n);
	printf("%d\n %d\n",a,b);
	for(i=2;i<n;i++){
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
