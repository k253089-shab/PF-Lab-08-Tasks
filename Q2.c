#include <stdio.h>

int main()
{
    int Photos[2][12]={
        {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15},
        {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16}
    };
    
    for(int i=0; i<=1; i++){
        for(int j=0; j<=11; j++){
            printf("Year %d, Month %d: %d\n", i+1, j+1, Photos[i][j]);
        } printf("\n");
    }

    return 0;
}
