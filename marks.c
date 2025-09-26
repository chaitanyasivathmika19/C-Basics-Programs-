#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int total = a+b+c+d+e;
	float per = (total/500.0)*100;
	printf("Total=%d\n",total);
	printf("Perc=%f\n",per);
	if(per>=90)
	printf("A ");
	else if(per>=80 && per <90)
	printf("b");
	else if(per>=70 && per <80)
	printf("c");
	else if(per>=60 && per <70)
	printf("d");
	else if(per>=50 && per <60)
	printf("e");
	else
	printf("Fail");
	
}
