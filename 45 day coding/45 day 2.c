/*Q90: Toggle case of each character in a string.*/

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
#include <ctype.h>   
int main()
 {
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    for (i = 0; str[i] != '\0'; i++)
	 {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);   
        else if (islower(str[i]))
            str[i] = toupper(str[i]);   
    }
    printf("Toggled case string: %s", str);
    return 0;
}