#include <stdio.h>
#include <stdlib.h>
/* main fuction */
int main( int argc, char const *argv[] )
{
	int num;
	num = atoi(argv[1]); // assigning a variable to argv[1]

	if(argc == 2){ // if argc is = to 2 then it will run the while loop

		while( num != 1 ){ // loop until 1 is reached
			if( num % 2 == 0 ){     /* hailstone formula */
				num = ( num / 2 );
			} else {
				num = ( (num * 3) + 1 );
			}
			printf( "%d\n", num ); 
		}
	}
	return 0;
}
