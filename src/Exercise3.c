/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	    int i=0,j=0,k=0,a,minIndex=0,maxIndex=0,max=0,min=0;
    char substr[100][100]={0},c;
    while(str[k]!='\0')//for splitting sentence
    {
        j=0;
        while(str[k]!=' '&&str[k]!='\0')
        {
            substr[i][j]=str[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str[k]!='\0')
        {
            k++;
        }
    }
    int len=i;
    max=strlen(substr[0]);
    min=strlen(substr[0]);
    for(i=0;i<len;i++)
    {
       a=strlen(substr[i]);
       if(a>max)
        {
            max=a;
            maxIndex=i;
        }
        if(a<min)
        {
            min=a;
            minIndex=i;
        }
    }

	printf("Shotest word: %s",substr[minIndex]);
	printf("\nLongest word: %s",substr[maxIndex]);

	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
