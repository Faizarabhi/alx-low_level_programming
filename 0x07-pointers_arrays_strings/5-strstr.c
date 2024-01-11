#include "main.h"
/**
 * _strstr - the function
 * @haystack: first par
 * @needle: seconde par
 * Return: tha firsy occurance of accept
 */
char *_strstr(char *haystack, char *needle)
{
	int h = 0, con = 0;
	int hh, n, an;
	char *ptr;

	while (needle[con])
		con++;
	if (con == 0)
		return (haystack);
	while (haystack[h] != '\0')
	{
		if (haystack[h] == needle[0])
		{
			ptr = &haystack[h];
			hh = h;
			an = 0;
			for (n = 0; n < con; n++)
			{
				if (haystack[hh] == needle[n])
					an++;
				hh++;
			}
		if (an == con)
			return (ptr);
		}
	h++;
	}
	return ('\0');
}
