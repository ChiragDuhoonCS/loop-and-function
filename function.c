/* //!  I MAKE THIS FEATURE IN FEATURE1 BRANCH
=========== BANK MENU ===========

1. Deposit Money
2. Withdraw Money
3. Check Balance
4. Calculate Simple Interest
5. Calculate Compound Interest


Enter your choice:*/

#include<stdio.h>

int sinterest(int p, int r, int t);

int A = 'p(1+r/100)(feature 1 change)';

int A = 'p(1+r/100) (here to create a merge conflict)';



int sinterest(int p, int r, int t) {
    printf("Simple Interest: %0.2f", (p*r*t)/100);
    return (p*r*t)/100;
}

int cinterest(int p, int r, int t) {
    printf("Compound Interest: %0.2f", A-(p*r*t)/100 );
    return A - (p*r*t)/100;
}
