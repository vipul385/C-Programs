#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
void mainMenu()
{
	printf("\n****** PLEASE SELECT ONE OF THE OPTIONS BELOW ******\n\n");
    printf("1 ->  BALANCE ENQUIRY\n");
    printf("2 ->  DEPOSIT\n");
    printf("3 ->  WITHDRAW\n");
    printf("4 ->  CHANGE PIN\n");
    printf("5 ->  EXIT\n\n");
    
}
int checkBalance(float balance)
{
	printf("\n\n YOUR CURRENT BALANCE IS:   $%.2f\n\n", balance);
	return balance;
}
int  moneyDeposit(float balance)
{    
    float deposit;
	printf("ENTER MONEY YOU WANT TO DEPOSIT: \n");
	scanf("%f",&deposit);
	balance=balance+deposit;
	printf("\n\n YOUR NEW BALANCE IS:   $%.2f\n\n", balance);
	
	return balance;
	
}
int  moneyWithdraw(float balance)
{    
    float withdraw;
   
   {	
	printf("ENTER MONEY YOU WANT TO WITHDRAW: \n");
	scanf("%f",&withdraw);
	if(withdraw<balance)
	{
		w=false;
	balance=balance-withdraw;
	printf("\n\n YOUR NEW BALANCE IS:   $%.2f\n\n", balance);
		
	}
	else if(withdraw>=balance)
	{
		printf("PLEASE ENTER LESS AMOUNT OTHERWISE YOUR ACCOUNT WILL BE EMPTY \n");
	}
	else	
	{
      printf("INVAID \n");
}	
}
    
return balance;
}
int changepassword(int *b)
{
	 int n ;
    printf("ENTER YOUR NEW PIN NUMBER: ");
    scanf("%d" , &n);
    *b = n ; 
    return ;
}
void menuExit() 
{
    printf("!!!!!!!!!!  TAKE YOUR RECIEPT  !!!!!!!!!!!!\n");
    printf("-----THANK YOU FOR USING ATM BANKING MACHINE!!!-----\n");
    printf("-----------------HAVE A NICE DAY-----------------\n");
 
}
void errorMessage() 
{

    printf("!!!!!!!YOU SELECTED AN INVALID NUMBER!!!!!!!\n");

}
	

int main()
{
	 int option;
    float balance = 200000.00;
    int pin = 2020 ;
    int * b = &pin ; 
    int choose;
 
    bool again = true;
    while (again) 
    {
        printf("******************* HELLO!...CUSTOMER *******************\n");
        printf("**************** WELCOME TO SBI ATM BANKING ****************\n\n");
        int n ;
        while(n != pin)
        {
            printf("PLEASE ENTER YOUR PIN NUMBER: ");
            scanf("%d" , &n);
            if (n != pin)
                printf("INCORRECT PIN\n");        
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
                 balance=moneyDeposit(balance);
                break;
         
            case 3:
             system("CLS");
                 balance=moneyWithdraw(balance);
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
 
        printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
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
}





