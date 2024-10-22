#include<iostream>
using namespace std;
int main(){
    int menu , dep , wd ,balance=0;
    cout<<"WELCOME TO THE ATM! "<<endl;
    do{
    cout<<"\n 🙌 \n Menu: \n";
    cout<<"1. CHECK BALANCE"<<endl<<"2. DEPOSIT MONEY"<<endl<<"3. WITHDRAW MONEY"<<endl<<"4. EXIT"<<endl;
    cout<<"Please select any one i.e. 1 - 2 - 3 - 4"<<endl;
    cin>>menu;
    switch (menu)
    {
    case 1 :
        cout<<"Welcome to balance check"<<endl;
        cout<<"Your current balance is Rs "<<balance;
        break;
    case 2:
     cout<<"Welcome to the Deposit Money"<<endl;
     cout<<"Enter the money you want to deposit."<<endl;
     while(dep<=0){
     cin>>dep;
      }
     balance = balance+dep;
     cout<<"Your balance has been successfully added 😁";
        break;
    case 3:
        cout<<"Welcome to Withdraw Money"<<endl;
        cout<<"Enter the money you want to withdraw"<<endl;
        cin>>wd;
        if(wd<=balance){
            cout<<"Take your "<<wd<<"rupees";
        }
        else{
            cout<<"Not sufficient balance";
        }
        break;
    case 4:
        cout<<"GOOD BYE. HAVE A NICE DAY! 😇😇😇";
        break;        
    default:
       cout<<"error";
    }
    }while(menu!=4);



    return 0;
}