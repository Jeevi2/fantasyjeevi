#include<stdio.h>
int main(){
	int array[100],n,i,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
		if(array[i]==i)
			printf(" %d equals to the index %d\n",array[i],i);
		else
			count++;
	}
	if(count==n)
		printf("not equal ");
        return 0;
}
