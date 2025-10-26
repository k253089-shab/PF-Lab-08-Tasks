#include <stdio.h>

int main() {
    int image[4][4]={
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };
    int whiteCount=0;
    
    printf("Original Image:\t\tInverted Image:\n");
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            printf("%d ", image[i][j]);
            if(image[i][j]==1)
            whiteCount++;
        }
        
        printf("\t\t");
    
        
        for(int j=0; j<=3; j++){
            if(image[i][j]==1)
            image[i][j]=0;
            else if(image[i][j]==0)
            image[i][j]=1;
        printf("%d ", image[i][j]);
            
        } printf("\n");
    }
    
    printf("\nNumber of white pixels in original image: %d", whiteCount);
    
    return 0;
}
