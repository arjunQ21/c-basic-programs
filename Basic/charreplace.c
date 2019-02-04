#include<stdio.h>
void char_replace(char*, char);
int main()
{
	
	char word[150],ch;
	printf("Enter a string:\n");
	gets(word);
	printf("Enter the charater which you want to remove:  ");
	scanf("%c",&ch);
	char_replace(word,ch);
	printf("Output String:\n");
	puts(word);
	return 0;
}
void char_replace(char* p, char search)
{
	char *c;
	while( *p!='\0')
	{
		if(*p == search)
		{
			c=p;
			while (*c!='\0')
			{
				*c=*(c+1);
				c++;
			}
			p--;
		}
		p++;
	}
}
