//06. Write a program to reverse a string.
#include <stdio.h>
#include <string.h>

void input_string(char *a) {
	printf("Enter the string: ");
	scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
	int i, len = strlen(str);
	for (i = 0; i < len; i++) {
		rev_str[i] = str[len - i - 1];
	}
	rev_str[i] = '\0';
}

void output(char *a, char *reverse_a) {
	printf("The original string is: %s\n", a);
	printf("The reversed string is: %s\n", reverse_a);
}

int main() {
	char a[100], reverse_a[100];
	input_string(a);
	str_reverse(a, reverse_a);
	output(a, reverse_a); 
	return 0;
}
