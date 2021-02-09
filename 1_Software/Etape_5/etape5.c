#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "assert.h"
#include "iostream"

int PGCD(int A, int B)
{
    /*if (A==0)
        return B;
    if (B==0)
        return A;*/
    assert(0<A && A<65536); //assert d'entrée
    assert(0<B && B<65536);    
    while(A!=B){
        if(A>B)
            A=A-B;
        else
            B=B-A;
        }
    return A;
}

int PGCD2(int a, int b){
   
    assert(0<a && a<65536); //assert d'entrée
    assert(0<b && b<65536);
    while (b!=0){
        int c = a;
        a=b;
        b=c%b;
    }
    return a;
}

int RandA(){
    int A = rand();//%65536;
    return A;
}

int RandB(){
    int B = rand()%65536;
    return B;
}

int main (int argc, char * argv []){

	printf("(II) Starting PGCD program\n");

for(int i=0 ; i<2000 ; i++){

	int a = RandA();
    int b = RandB();

    int pgcd = PGCD(a,b);
    int pgcd2 = PGCD2(a,b);

    assert(0<pgcd && pgcd<=a);  //assert de sortie
    assert(0<pgcd && pgcd<=b);
    assert(0<pgcd2 && pgcd2<=a);
    assert(0<pgcd2 && pgcd2<=b);

    if(PGCD(a,b)!=PGCD2(a,b)){
        printf("a=%d\nb=%d\n",a,b);
        printf("PGCD = %d\n",pgcd);
        printf("PGCD2 = %d\n",pgcd2);}}

    printf("(II) End of PGCD program\n");


  return 0;
}