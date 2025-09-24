/*Q70: Rotate an array to the right by k positions.*/

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>
int main()
 {
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }
    printf("Enter value of k: ");
    scanf("%d", &k);
    k = k % n;
    int rotated[n];
    for(i = 0; i < n; i++)
	 {
        rotated[(i + k) % n] = arr[i];
    }
    printf("Array after rotating right by %d positions:\n", k);
    for(i = 0; i < n; i++) 
	{
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}

