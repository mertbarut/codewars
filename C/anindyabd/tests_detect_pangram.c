#include <stdbool.h>
#include <stdio.h>

bool is_pangram(const char *str_in);

int main(void)
{
	int i;
	const char *tests[] = {
		"The quick brown fox jumps over the lazy dog.",
		"The qu1ck brown fox jumps over the lazy d0g.",
        "zA B? cD45EFgh, I jKLM NoP. QR56sTUvw!!   3XY",
        "sWBuUoPwDF1X:SwOE7QYq}kuIKh?NaTfVjg.pbxrLvCeTmPGYzl"
	};
 
	for (i = 0; i < 4; i++)
		printf("\"%s\" is %sa pangram\n",
			tests[i], is_pangram(tests[i])?"":"not ");
	return 0;
}