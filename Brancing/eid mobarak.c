
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
#define X 25
void main()
{
         int i,j,l,t,color=10,z,BLUE;
         char temp;
         char* str="Eid Mubarak!";   /*You can change the text here what ever you want to print*/
         clrscr();
         gotoxy(X,X-1);
         l=strlen(str);
         clrscr();
         gotoxy(X,X);
         textcolor(BLUE);
         cprintf("%s",str);
         for(i=0;i<l;i++)
         {
            temp=*(str+i);
            gotoxy(X+i,X);
            printf(" ");

            for(j=X;j<50;j++)
            {
            gotoxy(X+i,j);
            z=random(color);
            textcolor(z);
            cprintf("%c",temp);
            delay(100);
            gotoxy(X+i,j);
            printf(" ");
            }
         }

getch();
}
