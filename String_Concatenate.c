#include<stdio.h>
#include <string.h>
void stringconcatenate(char *s1,char *s2)
{
	int i,j;
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++,i++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("Length of contatenated string is = %d\n",strlen(s1));
}
int main()
{
    char s1[1000],s2[1000];  
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    stringconcatenate(s1,s2);
    printf("Concatenated two strings ='%s'\n",s1);
    return 0;    
}
