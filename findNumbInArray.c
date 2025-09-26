#include<stdio.h>
int main(){
		int n;
		scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int find,found;
	scanf("%d",&find);
	for(i=0;i<n;i++){
		if(a[i]==find){
			found = 1;
			printf("%d is found in the position %d ",find,i+1);
		}
	}
				

	return 0;
}
