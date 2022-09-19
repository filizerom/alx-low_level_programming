#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* strtow - a function that splits a string into words
* @str: a character
* Return: NULL
*/
int wo_leng(char *str);
int coun_word(char *str);
char **strtow(char *str);

/**
* wo_len _ marking the first word
* @str: a character
* Return: end of initial
* */
int wo_leng(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;

	}
	return(j);
}

/**
* coun_word - count number of words
* @str: a character
* Return: 
*/
int coun_word(char *str)
{
	int i = 0, j = 0, k = 0;

	for (i = 0; *(str + i); i++)
		k++;

	for (i = 0; i < k; i++)
	{
		if (*(str + i) != ' ')
		{
			j++;
			i += wo_len(str + i);
		}
	}
	return(j);
}

/**
* strtow - splits  string into words.
* @str: a character
* Return: 
*/
char **strtow(char *str)
{
	char **s;
	int i = 0, j, k, l, m;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	j = coun_word(str);

	if (j == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (j + 1));

	if (s == NULL)
		return (NULL);
	for (k = 0; k < j; k++)
	{
		while (str[i] == ' ')
			i++;
		l = wo_leng(str + i);

		s[j] = malloc(sizeof(char) * (l + 1));
	
		if (s[w] == NULL)
		{
			for (; k >= 0; k--)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < l; l++)
			s[k][m] = str[i];
	
		s[k][m] = '\0';
	}
	s[k] = NULL                                                                                          int coun_word(char *str);                                                                                               char **strtow(char *str); 
