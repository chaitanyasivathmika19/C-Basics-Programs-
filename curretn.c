#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<=100)
	printf("%.2f",(n*1.5));
	else if(n<=200 && n>=101){
		printf("%d",(n*2));
	}
	else if(n<300 && n>=201)
	printf("%d",n*3);
	else
	printf("%d",n*5);
}
