#include <stddef.h>
#include <ctype.h>
#include <stdio.h>

size_t find_longest(const char *words) 
{
  size_t length = 0, max_length = 0;
  const char *pchar = words;
  
  int i;
  i = 0;
  while (pchar[i] != '\0') 
  {
    if (isspace(pchar[i]) || pchar[i + 1] == '\0') 
    {
      if (length > max_length) 
      {
        max_length = length;
        if (pchar[i + 1] == '\0')
        {
            max_length++;
        }
      }
      length = 0;
    } 
    else 
    {
        length++;
    }
    if (pchar[i + 1] == '\0')
    {
        break ;
    }
    i++;
  }
  return (max_length);
}

int main()
{
    printf("%d\n", find_longest("Lets all go on holiday"));
    return (0);
}