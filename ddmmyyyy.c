#include<stdio.h>
int main()
{
    int d,m,y;
    printf("\n\nHello!!\n\nPlease enter the date in \"DD/MM/YYYY\" format\n\n");
    scanf("%d/%d/%d",&d,&m,&y);                                                   //New thing I learnd here, Source:https://stackoverflow.com/questions/28744407/taking-date-as-dd-mm-yy-in-c-language//
    printf("\n\nDay-%d, Month-%d & Year-%d\n\n",d,m,y);
    return 0;
}
