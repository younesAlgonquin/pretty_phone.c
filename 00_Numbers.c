
/**************************************************************************
Declare include files
 **************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/**************************************************************************
 Declare MACROS
 **************************************************************************/
#define MAX 100
#define MIN 1

/**************************************************************************
 * Main function
 * this program prints the numbers from 1 to 100 and identifies the multiples
 * of 3 and 5
 * It takes no parameters and returns EXIT_SUCCESS value
 * Version: 1.0
 * Author/Student Name: Younes Boutaleb
 **************************************************************************/
int main(void)
{

    /*this the for loop variable*/
    int i;
    /*The for loop prints all numbers between 1 and 100
    it also tells if the number is a multiple of 3 or 5*/
    for (i = MIN; i <= MAX; i++)
    {

        if (i % 3 == 0 && i % 5 == 0)
            printf("%d I'm a multiple of 3 && 5!\n", i);
        else if (i % 3 == 0)
            printf("%d I'm a multiple of 3!\n", i);
        else if (i % 5 == 0)
            printf("%d I'm a multiple of 5!\n", i);
        else
            printf("%d\n", i);
    }/*end for loop*/

    return EXIT_SUCCESS;
}/*end main*/
