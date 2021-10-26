#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int main(int argc, char *argv[])
{
  int i;
    
  for (i = 1; i < argc; i++)
    {
      if (atoi(argv[i]) == 0)
	{
	  putchar(48);
	  putchar(10);
	}
      i = atoi(argv[i]) + atoi(argv[i + 1]);
	       printf("%d\n", i);
	       
    }
	       return (0);	       
}
