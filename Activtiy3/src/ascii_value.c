#include "ascii_value.h"
#include "add.h"

int ascii(char *x)
{	int i=0;
	printf("ASCII values: ");
    	while(x[i])
    	{
         	printf("%x ",x[i++]);
    	}
}