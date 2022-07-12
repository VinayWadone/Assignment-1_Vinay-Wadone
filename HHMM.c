#include<stdio.h>
int main()
{
    int hh,mm;
    printf("Hello!\nEnter the time in HH:MM format, please\n\n");
    scanf("%d:%d",&hh,&mm);
    printf("\n\nSo the time is,\n%d hour and %d Minute\n\n",hh,mm);
    return 0;
}
