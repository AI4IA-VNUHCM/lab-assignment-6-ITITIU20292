/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here

	 int  i,k=0;
 
	  for(i=0;str[i];i++)
     {
      	str[i]=str[i+k];
 
     	
     	if(str[i]==' '|| str[i]=='\t')
      	{
	 	  k++;
	 	  i--;
	     }
     	
    }
	 printf("%s",str);
}


	


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}