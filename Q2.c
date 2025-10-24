#include <stdio.h>

int main(){
	int Matrix[3][4]={
	{10,22,35,41},
	{50,65,73,80},
	{91,10,11,12}
	};
	int max, imax, jmax;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			printf("%d ", Matrix[i][j]);
			if(Matrix[i][j]>max){
			max=Matrix[i][j];
			imax=i;
			jmax=j;
			}
		} printf("\n");
		
	}
	
	printf("\nMaximum number: %d", max);
	printf("\nIndex: Row %d Column %d", imax, jmax);
	
	return 0;
}
