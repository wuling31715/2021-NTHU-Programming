#include "string.h"
#include "stdlib.h"
#include "stdio.h"
 
int main()
{
  char str[]="00:22:33:4B:55:5A";
  char *delim = ":";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok(str,delim);
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, delim);
  }      
  return 0;
}