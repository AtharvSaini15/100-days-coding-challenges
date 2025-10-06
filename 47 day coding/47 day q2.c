/*Q94: Find the longest word in a sentence.*/

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char line[1000];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    for (int i = 0; line[i]; ++i)
        if (!isalnum((unsigned char)line[i]) && line[i] != '\'' && line[i] != '-')
            line[i] = ' ';
    char *token = strtok(line, " \t\n");
    char longest[1000] = "";
    while (token) {
        if (strlen(token) > strlen(longest)) strcpy(longest, token);
        token = strtok(NULL, " \t\n");
    }
    printf("%s\n", longest);
    return 0;
}