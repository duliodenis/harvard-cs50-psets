//  Problem Set 1: Itsa Mario
//  Created by Dulio Denis on 7/2/15.
// --------------------------
#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;

    // ensure the height is between 0 and 23
    do {
        printf("height: ");
        height = GetInt();
        
        // provide a tip
        if ((height < 0) || (height > 23)) printf("Ensure the value is between 1 and 23\n");
    } while ((height < 0) || (height > 23));
    
    int width = height + 1; // the width of the pyramid is one more than the height
    
    for (int pyramidHeight = 0; pyramidHeight < height; pyramidHeight++) {

        for (int pyramidWidth = 0; pyramidWidth < width; pyramidWidth++) {
        
            if (pyramidWidth <= width-3-pyramidHeight) printf(" ");
            else printf("#");   

        }
        printf("\n");
    }
}

/* Output Check:
jharvard@appliance (~/psets): ./mario
height: 100
Ensure the value is between 1 and 23
height: 8
       ##
      ###
     ####
    #####
   ######
  #######
 ########
#########
jharvard@appliance (~/psets): check50 2014.fall.pset1.mario mario.c
Checking..........................................................................................................:) mario.c exists
:) mario.c compiles
:) rejects a height of -1
:) handles a height of 0 correctly
:) handles a height of 1 correctly
:) handles a height of 2 correctly
:) handles a height of 23 correctly
:) rejects a height of 24
:) rejects a non-numeric height of "foo"
:) rejects a non-numeric height of ""
https://sandbox.cs50.net/checks/d276bd1496f34ba1becb13aeeb39d30c
*/
