int PGCD(int A, int B)
{
    assert(0<=A && A<65536); //assert d'entrée
    assert(0<=B && B<65536); 
    
    int a = A;
    int b = B;

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
    assert (A>=0);          //assert de sortie
    assert (A<=a && A<=b);
    return A;
}