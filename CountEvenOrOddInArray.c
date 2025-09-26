#include<stdio.h>
int main(){
	int a[5],i;
	int even=0,odd=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		}
	for(i=0;i<5;i++){
		if(a[i]%2==0){
			even++;
		}
		else
		odd++;
		}
		printf("%d even numbs",even);
		printf("%d odd numbs",odd);

}
