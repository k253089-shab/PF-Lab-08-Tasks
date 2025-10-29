#include <stdio.h>

int main()
{
    printf("Classroom Seating Chart:\n=======================\n(x = Student, o = Empty)\n\n");
    int x=0, o=0, total=0;
    for(int i=1; i<=5; i++){
        printf("Row %d: ", i)
;        for(int j=1; j<=5; j++){
            if((i+j)%2==0){
                printf("x ");
                x++;
                total++;
            } else{
                printf("o ");
                o++;
                total++;
            }
        } printf("\n");
    }
    
    printf("\n=====Summary=====\nStudent seated: %d\nEmpty desks: %d\nTotal desks: %d", x, o, total);

    return 0;
}
