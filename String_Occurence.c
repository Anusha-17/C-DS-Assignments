#include<stdio.h>
#include<string.h>  
int check(char *str,char c)
{
    int i,k=0;
      for(i=0;str[i];i++)  
    {
        if(str[i]==c)
        {
          k=1;
          break;
        }
    }
   if(k)
    return i;
   else
    return -1;      
 }
int main()
{
    char str[1000],c;  
    int n;
    printf("Enter the string : ");
    gets(str);
    printf("Enter character to be searched: ");
    c=getchar();
    n=check(str,c);   
    if(n>-1)
        printf("character  %c  is first occurrence at location:%d ",c,n);
    else
        printf("character is not in the string ");  
    return 0;      
}
