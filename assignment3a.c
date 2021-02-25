/*A segment is defined to be a contiguous sequence of non-space characters./
Example 1:

Input: s = "Hello, my name is John"
Output: 5
Explanation: The five segments are ["Hello,", "my", "name", "is", "John"]*/


#include<stdio.h>

int countSegments(char * s){
    int count=1;
    int i;
    int len;
  
    for(i=0;i<len;i++)
    {
        if(s[i]==32)
        {
            count ++;
        }
    
    }
    if(len==0)
    {
    	count --;
	}
   return count;
}

void main()
{
	int i,len;
	char* s[100];
	int countSegments;
	
	scanf("%d",&len);
	
	for(i=0;i<=len;i++)
	{
		scanf("%c",&s[i]);
	}
	
 countSegments(s[i]);
}
