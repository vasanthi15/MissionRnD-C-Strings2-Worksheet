/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *retstr;
	int len = 0,i=0,ind=0;
	if (str == NULL)
		return NULL;
		while (str[len] != '\0')
			len++;
		len--;
		while (str[len] == ' ')
			len--;
		i = 0;
		while (i<=len)
		{
			if (str[i] == ' ')
				ind = i+1;
			i++;
		}
		retstr = (char *)malloc(sizeof(char)*(len-ind+1));
		retstr = &str[ind];
		retstr[(len - ind+1)] = '\0';
		return retstr;
}

