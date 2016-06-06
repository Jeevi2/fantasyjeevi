#include <stdio.h>

int main(void) {
	// your code goes here
	long int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	 scanf("%d",&arr[i]);
	 if(i==arr[i])
	 printf("%d equals to its index %d\n",arr[i],i);
	}

	return 0;
}
