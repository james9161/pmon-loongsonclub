#include <stdio.h>

main()
{
int	c;

	for( ;; ) {
		if( getchar() == EOF )
			break;
		if( getchar() == EOF )
			break;
		if( getchar() == EOF )
			break;
		if( (c = getchar()) == EOF )
			break;
		putchar(c);
	}
	return 0;
}

