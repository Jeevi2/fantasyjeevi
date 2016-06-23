#include<stdio.h>

int main(){
	int array[100],hash[100]={0},number,iteration;
	
	scanf("%d",&number);
	for(iteration=0;iteration<number;iteration++){
		scanf("%d",&array[iteration]);
		hash[array[iteration]]++;
	}
	for(iteration=0;iteration<number;iteration++){
		if(hash[array[iteration]]==1){
			printf("%d",array[iteration]);
			hash[array[iteration]]=0;
		}
	}
	return 0;
}
