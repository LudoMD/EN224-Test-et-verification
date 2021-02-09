#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int PGCD(int A, int B)
{
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

int PGCD2(int a, int b){
   
    while (b!=0){
        int c = a;
        a=b;
        b=c%b;
    }
    return a;
}

int RandA(){
    int A = rand()%65536;
    return A;
}

int RandB(){
    int B = rand()%65536;
    return B;
}

int main (int argc, char * argv []){

	printf("(II) Starting PGCD program\n");

for(int i=0 ; i<20 ; i++){

	int a = RandA();
    int b = RandB();

    if(PGCD(a,b)!=PGCD2(a,b)){
        printf("a=%d\nb=%d\n",a,b);
        printf("PGCD = %d\n",PGCD(a,b));
        printf("PGCD2 = %d\n",PGCD2(a,b));}}

    printf("(II) End of PGCD program\n");


  return 0;
}