#include "print.h"
#include <stdio.h>
#include <inttypes.h>

void print_line(int64_t number, char *string)
{
	(void) number;
	(void) string;
	// Add code here.
	int64_t i = number;
	printf("%" PRId64 "\n", i);


}
