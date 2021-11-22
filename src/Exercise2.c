/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
	int sort[n];

	for(int i = 0; i < n; i++)
		sort[i] = i;

	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
		{
			int k = 0;

			while(str[sort[i]][k] != '\0')
			{
				if(str[sort[i]][k] > str[sort[j]][k])
				{
					int temp = sort[i];
					sort[i] = sort[j];
					sort[j] = temp;
					break;
				}else if(str[sort[i]][k] == str[sort[j]][k]) 	
					k++;
				else
					break;
			}
		}

	for(int i = 0; i < n; i++)
		printf("%s ", str[sort[i]]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	return 0;
}
