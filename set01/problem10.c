//10. Write a C program to compare two strings, character by character.
#include <stdio.h>

void input_string(char *string1, char *string2);
int compare(char *string1, char *string2);
void output(char *string1, char  *string2, int result);

int main() {
    char string1[100], string2[100];
    input_string(string1, string2);
    int result = compare(string1, string2);
    output(string1, string2, result);
    return 0;
}


void input_string(char *string1, char *string2) {
    printf("Enter first string: ");
    scanf("%s", string1);
    printf("Enter second string: ");
    scanf("%s", string2);
}

int compare(char *string1, char *string2) {
int res=0;
int index;
for(index=0; string1[index]!='\0' || string2[index]!='\0';index++) {
if(string1[index]>string2[index]) {
res = 1;
break;
}
else if(string2[index]>string1[index]) {
res = 2;
break;
}
}
return res;
}

void output(char *string1, char *string2, int result) {
if(result==1) {
printf("%s is greater than %s \n",string1,string2);
}
else if(result==2) {
printf("%s is greater than %s \n",string2,string1);
}
else {
printf("The strings are equal \n");
}
}
