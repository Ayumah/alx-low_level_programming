#include <stdio.h>
/**
 *print to standard error
 */
int main(void)
{
	fprintf( stderr, "my %s has %d chars\n", "string format", 30);
	return (0);
}
