#include<stdio.h>
int main(){
	int i,n,sum=0;
	scanf("%d",&n);
	if(n>0){
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("%d",sum);
	}
	else
	printf("Not natural number");
        return 0;
}
