#include "main.h"
/**
*rev_string - reverse a string
*
*@s: pointer to string
*/
void rev_string(char *s)
{
	int i, j, strlen, count;
	char holder;

	for (strlen = 0; *(s + strlen) != '\0'; strlen++)
	{
	}

	j = strlen - 1;
	count = strlen;

	for (i = 0; i < strlen; i++)
	{
		if (count > 1)
		{
			holder = *(s + i);
			*(s + i) = *(s + j);
			*(s + j) = holder;
			j--;
			count -= 2;
		}
	}
}
