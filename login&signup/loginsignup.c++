#include<iostream>
#include<fstream>
using namespace std;

//Loup for login &signup
class Loup{
    
    string username,email,password;
    fstream lS;
    public:
    void login();
    void signup();
    void forget();


};

void Loup :: login(){

    string searchmail,searchpassword;


    cout<<"Enter the email address:-";
    cin>>searchmail;

    cout<<"Enter the Password:-";
    cin>>searchpassword;
    
    lS.open("logindata.txt",ios::in);
    getline(lS,username);
    getline(lS,email);
    getline(lS,password);

    while(!lS.eof()){
        if(username==searchmail){
            if(password==searchpassword){
                cout<<"-Login successfull-";
                cout<<username<<"You logged in website";
            }
        }
        else
        {
        cout<<"!--Invalid creditials--!";

        }

    }
    lS.close();
}

void Loup :: signup(){

    cout<<"\nEnter the Name :-";
    cin>>username;

    cout<<"\nEnter your email :-";
    getline(cin,email);

    cout<<"Enter your confirm password :-";
    getline(cin,password);

    lS.open("logindata.txt", ios::out | ios ::app);
    
   getline(lS,username);
   getline(lS,email);
   getline(lS,password);   
   lS.close();
    
}

void Loup :: forget()
{
    string newpassword,Mthusername;
    
    cout <<"\nEnter your username :-";
    getline(cin,Mthusername);

    cout<<"\nEnter the new password :-";
    getline(cin,newpassword);
    
   
   lS.open("logindata.txt", ios::in );
   getline(lS,username);
   getline(lS,email);
   getline(lS,password); 

   while(!lS.eof())
   {
            if(username==Mthusername)
            {
                cout<<"--Account found--";
            }
            else
            {
                cout<<"-This username have not the account-";
            }
   }
   lS.close();




}













int main(){

int choice;
Loup A;

    do
    {
        cout <<"\n1. login";
        cout <<"\n2. Sign up";
        cout <<"\n3. Forget password";
        cout <<"\n4. Exit ";

        cout <<"\nEnter the choice :-";
        cin>>choice;


                switch(choice)
                {
                    case 1:A.login();

                    case 2:A.signup();

                    case 3:A.forget();
                
                    case 4:A.forget();


                    default :cout<< "\n-Invalid selection-";

                }



    }while(choice!=4);
}