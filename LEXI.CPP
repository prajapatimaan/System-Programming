#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char keyword[8][15]=
			{"int","float","defualt","void","defualt","getch"
			,"printf","return"};
      char op[]={'=','+','-','*','/','%','==','!=','<='};
      char sp[]={';','<','{','}','(','>',',','#',')'};
	int i,k,j,flag;
	char c;
       char s[100];
	clrscr();
	FILE *fp;
	fp=fopen("p2.txt","r");
	while((c=fgetc(fp)) != EOF)
	{
		  flag=0;
		  for(k=0;k<strlen(op);k++)
		  {
			if(c==op[k])
			{
				flag=1;
				break;
			}
			else if(c==sp[k])
			{
				flag=2;
				break;
			}
		  }
		  if(flag==1)
		  {
			printf("%c is operator\n",c);
		  }
		  else if(flag==2)
		  {
			printf("%c is Special character\n",c);
		  }
	else{
		if(c!= ' ' && c!= '\n')
			{
			s[i]=c;
			i++;

		}//if1
		else
		{
			if(i!=0)
			{
			s[i]=NULL;
			flag=0;
			for(j=0;j<=8;j++)
			{
				if(strcmp(s,keyword[j])==0)
				{
					flag=3;
					break;
				}

			}

			if(flag==3)
			{
				printf("%s is KEyword\n",s);
			}
			else
			{
				printf("%s is identifier\n",s);
			}
			i=0;
			}
			}
		} //else1
	}   //while
	fclose(fp);
	getch();
}
