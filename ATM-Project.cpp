/*
    ATM PROJECT 
    Features: 
            Desposit
            Withdraw
            Mini statement
            Balance check
*/ 


#include <stdio.h>
int main()
{
    int choice, account_balance=1000,repeatChoice,Deposit,mini[10],i=0,withdrwal;

    for (;;){
    printf(" Enter any option given below\n 1. For Deposit\n 2. For Withdraw\n 3. Balance check\n 4. Mini statement\n Please select given option: ");
    scanf("%d", &choice);
    switch (choice)
    {
            case 1:
        printf("You have selected for Deposit\n");
        printf("Amount to be Deposited: ");
        scanf("%d", &Deposit);
        account_balance = account_balance + Deposit;
        mini[i] = Deposit;
        i++;
        printf("Deposited amount = %d", Deposit);
                break;


            case 2:
                printf("You have selected Withdrawl\n");
                printf("Enter Amount to be withdraw: \n");
                scanf("%d", &withdrwal);
                if(withdrwal > account_balance)
                {
                printf("no balance");
                }
                mini[i] = (withdrwal * - 1);
                i++;

                break;
            
            
            case 3:
                printf("You have selected Balance check\n");
                printf("Your account balance is %d",account_balance);
                break;
            
            
            case 4:
                printf("You have selected Ministatement");
                printf("Your Transactions ");
                    for(i=0;i<10;i++)
                    {
                        printf("\n %d",mini[i]);
                    }
                break;
           
           
            default:
                printf("Invalid Selection");
                
    } 
          printf("\n Do you want to continue?\n 1. Yes\n 2. No\n Please input your choice: ");
          scanf("%d", &repeatChoice);

            if (repeatChoice == 2) {
            printf("Thank You\n");
            break;
}
            }




    return 0;
}