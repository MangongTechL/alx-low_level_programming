#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *conct;
int i, j;
if (str1 == NULL)
str1 = "";
if (str2 == NULL)
str2 = "";
i = j = 0;
while (str1[i] != '\0')
i++;
while (str2[j] != '\0')
j++;
conct = malloc(sizeof(char) * (i + j + 1));
if (conct == NULL)
return (NULL);
i = j = 0;
while (str1[i] != '\0')
{
conct[i] = str1[i];
i++;
}
while (str2[j] != '\0')
{
conct[i] = str2[j];
i++, j++;
}
conct[i] = '\0';
return (conct);
}
