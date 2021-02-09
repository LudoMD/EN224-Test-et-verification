#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/*FONCTION PGCD( A, B )
  TANT QUE A /= B ALORS
    SI A > B ALORS
      A = A – B
    SINON
      B = B – A
    FIN ALORS
  FIN TANT QUE
  RENVOYER A
FIN FONCTION*/

int PGCD(int A, int B)
{

	/*
    while(A!=B){
        if(A>B)
            A=A-B;
        else
            B=B-A;
        }
    return A;*/

    if (A==0)
        return B;
    if (B==0)
        return A;
        
    while(A!=B){
        if(A>B)
            A=A-B;
        else
            B=B-A;
        }
    return A;
}

int main (int argc, char * argv []){
	printf("(II) Starting PGCD program\n");

	printf("PGCD = %d\n",PGCD(15,20));

	printf("(II) End of PGCD program\n");
  return 0;
}
