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
#include <stdbool.h>

bool Ex5(char *str){
	//Your codes here
	 int k=strlen(str);
	char buf[k];
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
                return false;
        }
        if(*str == ']')
        {
            if(buf[i - 1] == '[')
                i--;
            else
                return false;
        }
        if(*str == '}')
        {
            if(buf[i - 1] == '{')
                i--;
            else
                return false;
        }
        str++;
    }
    if(i == 0)
        return true;
    else
        return false;
}
	


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	if(Ex5(testcase)==true)
	{
		printf("Valid");
	}else
	{
	printf("Invalid");
	}
	return 0;
}
