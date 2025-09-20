/*Q61: Search for an element in an array using linear search.*/

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>
int main() 
{
    int n, i, search, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++)
	 {
        if(arr[i] == search) {
            printf("Element %d found at position %d (index %d)\n", search, i + 1, i);
            found = 1;
            break; 
        }
    }
    if(!found) {
        printf("Element %d not found in the array.\n", search);
    }
    return 0;
}
