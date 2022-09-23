#include "main.h"
#include <string.h>
/**
* _strcpy - copy paste string
* @dest: destination or paste location
* @src: source or copy location
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
	int gwu = 0;

	while (*(src + gwu) != '\0')
	{
		*(dest + gwu) = *(src + gwu);
		gwu++;
	}
	*(dest + gwu) = '\0';
}
