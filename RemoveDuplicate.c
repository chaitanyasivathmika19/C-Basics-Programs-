#include<stdio.h>
int main(){
		int n,j;
		scanf("%d",&n);

	int a[n],i,sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Array without duplicates: ");
    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
            printf("%d ", a[i]);
    }
    return 0;
}
