#include <iostream>

int main()
{
    int A,B,C;
    printf("enter numbers for A,B,and C");
    scanf("%d %d %d" , &A, &B, &C);

    if(A>= B && A >=C)
    printf("%D is the largest number.", A);

    else if (B>= A && B>= C)
    printf("%d is the largest number.", B);
    else 
    printf("%d is largest number.", C);

    return 0;

}