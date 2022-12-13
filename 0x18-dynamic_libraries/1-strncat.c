#include "main.h"

/**
*_strncat - Funtion to cocatenate n amount of character
*
*@dest: Destination
*@src: Source
*@n: Variable
*Return:pointer to Destination
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int r = 0;
	int tam = 0;

	for (; dest[tam];)
	{
		tam++;
	}

	while (r < n && src[r])
	{
		dest[tam + i] = src[r];
		i++;
		r++;
	}
	return (dest);
}
