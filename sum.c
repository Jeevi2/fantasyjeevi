#include<stdio.h>
int main(){
	int i,n,sum=0;
	scanf("%d",&n);
	if(n>0){
		sum=(n*(n+1))/2;
		printf("%d",sum);
	}
	else
		printf("Not natural number");
        return 0;
}
