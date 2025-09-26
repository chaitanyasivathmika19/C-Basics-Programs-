#include<stdio.h>
int main(){
	int n,rev=0,rem,i;
	scanf("%d",&n);
	int org=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(rev==org)
	printf("palindrome");
	else
	printf("not a palindrome");
}
