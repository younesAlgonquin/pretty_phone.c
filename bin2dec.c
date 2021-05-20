
/**************************************************************************
Declare include files
***************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/**************************************************************************
 * Main function
 * this program reads a binary number 
 * then calculates and prints the equivalent decimal number
 * It takes no parameters and returns EXIT_SUCCESS value
 * Version: 1.0
 * Author/Student Name: Younes Boutaleb
 **************************************************************************/
int main(void)
{

    /*this is the user's input*/
    int binNumber = 1;
    /*this is the equivalent decimal number*/
    int decNumber;
    /*this is the result of the recursive devision of the input by 10*/
    int j;
    /*this stores the multiples of 2*/
    int i;

    while (binNumber != 0)
    {
        /*read the user's input*/
        printf("Enter a binary number: ");
        scanf("%d", &binNumber);
        j = binNumber;
        decNumber = 0;
        i = 1;

        /*
        this loop determines the binary number digits which are the rests of its recursive
        divisio by 10, then multiply it by the corresponding multiple of 2 
        according to its position in the binary number
        the total of the resulting numbers represents the decimal number
        */
        while (j != 0)
        {
            decNumber += i * (j % 10);
            j = j / 10;
            i *= 2;
        }/*end while*/

        if (binNumber == 0)
            exit(EXIT_SUCCESS);
        else
            printf("The decimal equivalent of %d is %d\n", binNumber, decNumber);
    }/*end while*/

    return EXIT_SUCCESS;
}/*end main*/