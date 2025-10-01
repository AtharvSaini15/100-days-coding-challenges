/*Q84: Convert a lowercase string to uppercase without using built-in functions.*/

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>
int main(void)
 {
    char s[1000];
    printf("Enter a string:\n");
    if (fgets(s, sizeof s, stdin) == NULL) return 0;
    for (int i = 0; s[i] != '\0'; ++i)
	 {
        if (s[i] >= 'a' && s[i] <= 'z') 
		{
            s[i] = s[i] - ('a' - 'A'); 
        }
    }
    printf("Uppercase: %s", s);
    return 0;
}