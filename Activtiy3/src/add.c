#include "ascii_value.h"
#include "add.h"

int add(char a[])
{
	int s=0,i=0;
    	while(a[i])
    	{
         	a[i++];
         	s=s+a[i];
    	}
    	printf("\nSUM = %d",s);
}
