#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int password=1234,input_password,attempts=0,account_is_active=0,name,lastname,transactionscount,choice,transactions_history,i,correct_password,new_password;
double transactions[100],balance,deposit,withdrawal,deposit_amount,withdrawal_amount;

while(attempts<3)
{
	printf("enter the password");
	scanf("%d",&input_password);
	
	if(input_password==password)
	{
		printf("welcome");
		break;
	}
	else
	{
	attempts++;
	
    if(attempts<3)
    printf("wrong password,try again");
    else
	{
    printf("account locked");
    return 0;
	}
}}
do{
	printf("\n___account menu___\n");
	printf("1.create account\n");
	printf("2.deposit\n");
	printf("3.withdrawal\n");
	printf("4.accouunt information\n");
	printf("5.ghange the password\n");
	printf("6.transactions_history\n");
	printf("7.delete account\n");
	printf("0.exit\n");
	printf("your choice:");
	scanf("%d",&choice);
    
    if(choice==1)
	{
    	if(account_is_active==1)
		printf("there is an account");
    	else
		{
		printf("enter the name:");
        scanf("%d",&name);
        printf("enter the lastname:");
        scanf("%d",&lastname);
        printf("enter the balance:");
        scanf("%lf",&balance);
		account_is_active==1;
		printf("account created");
		}
		transactionscount=0;
		printf("transactions count deleted");
	}
	    if(choice==2)
		{
			if(account_is_active==1)
			{
	    	double deposit_amount;
	    	printf("enter the deposit_amount:");
	    	scanf("%lf",&deposit_amount);
	    	    if(deposit_amount>0)
			    {
	    	    balance+=deposit_amount;
	    	    transactions[0]=0;
	    	        for(int i=0;i<10;i++)
			        {
	    		        for(i=9;i>0;i--)
				        {
	    		        transactions[i]=transactions[i-1];
				        }
				            for(i=0;i<10;i++)
				            {
				            printf("%d",&transactions[i]);
				            }
				    }
	    		            transactions[9]=deposit_amount;
			    }
            }
            else
            {
            printf("1.create account");
			}
	    }
		    if(choice==3)
			{
				if(account_is_active==1)
				{
		    	    double withdrawal_amount;
		    	    printf("enter the withdrawal_amount:");
		    	    scanf("%lf",&withdrawal_amount);
		    	        if(withdrawal_amount<=balance)
				        {
		    	        balance-=withdrawal_amount;
		    	        transactions[0]=0;
		    	            for(int i=0;i<10;i++)
                            {
				                for(i=9;i>0;i--)
				                {
				                transactions[i]=transactions[i-1];
				                }
				                    for(i=0;i<10;i++)
				                    {
				                    printf("%d",transactions[i]);
				                    }
						    }
				                    transactions[9]=withdrawal_amount;
				        }
				        else
				        {
				        printf("balance is not enough");
				        }
			    }
			    else
			    {
			    printf("1.create account:");
				}
		    }
			    if(choice==4)
				{
			    printf("name:%d",name);
			    printf("lastname:%d",lastname);
			    printf("balance:%lf",balance);
			    printf("transactionscount:%d",transactionscount);
				}
				    if(choice==5)
				    {
					    for(int j=1;j<4;j++)
					    {
					    printf("enter the password:");
					    scanf("%d",&input_password);
					        if(input_password==password)
					        {
					        printf("enter the new password:");
					        scanf("%d",&new_password);
					        password=new_password;
					        printf("changed password\n");
					        break;
					        }
					        else
							{
					        printf("wrong password\n");
					        break;
							}
					    }
				    }
}
				        while(choice!=0);
					    printf("successfully exited.");
return 0;
}