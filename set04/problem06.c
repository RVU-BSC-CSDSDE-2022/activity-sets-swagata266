//6. Write a program to count the number of words in a string using strtok (_string.h_)
#include <stdio.h>
#include <string.h>

void input_string(char *a) {
    printf("Enter a string: ");
    scanf(" %[^\n]s", a);
}

int count_words(char *string) {
    int no_words = 0;
    char *word = strtok(string, " ");
    while (word != NULL) {
        no_words++;
        word = strtok(NULL, " ");
    }
    return no_words;
}

void output(char *string, int no_words) {
    printf("The number of words in the string '%s' is %d\n", string, no_words);
}

int main() {
    char string[100];
    int no_words;
    input_string(string);
    no_words = count_words(string);
    output(string, no_words);
    return 0;
}

