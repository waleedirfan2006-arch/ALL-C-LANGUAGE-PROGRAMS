#include <stdio.h>
void cubeByReference(int *nPtr) {
*nPtr = *nPtr * *nPtr * *nPtr;
}
int main( void ) {
int number ; // initialize number
printf( "Enter an integer: " );
scanf( "%d", &number );
printf( "The original value of number is %d \n", number );
//pass address of the number to cubeByReference
cubeByReference( &number);
printf( "The cube value of number is %d", number );
}