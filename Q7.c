#include <stdio.h>

int main()
{
    int rows=10;
    
    for(int i=1; i<=rows; i++){
        if(i%2==0)
        continue;
        for(int s=i; s<rows; s++){
            printf(" ");
        }
        
        for(int a=1; a<=i; a++){
            printf("* ");
        }
        
        for(int s=i; s<rows; s++){
            printf(" ");
        }
        
        printf("\t|\t");
        
        for(int s=i; s<rows; s++){
            printf(" ");
        }
        
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        
        for(int s=i; s<rows; s++){
            printf(" ");
        }
        
        printf("\t|\t");
        
        for(int s=i; s<rows; s++){
            printf(" ");
        }
        
        char c='A';
        for(int b=1; b<=i; b++){
            printf("%c ", c);
            c++;
            if(c==75)
            break;
        }
        
        printf("\n");
    }
    
    return 0;
}
