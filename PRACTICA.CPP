#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char c;
	int line=1,word=1,ch=0;
	FILE *fp;
	fp=fopen("c:\\TURBOC3\\BIN\\hello.txt","r");
	if(fp != NULL)
	{
		printf("file found");
		c=fgetc(fp);
		printf("%c",c);
	}
	while((c=fgetc(fp)) != EOF)
	{
		if(c == '\n')
		{
			line++;
			word++;
			ch++;
		}
		else if(c == ' ')
		{
			word++;
			ch++;
		}
		else
		{
			ch++;

		}
		fclose(fp);
		printf("line:%d \n word:%d \n character:%d",line,word,ch);
		getch();

	}
}
