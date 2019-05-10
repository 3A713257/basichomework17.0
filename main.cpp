// basic homework 17 (3A713257)
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, min, num[5];
	printf("\nPlease enter 5 numbers.\n");
	for(i=0; i<5; i++){
		printf("num_%d=",i+1);
		scanf("%d",&num[i]);
		if(i==0) min=num[0];
		else{
			if(num[i]<min)
			min = num[i];
		}
	}
	printf("\nThe 5 numbers are ");
	for(i=0; i<4; i++){
		printf("%d, ",num[i]);
	}
	printf("%d.\n",num[4]);
	printf("The minimum value is %d.",min);
	system("pause");
	return 0;
}
