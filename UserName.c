#include<stdio.h>
int main()
{
char fn[100] ;
char sn[100] ;
printf("\n\nHello buddy!!\n\nMay I know your first name, please!\n\n");
scanf("%s",fn);
printf("\n\n& your second name, is...\n\n");
scanf("%s",sn);                                                                //Here I learnt how to call a string Source: https://www.youtube.com/watch?v=D_ceSWQw46o//
printf("\n\n\"Hello, %s %s\"\n\n",fn,sn);
return 0;
}
