/*Q77: Check if the elements on the diagonal of a matrix are distinct.*/

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
int main() 
{
    int n, i, j, flag = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    int diag[2*n];  
    int k = 0;
    for (i = 0; i < n; i++)
	 {
        diag[k++] = a[i][i];       
        diag[k++] = a[i][n - i - 1];
    }
    for (i = 0; i < k; i++)
	 {
        for (j = i + 1; j < k; j++) 
		{
            if (diag[i] == diag[j])
			 {
                flag = 0;
                break;
            }
        }
        if (flag == 0) break;
    }
    if (flag)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
    return 0;
}