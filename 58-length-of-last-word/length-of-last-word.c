#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
    int i = strlen(s) - 1;
    int length = 0;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count last word characters
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}