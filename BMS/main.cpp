#include<iostream>
using namespace std;

class banksystem {
    int amount;
    public:
   
    //whenever we created a account its it open by 0  
    banksystem(){
        amount=0;
    }    

    void deposit(int amt);
    void withd(int amt);
    void balance();



};
//functions of deposit method
void banksystem::deposit(int amt){
   if(amt<0)
   {
    cout<<"Invalid amount";
   }
   else
    amount =amount+amt;{

   }
}

//funtions of withdrawal 
void banksystem::withd(int amt){
    if (amt>amount)
    {
        cout <<"\n -Insufficient balance-";
    }
    else
    {
        amount=amount-amt;
        cout<<"--Please collect your cash :-"<<amt;
    }
}

//functions for the balance
void banksystem::balance()
{
  cout<<"\nYour account balance is :-"<<amount;
}


int main() {
     
     int choice;
     int myamt;

    banksystem A;


do{
    cout<<"\n-------------Banking system-------------";
    cout<<"\n1.Deposit "; 
    cout<<"\n2.Withdrawl";
    cout<<"\n3.check balance";
    cout<<"\n4.Exit";
    cout<<"-----------------------------------";

//which operation you want to perform 
    cout<<"\nEnter the choice :-";
    cin>>choice;

    

    switch(choice)
    {
        case 1:
        {
            cout<<"\nEnter the amount :-";
            cin>>myamt;

            A.deposit(myamt);
            break;

        } 
        
        case 2:
        {
            cout<<"\nEnter the amount to withdrawl:-";
            cin>>myamt;

            A.withd(myamt);
            break;

        } 
        case 3:
        {
            A.balance();
        }
    }


}while(choice!=4);   
    
    return 0;

}
