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


}obj;

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
        cout<<"!--Invalid creditioals--!";

        }

    }
    lS.close();
}

void Loup :: signup(){

    cout<<"Enter the Name :-";
    getline(cin,username);

    cout<<"Enter your email :-";
    getline(cin,email);

    cout<<"Enter your confirm password :-";
    getline(cin,password);

    lS.open("logindata.txt", ios::out | ios ::app);
    
   lS<<username;
   lS<<email;
   lS<<password<<endl;
   
   lS.close();
    
}

void Loup :: forget()
{
    cout <<"\nEnter your username :-";
    getline(cin,username);

    cout<<"\nenter the "

}













int main(){

int choice;
cout <<"\n1. login";
cout <<"\n2. Sign up";
cout <<"\n3. Forget password";
cout <<"\n4. Exit ";

cout <<"\nEnter the choice :-";
cin>>choice;


        switch(choice)
        {
            case 1:{

                    }

            case 2:{

                }

            case 3:
                {

                }

            default :cout<< "\n-Invalid selection-";

        }




}