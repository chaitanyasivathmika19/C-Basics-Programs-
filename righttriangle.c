#include<stdio.h>
int main(){
	int i,n,j;
	scanf("%d",&n);
	for(i=n;i>=0;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
