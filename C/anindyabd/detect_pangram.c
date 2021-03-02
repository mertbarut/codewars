#include <stdbool.h>

bool is_pangram(const char *str_in)
{
	int c; 
    int mask;
    mask = (1 << 26) - 1; /* (1 << n) - 1 will produce a mask with n lowest bits set to 1. */
	while ((c = (*str_in++)) != '\0') /* 0x20 converts lowercase to upper */
		if ((c &= ~0x20) <= 'Z' && c >= 'A')
			mask &= ~(1 << (c - 'A'));
 
	return !mask;
}
