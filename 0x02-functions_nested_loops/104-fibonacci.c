#include<stdio.h>
/**
 * main - function to print the first 100 fibonacci numbers
 *
 *
 * return: 0 for success
 */
int main()
{
    int count, first_term = 1, second_term = 2, next_term, i;
 

	for ( i = 0 ; i < count ; i++ )
	{
		if ( i <= 1 )
		next_term = i;
		
		else
		{
			next_term = first_term + second_term;
			first_term = second_term;
			second_term = next_term;
		}	
		printf("%d\n",next_term);
	}
 
    return 0;
}
