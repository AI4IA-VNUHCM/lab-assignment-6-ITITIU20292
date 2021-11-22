/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Ex5(char *str){
	//Your codes here
	int k;
	char buf[k];
	 k=strlen(str);
	int i=0;
   while(*str)
    {
        if(*str == '(' || *str == '[' || *str == '{')
        {
            buf[i] = *str;
            i++;
        }
        if(*str == ')')
        {
            if(buf[i - 1] == '(')
                i--;
            else
                return 0;
        }
        if(*str == ']')
        {
            if(buf[i - 1] == '[')
                i--;
            else
                return 0;
        }
        if(*str == '}')
        {
            if(buf[i - 1] == '{')
                i--;
            else
                return 0;
        }
        str++;
    }
    if(i == 0)
        return 1;
    else
        return 0;
}
	


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	if(Ex5(testcase)==1)
	{
		printf("Valid");
	}else
	{
	printf("Invalid");
	}
	return 0;
}
