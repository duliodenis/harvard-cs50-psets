//  Problem Set 1: Time for Change
//  Created by Dulio Denis on 7/4/15.
// ----------------------------------
#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int coinsReturned = 0;
    
    printf("How much change is owed? \n");
    float change = GetFloat();
    // ensure we get a non-negative amount
    while (change < 0) {
        printf("How much change is owed? \n");
        change = GetFloat();
    }
    
    // round amount to 2 decimals and
    // convert entirely to cents (float -> int)
    int amount =  round(change * 100);
    
    while (amount > 0) {
        if ((amount - 25) >= 0) { amount = amount - 25; coinsReturned++; }
        else if ((amount - 10) >= 0) { amount = amount - 10; coinsReturned++; }
        else if ((amount - 5) >= 0) { amount = amount - 5; coinsReturned++; }
        else if ((amount - 1) >= 0) { amount = amount - 1; coinsReturned++; }
    }
    
    printf("%d\n", coinsReturned);
}

/* Output Check:
jharvard@appliance (~/psets): make greedy
clang -ggdb3 -O0 -std=c99 -Wall -Werror    greedy.c  -lcs50 -lm -o greedy
jharvard@appliance (~/psets): ./greedy
How much change is owed? 
-0.41
How much change is owed? 
-0.41
How much change is owed? 
foo
Retry: 0.41
4
jharvard@appliance (~/psets): check50 2014.fall.pset1.greedy greedy.c
:) greedy.c exists
:) greedy.c compiles
:) input of 0.41 yields output of 4
:) input of 0.01 yields output of 1
:) input of 0.15 yields output of 2
:) input of 1.6 yields output of 7
:) input of 23 yields output of 92
:) input of 4.2 yields output of 18
:) rejects a negative input like -.1
:) rejects a non-numeric input of "foo"
:) rejects a non-numeric input of ""
https://sandbox.cs50.net/checks/16a17ee0d9b64a2098dba8ca832d16f9
*/
