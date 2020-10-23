#include <stdio.h>

int mystery( int a, int b ); /* function prototype */
 int main( void )
 {
 int x; /* first integer */
 int y; /* second integer */

printf( "Enter two integers: " );
scanf( "%d%d", &x, &y );

 printf( "The result is %d\n", mystery( x, y ) );
 return 0; 
 } /* end main */

 int mystery( int a, int b )
 {
 /* base case */
if ( b == 1 ) {
 return a;
 } /* end if */
 else { /* recursive step */
 return a + mystery( a, b - 1 );
 } /* end else */
 getch ();
 return 0;
 } /* end function mystery */
	
