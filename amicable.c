#include<stdio.h>
int main(){
	int n1,n2,s1,s2;
	scanf("%d %d",&n1,&n2);
	s1=amicable(n1);
	s2=amicable(n2);
	
	if(s1==n2 && n1==s2){
		printf("amicable");
		
	}
	else
	printf("not a amicable");
}
int amicable(int n){
	int s=0,i;
	for(i=1;i<n;i++){
		if(n%i==0)
		s+=i;
	}
	return s;
}
