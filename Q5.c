#include <stdio.h>

int main()
{
    int temperature[4][4]={
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };
    
    printf("Cold spots found at:\n");
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            int isCold=1;
            
            // Check north
            if (i > 0 && temperature[i][j] >= temperature[i-1][j])
                isCold = 0;
            // Check south
            if (i < 3 && temperature[i][j] >= temperature[i+1][j])
                isCold = 0;
            // Check west
            if (j > 0 && temperature[i][j] >= temperature[i][j-1])
                isCold = 0;
            // Check east
            if (j < 3 && temperature[i][j] >= temperature[i][j+1])
                isCold = 0;
            
            if (isCold)
                printf("At position (%d,%d) with temperature %d°C\n", i+1, j+1, temperature[i][j]);
        }
    }

    return 0;
}
