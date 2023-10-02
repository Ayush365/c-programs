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

/* the output will be
Multiplication table 
        1       2       3       4       5       6       7       8       9       10
        2       4       6       8       10      12      14      16      18      20
        3       6       9       12      15      18      21      24      27      30
        4       8       12      16      20      24      28      32      36      40
        5       10      15      20      25      30      35      40      45      50 
    */
