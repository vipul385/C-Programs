#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
//Functions
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void changepassword(int *);
void menuExit();
void errorMessage();
 
//Main Code
int main() 
{
    //Local Declarations
    int option;
    float balance = 100000.00;
    int pin = 1234 ;
    int * b = &pin ; // storing address of pin
    int choose;
 
    bool again = true;
 
    // insert code here...
 
    while (again) 
    {
        printf("******************* HELLO!...CUSTOMER *******************\n");
        printf("**************** WELCOME TO ATM BANKING ****************\n\n");
        int n ;
        while(n != pin)
        {
            printf("PLEASE ENTER YOUR PIN NUMBER: ");
            scanf("%d" , &n);
            if (n != pin)
                printf("PLEASE ENTER VALID PASSWORD\n");        
        }
        mainMenu();
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
        printf("Your Selection:\t");
        scanf("%d", &option);
 
 
        switch (option) 
        {
            case 1:
             system("CLS");
                checkBalance(balance);
                break;
         
            case 2:
             system("CLS");
                balance = moneyDeposit(balance);
                break;
         
            case 3:
             system("CLS");
                balance = moneyWithdraw(balance);
                break;
 
            case 4:
             system("CLS");
                int p ;
                while(p != pin)
                {
                    printf("PLEASE ENTER YOUR OLD PIN NUMBER: ");
                    scanf("%d" , &p);
                    if (p != pin)
                    printf("PLEASE ENTER CORRECT PIN\n");        
                }
                changepassword(b);
                printf("PIN IS CHANGED TO: %d\n" , pin);
                break;
            
            case 5:
             system("CLS");
                menuExit();
                return 0;
 
            default:
                errorMessage();
                break;
        }
 
        printf("################################################\n");
        printf("Would you like to do another transaction:\n");
        printf("IF Yes , PLEASE ENTER 1\n");
        printf("IF No , PLEASE ENTER 2\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choose);
 
        system("CLS");
 
        if (choose == 2) 
        {
            again = false;
            menuExit();
 
        }
    }
 
    return 0;
} //main code
 
 
 
//Functions
 
void mainMenu() 
{
    printf("\n**** PLEASE CHOOSE ONE OF THE OPTIONS BELOW ****\n\n");
    printf("1 ->  BALANCE ENQUIRY\n");
    printf("2 ->  DEPOSIT\n");
    printf("3 ->  WITHDRAW\n");
    printf("4 ->  CHANGE PIN\n");
    printf("5 ->  EXIT\n\n");
 
}//Main Menu

void checkBalance(float balance) 
{
    printf("YOU CHOOSE TO SEE YOUR BALANCE\n");
    printf("\n\n****YOUR CURRENT BALANCE IS:   $%.2f\n\n", balance);
 
}//Balance Enquiry
 
float moneyDeposit(float balance) 
{
    float deposit;
    printf("YOU CHOOSE TO DEPOSIT YOUR MONEY\n");
    printf("YOUR CURRENT BALANCE IS: $%.2f\n\n", balance);
    printf("ENTER AMOUNT TO BE DEPOSITED:");
    scanf("%f", &deposit);
 
    balance += deposit;
 
    printf("\nYOUR NEW BALANCE IS:   $%.2f\n\n", balance);
    return balance;
 
}//money deposit
 
float moneyWithdraw(float balance) 
{
    float withdraw;
    bool back = true;
 
    printf("You choose to Withdraw a money\n");
    printf("Your Balance is: $%.2f\n\n", balance);
 
    while (back) 
    {
        printf("Enter your amount to withdraw:\n");
        scanf("%f", &withdraw);

        if (withdraw <= balance) // checking the balance
        {
            back = false;
            balance -= withdraw;
            printf("\nYour withdrawing money is:  $%.2f\n", withdraw);
            printf("Your New Balance is:   $%.2f\n\n", balance);
        }
 
        else  
        {
            printf("+++You don't have enough money+++\n");
            printf("Please contact to your Bank Customer Services\n");
            printf("Your Balance is:   $%.2f\n\n", balance);
        }
    }
    return balance ;
 
 
}//money withdraw

void changepassword(int*a)
{
    int n ;
    printf("ENTER YOUR NEW PIN NUMBER: ");
    scanf("%d" , &n);
    *a = n ; // updating the value of pin
    return ;
}//change password
 
void menuExit() 
{
    printf("--------------TAKE YOUR RECIEPT!!!------------------\n");
    printf("-----THANK YOU FOR USING ATM BANKING MACHINE!!!-----\n");
    printf("-----------------HAVE A NICE DAY-----------------\n");
 
}//exit menu
 
void errorMessage() 
{

    printf("+++!!!YOU SELECTED AN INVALID NUMBER!!!+++\n");

}//error message

