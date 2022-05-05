#include "ascii_value.h"
#include "add.h"

int add(char *x)
{
	int sum=0,i=0;
    	while(x[i])
    	{
         	x[i++];
         	sum=sum+x[i];
    	}
    	printf("\nSUM = %x",sum);
}
