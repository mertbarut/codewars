int	ft_strlen(const char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int longest_palindrome(const char *s)
{
    int length;
    length = ft_strlen(s);

    if (length == 0)
    {
        return (0);
    }

    int result, i, j, l, count;
    result = 1;
    i = 0;
    count = 0;
    j = ft_strlen(s);
    while (s[i] != '\0')
    {
        if (s[i] == 32)
        {
            i++;
        }
        while (s[i] != s[j] && j > 0)
        {
            j--;
        }

        l = i;

        while (s[i + 1] == s[j - 1] && j > i)
        {
            i++;
            j--;
            count += 2;
            if (j == i)
            {
                count += 1;
            }
        }

        if (((i - j == 1) || (i - j == -1) || (i - j == 0)) && count > result)
        {
            result = count;
        }
        count = 0;
        i = l + 1;
        j = length;
    }
    return (result);
}

#include <stdio.h>

int main()
{
    printf("%d = 1\n", longest_palindrome("a"));
    printf("%d = 2\n", longest_palindrome("aa"));
    printf("%d = 2\n", longest_palindrome("baa"));
    printf("%d = 2\n", longest_palindrome("aab"));
    printf("%d = 1\n", longest_palindrome("zyabyz"));
    printf("%d = 4\n", longest_palindrome("baabcd"));
    printf("%d = 4\n", longest_palindrome("zzbaabcd"));
    printf("%d = 9\n", longest_palindrome("baablkj12345432133d"));
    printf("%d = 9\n", longest_palindrome("aaaaabaaaaaaaaaaaaa"));
    printf("%d = 7\n", longest_palindrome("I like racecars that go fast"));
    return (0);
}