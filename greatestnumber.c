#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z)
	printf("%d is greater",x);
	else if(y>z&&y>x)
	printf("%d is greater",y);
	else
	printf("%d is greater",z);
	return 0;
}
