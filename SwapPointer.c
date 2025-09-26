#include<stdio.h>
int main(){
	int a=4,b=9,temp;
	
	int *ptr1, *ptr2;
	ptr1 = &a;
	ptr2 = &b;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("%p %p \n",*ptr1,ptr2);
	printf("%p %p\n",ptr1, ptr2);
	printf("%p %p\n",&a,&b);
	printf("%p %p\n",&ptr1, &ptr2);
	
	
}
