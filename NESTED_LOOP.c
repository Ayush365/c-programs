//PRINT MULTIPLICATION TABLE USING NESTED LOOP
#include<stdio.h>
void main(){
    int a,b;
    printf("Multiplication table \n");
    for (a=1;a<=5;a++)                     // NUMBER OF ROWS
    {
        for (b=1;b<=10;b++)               // NUMBER OF COLUMNS
        {
            printf("\t%d",a*b);
        }
        printf("\n");                     //NEW LINE AFTER 10 COLUMNS
    }
}