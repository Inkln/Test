#include <string.h>

char* whatisyourname(void)
{
	char* result = calloc (257, sizeof(char));
	memcpy (result, "neo", 3);
	memset (result + 3, ' ', 256 - 3);
	result[256] = 0;
	return result;
}
