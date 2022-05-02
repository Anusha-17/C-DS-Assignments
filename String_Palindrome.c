#include<stdio.h>
#include<string.h>
int palindrome(char s[],int n)
{
	int i,c=0;
	n=strlen(s);
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
    return 0;
	
}
int main()
{
    char s[1000];  
    int i,n,c=0;
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);
    palindrome(s,n);
    return 0;
}
