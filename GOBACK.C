#include<stdio.h>
#include<conio.h>
void main()
{
char sender[50],receiver[50];
int i,winsize;
clrscr();
printf("\n ENTER THE WINDOWS SIZE:");
scanf("%d",&winsize);
printf("\n SENDER WINDOW IS EXPANDED TO STORE MESSAGE OR WINDOW \n");
printf("\n ENTER THE DATA TO BE SENT:");
fflush(stdin);
gets(sender);
for(i=0;i<winsize;i++)
receiver[i]=sender[i];
receiver[i]=NULL;
printf("\n MESSAGE SEND BY THE SENDER:\n");
puts(sender);
printf("\n WINDOW SIZE OF RECEIVER IS EXPANDED \n");
printf("\n ACKNOWLEDGEMENT FROM RECEIVER \n");
for(i=0;i<winsize;i++)
printf("\n Ack:%d",i);
printf("\n MESSAGE RECEIVED BY RECEIVER is:");
puts(receiver);
printf("\n WINDOW SIZE OF RECEIVER IS SHRINKED \n");
getch();
}