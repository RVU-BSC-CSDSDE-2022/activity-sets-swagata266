//7.  Write a program to find out if the name of the camel is a nice name.
#include <stdio.h>
#include <string.h>

void input(char *name) {
  printf("Enter the name of the camel: ");
  scanf("%s", name);
}

int has_nice_name(char *name) {
  int vowel_count = 0, consonant_count = 0;
  for (int i = 0; i < strlen(name); i++) {
    char c = name[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      vowel_count++;
    } else {
      consonant_count++;
    }
  }
  return vowel_count >= 2 && consonant_count >= 2;
}

void output(int res) {
  if (res) {
    printf("The name is nice.\n");
  } else {
    printf("The name is not nice.\n");
  }
}

int main() {
  char name[100];
  input(name);
  int res = has_nice_name(name);
  output(res);
}
