#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
void mainMenu()  //Main menu
{
	printf("\n** PLEASE SELECT ONE OF THE OPTIONS BELOW **\n\n");
    printf("1 ->  BALANCE ENQUIRY\n");
    printf("2 ->  DEPOSIT\n");
    printf("3 ->  WITHDRAW\n");
    printf("4 ->  CHANGE PIN\n");
    printf("5 ->  EXIT\n\n");
    
}
int checkBalance(float balance) //To check balance
{
	printf("\n\n YOUR CURRENT BALANCE IS:   $%.2f\n\n", balance);
	return balance;
}
int  moneyDeposit(float *balance) // to deposit the money
{    
    float deposit;
	printf("ENTER MONEY YOU WANT TO DEPOSIT: \n");
	scanf("%f",&deposit);
	*balance=*balance+deposit; // Adding deposit to balance
	printf("\n\n YOUR NEW BALANCE IS:   $%.2f\n\n", *balance);
	
	return *balance;
	
}
int  moneyWithdraw(float *balance) // To withdrawn the money
{    
    float withdraw;
  
   {	
	printf("ENTER MONEY YOU WANT TO WITHDRAW: \n");
	scanf("%f",&withdraw);
	if(withdraw<*balance)
	{
		
	*balance=*balance-withdraw; // subtractging withdrawn amount from actual balance
	printf("\n\n YOUR NEW BALANCE IS:   $%.2f\n\n", *balance);
		
	}
	else if(withdraw>= *balance)
	{
		printf("PLEASE ENTER LESS AMOUNT OTHERWISE YOUR ACCOUNT WILL BE EMPTY \n"); //warning, user should enter less amount to not make his/her account empty
	}
	else	
	{
      printf("INVAID \n");
}	
}
    
return *balance;
}
int changepassword(int *b) // To Change pin
{
	 int n ;
    printf("ENTER YOUR NEW PIN NUMBER: ");
    scanf("%d" , &n);
    *b = n ; 
    return 0;
}
void menuExit()   //Final greetings
{
    printf("!!!!!!!!!!  TAKE YOUR RECIEPT  !!!!!!!!!!!!\n");
    printf("-----THANK YOU FOR USING ATM BANKING MACHINE!!!-----\n");
    printf("-----------------HAVE A NICE DAY-----------------\n");
 
}
void errorMessage()  //Error message
{

    printf("!!!!!!!YOU SELECTED AN INVALID NUMBER!!!!!!!\n");

}
	

int main()
{
	 int option;
    float balance = 200000.00;
    int pin = 2020 ;
    int * b = &pin ; //using pointer for this
    int choose;
 
    bool again = true;
    while (again) 
    {
        printf("*** HELLO!...CUSTOMER ***\n");
        printf("** WELCOME TO SBI ATM BANKING **\n\n");
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
                 moneyDeposit(&balance); //call by reference to change the actual arguments as well i.e, balance
                break;
         
            case 3:
             system("CLS");
                 moneyWithdraw(&balance);//call by reference to change the actual arguments as well i.e, balance
                break;
 
            case 4:
             system("CLS");
                int p ;
                while(p != pin)
                {
                    printf("PLEASE ENTER YOUR OLD PIN NUMBER: ");
                    scanf("%d" , &p);
                    if (p != pin) // pin not matched 
                    printf("PLEASE ENTER CORRECT PIN\n");  //displaying message again n again for incorrect pin      
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
        printf("Would you like to Continue:\n");
        printf("IF Yes , PLEASE ENTER 1\n");
        printf("IF No , PLEASE ENTER 2\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choose);
 
        system("CLS");
 
        if (choose == 2) 
        {
            again = false;//terminating the outer while loop
            menuExit();
 
        }
    }

 
return 0;
}
