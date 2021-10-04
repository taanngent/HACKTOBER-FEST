#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{ clrscr();
	char string1[100], string2[100];
	scanf("%[^\n]\ns", string1);
	printf("Enter the first string: %s", string1);
	scanf("%[^\n]\ns", string2);
	printf("\nEnter the second string: %s", string2);
	printf("\nAre both strings same: ");
	if (strcmp(string1, string2) == 0) 
  	printf("Yes");
	else
		printf("No");
	getch();
  return 0;
}
