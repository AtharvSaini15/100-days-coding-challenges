/*Q80: Multiply two matrices.*/

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>
int main() 
{
    int m, n, p, q;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter rows and columns of first matrix (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of second matrix (p q): ");
    scanf("%d %d", &p, &q);
    if (n != p) 
	{
        printf("Matrix multiplication not possible! Columns of A != Rows of B\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            C[i][j] = 0;
    for (int i = 0; i < m; i++)
	 {
        for (int j = 0; j < q; j++) 
		{
            for (int k = 0; k < n; k++) 
			{
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant Matrix (C = A x B):\n");
    for (int i = 0; i < m; i++)
	 {
        for (int j = 0; j < q; j++) 
		{
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}