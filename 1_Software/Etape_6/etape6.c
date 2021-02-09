#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "assert.h"
#include "pgcd.h"

int main (int argc, char * argv []){

	printf("(II) Starting PGCD program\n");

    assert(PGCD(0,34)==34);
    assert(PGCD(55,555)==5);
    assert(PGCD(65535,65535)==65535);
    assert(PGCD(12645,65535)==15);
    assert(PGCD(2,4)==3); //erreur

    printf("(II) End of PGCD program\n");


  return 0;
}