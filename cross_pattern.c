#include<stdio.h>
int main()
{
    int row, col, n;
    scanf("%d", &n);
    for(row = 0; row<n; row++){
            for(col=0; col<n; col++){
                if((col == row) || (col+row)== (n-1)){
                    printf("*");
                }
                else
                {
                    printf(" ");
                }




            }




        printf("\n");
    }
    return 0;
}
