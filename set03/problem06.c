//6. Write a program to find the index of a substring of a string
#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b) {
    printf("Enter the string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int n = strlen(string);
    int m = strlen(substring);
    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (string[i+j] != substring[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }
    return -1;
}

void output(char *string, char *substring, int index) {
    if (index == -1) {
        printf("Substring '%s' not found in string '%s'.\n", substring, string);
    } else {
        printf("Substring '%s' found at index %d in string '%s'.\n", substring, index, string);
    }
}

int main() {
    char string[100];
    char substring[100];
    input_string(string, substring);
    int index = sub_str_index(string, substring);
    output(string, substring, index);
    return 0;
}
