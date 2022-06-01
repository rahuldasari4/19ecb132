#include<stdio.h>
int main()
{
	char ch;
	printf( "enter the character in upper case ch");
	scanf("%c",&ch);
	ch=ch+32;
	printf("character in lower case=%c",ch);
	return 0;
}
/*output
enter the character in upper case ch 5
character in lower case=@
  */
