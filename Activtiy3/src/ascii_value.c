#include "ascii_value.h"
#include "add.h"

int ascii(char a[])
{	int i=0;
	printf("ASCII values: ");
    	while(a[i])
    	{
         	printf("%x ",a[i++]);
    	}
}