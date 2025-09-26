#include<stdio.h>
int main(){
	int a,b,temp;
	int *ptr1, *ptr2;
	ptr1 = &a;
	ptr2 = &b;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("%f %f",p1,p2);
	
}
