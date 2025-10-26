#include <stdio.h>

int main() {
    int seats[3][3]={
        {1, 0, 1},
        {0, 0, 1},
        {1, 1, 0}
    };
    int availseats[3][3];
    int availcount=0, row, column;
    
    printf("Available seats: \n");
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            if(seats[i][j]==0){
                printf("Row %d Column %d\n", i+1, j+1);
                availcount++;
            }
        }
    }
    
    printf("\nNumber of available seats: %d", availcount);
    
    return 0;
}
