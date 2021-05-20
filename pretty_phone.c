
/**************************************************************************
Declare include files
 **************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/**************************************************************************
 * Main function
 * this program reads a phone number and prints it in a standard format
 * It takes no parameters and returns EXIT_SUCCESS value
 * Version: 1.0
 * Author/Student Name: Younes Boutaleb
 **************************************************************************/
int main(void)
{

    /*this is the phone number entered by the user*/
    int number = 1;
    /*this while loop continue till the user enters 0*/
    while (number != 0)
    {
        /*read the user's input*/
        printf("Enter a phone number: ");
        scanf("%d", &number);

        /*the program the user's input*/
        if (number == 0)
            exit(EXIT_SUCCESS);

        else if (number <=999999)
            printf("Invalid phone number: too few digits\n");
        
        else if (number <=1999999)
            printf("Invalid central office code: 1\n");

        /*
        in the case of a valid 7 digits input
        the program determins the entered digits using the integer division
        */
       else if (number>1990000 && number <= 9999999){
            printf("%d-", number/10000);
            number = number - (number/10000)*10000;
            printf("%d", number/1000);
            number = number - (number/1000)*1000;
            printf("%d", number/100);
            number = number - (number/100)*100;
            printf("%d", number/10);
            number = number - (number/10)*10;
            printf("%d\n", number);
            number=1;
        }/*end if*/

        else 
            printf("Invalid phone number: too many digits\n");
    }/*end while*/

    return EXIT_SUCCESS;
}/*end main*/