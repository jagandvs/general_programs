#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char a[30];
 clrscr();
 printf("Enter the string ");
 scanf("%s",a);
 strrev(a);
 printf("Reverse of the string %s",a);
 getch();
 return 0;
}