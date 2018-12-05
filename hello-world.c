/***
 * @author Amarkant Kumar<amar.du2013@gmail.com>
 **/

#include<stdio.h>
int main(int argc, char **argv, char **env)
{
    printf( "argc = %d\n", argc );
    for( int i = 0; i < argc; ++i ) {
        printf( "argv[ %d ] = %s\n", i, argv[ i ] );
    }
    return 0;
}
