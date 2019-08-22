/* Demustra la saliada a impresor */
#include <stdio.h>

int main(){
    float f = 2.0134;

    fprintf( stderr, "This message is printed.\n\n" );
    fprintf( stderr, "and now some numbers:\n\n" );
    fprintf( stderr, "the square of %f is  %f.", f, f*f);

    /* Envia un avance de forma. */
    fprintf( stderr, "\f" );

    return 0;
}