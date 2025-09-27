/*Q75: Add two matrices.*/

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>
int main() 
{
    int r, c, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int a[r][c], b[r][c], sum[r][c];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) 
	{
        for(j = 0; j < c; j++)
		 {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++) 
	{
        for(j = 0; j < c; j++) 
		{
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < r; i++)
	 {
        for(j = 0; j < c; j++) 
		{
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant Matrix (Sum):\n");
    for(i = 0; i < r; i++)
	 {
        for(j = 0; j < c; j++) 
		{
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}