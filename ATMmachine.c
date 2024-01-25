/*
    Program description: Write a C code that asks a user to verify their pin number, change their pin number, displays the number of times the pin was entered succesfully/ incorrectly and exit program. It uses while loops and if statements to run the program.
    Author: Grainne Bannsiter C22331903
    Date: 01/11/2022
*/
#include <stdio.h> 
int main()
{
    int option = 0;
    int curr_pin = 1234;
    int new_pin = 0;
    int ent_pin = 0;
    int ext_pro = 0;
    int end_pro = 2;
    int i = 1;
    int cor_count = 0;
    int in_count = 0;

    // using a while loop to start the program and allow the menu to restart after each option is choosen 
    while (i==1)
    {
        // Menu
        printf("\n\n----\nMenu: \n1. Enter PIN and verify correct \n2. Change PIN \n3. Display the number of times the PIN was entered (i) Successfully (ii) Incorrectly \n4. Exit Program\n----");

        printf("\n\nChoose an option: ");
        scanf("%d", &option);
        // this while is used to prevent the user from entering a blank space as a input 
        while(getchar() != '\n');

        //start of if statement / option 1 uses an if statement to verify the correct pin
        if(option == 1)
        {
            while (option=1)
            {
                printf("\nEnter your current pin: ");
                scanf("%d", &ent_pin);
                while(getchar() != '\n');

                if(ent_pin == curr_pin)
                {
                    printf("\nYour pin has been verified!");
                    // correct counter for option 3
                    cor_count++;
                    break;
                }

                else
                {
                    printf("Try again!");
                    // incorrect counter for option 3
                    in_count++;
                }
            } //end of if statement
        }

        //start of else if statment / option 2 uses an else if and inner if statement to allow the user to create a new pin
        else if(option == 2)
        {
            while (option = 2)
            {
                printf("\n\nType in your new pin: ");
                scanf("%d", &new_pin);
                while(getchar() != '\n');
                
                //start of inner if statement // if statement ensures the user only inputs a 4 digits 
                if(new_pin > 999 && new_pin < 10000)
                    {
                        printf("\nRe-enter your new pin: ");
                        scanf("%d", &curr_pin);
                        while(getchar() != '\n');

                        //start of inner if statement // if statement is to change the curr_pin 
                        if(new_pin==curr_pin)
                        {
                            printf("\nThank you for succesfully updating your new pin!");
                            break;
                        } //end of inner if statement

                        //start of inner else statement
                        else
                        {
                            printf("\nYour second pin does not match your first pin, please try again");
                        } // end of inner else statement
                    }
 
                //start of inner else statement / usees an else statement to error check - only 4 number pin allowed
                else
                {
                    printf("\nError, your pin has to be four numbers");
                } //end of inner else statement
            }
        } //end of else if statement

        //start of else if statement / option 3 uses a counter to count the amount of times option one was done correctly and incorrectly
        else if(option == 3)
        {
            while (option = 3)
            {
                printf("(i) Correct: %d", cor_count);
                printf("\n(ii) Incorrect: %d", in_count);
                break;
            }
        } //end of else if statement

        //start of else statement / option 4 uses an else if statment and while loop to terminate the program gracefully
        else if(option == 4)
        {
            while (option = 4)
            {
                printf("\nAre you sure you want to exit the program:\n1.Yes\n2.No\n ");
                scanf("%d", &ext_pro);
                while(getchar() != '\n');

                //start of inner if statement
                if(ext_pro == 1)
                {
                    // to end the first while in the program 
                    i = end_pro;
                    printf("Bye, thank you for using this service!");
                    //start of inner if statement
                    break;
                }

                //start of inner else if statement
                else if(ext_pro == 2)
                {
                    // restarts and goes back to menu 
                    break;
                } //end of inner else if statement

                //start of else statements 
                else
                {
                    // the user has to enter either 1 or 2 
                    printf("\nTry again!");
                } //end of else statements

            } //end of else statement
        }

        // start of else statement / Error checking - only 1,2,3 and 4 are options
        else
        {
            printf("Error, Please try again!");
        } //end of else statement
    }

    return 0;

} //end main()