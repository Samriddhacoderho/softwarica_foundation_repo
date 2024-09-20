#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char default_email[30] = "satyalsamriddha@gmail.com";
    int default_pin = 1000;
    char user_email[30];
    int user_pin;
    int attempts = 1;
    int pin_ask;
    int c = 3;

    while (attempts <= 3)
    {
        printf("Enter user email:");
        scanf("%s", user_email);
        printf("Enter user pin:");
        scanf("%d", &user_pin);

        if ((strcmp(user_email, default_email) != 0) && (user_pin != default_pin))
        {
            printf("Email and pin both incorrect\n");
            attempts += 1;
            c -= 1;
            printf("\nAttempts Left:%d\n", c);
        }
        else if ((strcmp(user_email, default_email) != 0) && (user_pin == default_pin))
        {
            printf("Incorrect email id\n");
            attempts += 1;
            c -= 1;
            printf("\nAttempts Left:%d\n", c);
        }
        else if ((strcmp(user_email, default_email) == 0) && (user_pin != default_pin))
        {
            printf("Incorrect pin\n");
            attempts += 1;
            c -= 1;
            printf("\nAttempts Left:%d\n", c);
        }
        else
        {
            printf("Login Successful\n");
            attempts = 5;
        }

        if (attempts == 4)
        {
            printf("You are temporarily banned\n");
            exit(0);
        }
    }

    float initial_balance = 10000;
    int user_choice;
    char user_retrychoice;

repeat:
    printf("**WELCOME**\n Choose any number from the info below:\n1: Withdraw Money\n2: Add Money\n3: Check Balance\n");
    scanf("%d", &user_choice);

    if (user_choice != 1 && user_choice != 2 && user_choice != 3)
    {
        printf("Invalid choice\n");
    }
    else if (user_choice == 1)
    {
        float withdraw_amount;
        printf("Enter amount you want to withdraw:\n");
        scanf("%f", &withdraw_amount);
        if (withdraw_amount > 10000 || withdraw_amount < 0)
        {
            printf("You do not have sufficient balance!\n");
            exit(0);
        }
        else
        {
            printf("Enter your transaction pin:");
            scanf("%d", &pin_ask);

            if (pin_ask != default_pin)
            {
                printf("Incorrect transaction pin\n");
                exit(0);
            }
            else
            {
                printf("Transaction successful\n");
                initial_balance = initial_balance - withdraw_amount;
                printf("Remaining balance:%f\n", initial_balance);
                printf("Do you want to use the service again(Y/N):");
                scanf(" %c", &user_retrychoice);
                if (user_retrychoice == 'Y')
                {
                    goto repeat;
                }
                else
                {
                    exit(0);
                }
            }
        }
    }
    else if (user_choice == 2)
    {
        float add_amount;
        printf("Enter amount you want to add to your account:");
        scanf("%f", &add_amount);
        if (add_amount <= 0)
        {
            printf("Invalid amount:");
            exit(0);
        }
        else
        {
            printf("Enter your transaction pin:");
            scanf("%d", &pin_ask);
            printf("\nAmount Added Succesfully\n");
            initial_balance = initial_balance + add_amount;
            printf("Remaining balance:%f\n", initial_balance);
            printf("Do you want to use the service again(Y/N):");
            scanf(" %c", &user_retrychoice);
            if (user_retrychoice == 'Y')
            {
                goto repeat;
            }
            else
            {
                exit(0);
            }
        }
    }
    else
    {
        printf("Remaining balance:%f\n", initial_balance);
        printf("Do you want to use the service again(Y/N):");
        scanf(" %c", &user_retrychoice);
        if (user_retrychoice == 'Y')
        {
            goto repeat;
        }
        else
        {
            exit(0);
        }
    }
}