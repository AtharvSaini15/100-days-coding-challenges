/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>
int main() 
{
    int n, i, key, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &key);
    pos = n;
    for (i = 0; i < n; i++) 
	{
        if (arr[i] > key)
		 {
            pos = i;
            break;
        }
    }
    for (i = n; i > pos; i--) 
	{
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
	 {
        printf("%d ", arr[i]);
    }

    return 0;
}