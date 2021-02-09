#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "assert.h"

int PGCD(int A, int B){
while(A!=B){
    assert(A!=0);
    assert(B!=0);
        if(A>B)
            A=A-B;
        else
            B=B-A;
        }
    return A;
}

int main (int argc, char * argv []){
	printf("(II) Starting PGCD program\n");

	printf("PGCD = %d\n",PGCD(15,0));

	printf("(II) End of PGCD program\n");
  return 0;
}