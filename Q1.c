#include <stdio.h>

int main(){
    int GradeBook[3][4]={
    {85, 92, 78, 90},
    {88, 76, 95, 84},
    {90, 85, 88, 92}
    };
    float avg;
    
    for(int i=0; i<=2; i++){
        int sum=0;
        for(int j=0; j<=3; j++){
            sum=sum+GradeBook[i][j];
        }
        avg=sum/4.0;
        printf("Average score of Class %d is: %.2f\n", i+1, avg);
    }
    
    return 0;
}
