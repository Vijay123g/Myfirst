/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order./ */

#include<stdio.h>

int isValid(char * s)
{
 

    int i;
    
    for(i=0;i<5;i++)
    {
    if ((s[i]==40) || (s[i]==41) || (s[i]==91) || (s[i]==93) || (s[i]==123) || (s[i] ==125))
    { 
        return true;
        
    }
        
    }
   return false; 
}




void main()
{
	
	 
	 
	 
	int i,n;
	char* s[100];

	scanf("%d",&n); 
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	} 
	
 isValid(s[i]);
}
