#include "parseint.h"
#include <stdio.h>

// Returns the value of c or -1 on error
int parseDecimalChar(char c)
{	if (c){
    	do {
      		printf("%c""\n", c & 0xff); 
      		c >>= 8;
    	} while (c > 0);
	}else{
	return -1;
	}
}

// Parses a non-negative integer, interpreted as octal when starting with 0,
// decimal otherwise. Returns -1 on error.
int parseInt(char *string)
{
    (void)string;

    return -1;
}
