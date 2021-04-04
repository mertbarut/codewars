#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* travel(char* orgr, char* zipcode)
{
    char *found = malloc(sizeof(char) * strlen(orgr) + 1);
    char *address = malloc(sizeof(char) * strlen(orgr) + 1);
    char *housenumber = malloc(sizeof(char) * 5);
    found = strtok(orgr, ",");
    if (found == NULL)
    {
        printf("\t'%s'\n", orgr);
        puts("\tNo separators found");
        return (NULL);
    }
    while (found != NULL)
    {
        strcpy(address, found);
        printf("\t'%s'\n", address);
        while (address != NULL)
        {
            housenumber = strtok(address, " ");
            printf("\t\t'%s'\n", housenumber);
            address = strtok(NULL, " ");
        }
        found = strtok(NULL, ",");
    }
    return (found);
}

int main()
{
    char address[] = "123 Main Street St. Louisville OH 43071,432 Main Long Road St. Louisville OH 43071,786 High Street Pollocksville NY 56432,";
    char *result;

    result = travel(address, "OH 43071");
    free(result);
    return (0);
}
