#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* create_array - create array of size size and assign char c
* @size: size of array
* @c: char to assign
* Description: create array of size size and assign char c
* Return: pointer to array, NULL if fail
*/
char *create_array(unsigned int size, char c);
int main(void)
{
char *ptArr;
char c;
unsigned int size;
int x = 0;
ptArr = malloc(size * sizeof(char));
for (x = 0; x < size; x++)
{
ptArr[x] = c;
}
return (ptArr);
}
