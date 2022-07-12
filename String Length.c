#include<stdio.h>
int main()
{
    int len; char str[1000];
    printf("\n\nHi,\nPlease enter the string\n\n");
    scanf("%s",&str);                               //here the question is to calculate the length of the string using printf, not sure about it.
    len=strlen(str);
    printf("The length of your string is %d\n\n",len);
    return 0;
}
