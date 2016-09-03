#include <stdio.h>

int main(void) {
	int a;
	printf("Enter an integer");
	scanf("%d",&a);
	if(a==0)
	printf("The number is ZERO");
	else if(a>0)
	printf("The number is Positive");
	else
	printf("The number is Negative");
	return 0;
}
