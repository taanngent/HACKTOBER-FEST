#include<iostream.h>
#include<conio.h>
#include <string.h> 

void main()
{
	clrscr();
	char str1[30], str2[30] ;
	cout<<"Enter a string : \n";
	cin>>str1
	strcpy(str2,str1);    
	strrev(str2);         
	if( strcmp(str1, str2) == 0 )
		cout<<"\n The string is a palindrome.\n";
	else
		cout<<"\n The string is not a palindrome.\n";
	getch();
}
