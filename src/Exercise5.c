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
   int Ex5 = 1;
   for(int i = 0; i < strlen(str); i++ ) {

   if((str[i] == '(' && str[i+1] ==')') || 
       (str[i] == '{' && str[i+1] =='}') || 
       (str[i] == '[' && str[i+1] ==']'))
     continue;

    Ex5= 0;
    break;
   }
 return Ex5;
}
	


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	if(Ex5(testcase)==0)
	{
		printf("Valid");
	}else
	{
	printf("Invalid");
	}
	return 0;
}
