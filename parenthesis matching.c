#include <stdio.h>
#include <string.h>
void main()
{
	char a[20];
	printf("Enter expression in parenthesis");
	gets(a);
	int i,top=-1,s[20];
	for (i=0;i<=strlen(a);i++)
	{
		if (a[i]=='[' || a[i]=='{' || a[i]=='(')
		{
			top++;
			s[top]=a[i];
		}
		else if ((a[i]==']' && s[top]=='[') || (a[i]=='}' && s[top]=='{') || (a[i]==')' && s[top]=='('))
		{
			top--;
		}
	}
	if (top==-1)
	{
		printf("Parenthesis Balanced");
	}
	else
	{
		printf("Parenthesis Unbalanced");
	}
}
