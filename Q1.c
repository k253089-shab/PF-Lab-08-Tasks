#include <stdio.h>

int main(){
	
	int num;
	printf("enter number: ");
	scanf("%d", &num);
	
	for(int i=1; i<=num; i++){
		printf("%d: ", i);
		for(int j=1; j<=10; j++){
			printf("%4d ", i*j);
		} printf("\n");
	}
	
	return 0;
}
