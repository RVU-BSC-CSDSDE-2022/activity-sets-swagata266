//10. Write a C program to compare two strings, character by character.
#include<stdio.h>
#include<string.h>

void main()
{
  int s;
  char string1[10],string2[10];
  printf("Enter the first string\n");
  scanf("%s",&string1);
  printf("Enter the second string\n");
  scanf("%s",&string2);
  s=stringcompare(string1,string2);
  if (s=0)
  {
    printf("the strings are equal\n");
  }
  else
  {
    printf("the strings are not equal");
  }
}
 int stringcompare(char string1,char string2)
  {
    int s;
    s=strcmp(string1,string2);
    return s;
  }
  