#include<stdio.h>
int main(){
	int num,rem, sum;
	
	scanf("%d",&num);
	int org = num;
	while(num!=0){
		rem=num%10;
		sum = sum+rem*rem*rem;
		num/=10;

	}
		if(org == sum){
			printf("%d is a amstrong",org);
			
		}
		else
		printf("%d is not a armstrong",org);
			return 0;
}
