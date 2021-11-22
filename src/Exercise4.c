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

	int len = strlen(str);
	int count = 0;
	for (int i = 0; i <= len; i++)
	{

		if (str[i] != ' ')
		{
			break;
		}
		count++;
	}
	int count1 = 0;
	for (int j = len - 1; j > 0; j--)
	{

		if (str[j] != ' ')
		{
			break;
		}
		count1++;
	}

	for (int k = count; k < len - count1; k++)
	{
		if (!(str[k] == ' ' && str[k + 1] == ' '))
		{
			printf("%c", str[k]);
		}
	}
}


	


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}