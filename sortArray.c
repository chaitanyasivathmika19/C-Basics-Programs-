#include<stdio.h>
int main(){
		int n,j;
		scanf("%d",&n);

	int a[n],i,sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
	
}
