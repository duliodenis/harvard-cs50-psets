//  Problem Set 1: Itsa Mario
//  Created by Dulio Denis on 7/2/15.
// --------------------------
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("height: ");
    int height = GetInt();
    // check to see that height is > 0 and < 23
    
    for (int pyramidHeight = 0; pyramidHeight < height; pyramidHeight++) {
        int spaces = 0;
        for (int steps = 0; steps < height + 1; steps++) {
            if (spaces < pyramidHeight - steps -1) printf(" ");
            else printf("#");   
            spaces++; 
        }
        printf("\n");
    }
}

