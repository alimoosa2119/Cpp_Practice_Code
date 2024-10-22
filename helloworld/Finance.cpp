#include<iostream>
using namespace std;
int main(){
    int salary,freelance,investments,otheri,income;
    cout<<"Enter your salary: \n";
    cin>>salary;
    cout<<"Enter your income from freelance: \n";
    cin>>freelance;
    cout<<"Enter your income from investments: \n";
    cin>>investments;
    cout<<"Enter your income from other sources: \n";
    cin>>otheri;
    income=salary+freelance+investments+otheri;
    cout<<"Your total income of this month is: "<<income;

    int rent,grocery,transport,entertainment,othere,total_expences;
     cout<<"Enter your rents expences: \n";
    cin>>rent;
    cout<<"Enter your grocery expences: \n";
    
    cin>>grocery;
    cout<<"Enter your transport expences: \n";
    cin>>transport;
    cout<<"Enter your entertainment expences: \n";
    cin>>entertainment;
    cout<<"Enter your other expences: \n";
    cin>>othere;
    total_expences = rent+grocery+transport+entertainment+othere;
    cout<<"Your total expences are: "<<total_expences<<"\n \n";

    int saving = income-total_expences;

    if(total_expences<income){
        cout<<"Your total income is: "<<income<<"\n";
        cout<<"your total expences is: "<<total_expences<<"\n";
        cout<<"GOOD JOB! You are saving "<<saving<<" this month \n \n";
    }else{
        cout<<"Your total income is: "<<income<<"\n";
        cout<<"your total expences is: "<<total_expences<<"\n";
        cout<<"Warning: You are overexpanding. Consider reducing your entertainment or other non essential expences \n \n";
    }
    
    string goal;
    int amount, amountp_m,target;

    cout<<"Enter your finantial goals ex. BMW , tesla, helicopter";
    cin>>goal;
    cout<<"Enter your target amount you want to save";
    cin>>amountp_m;
    cout<<"Enter how much you will save per month";
    cin>>saving;
    target=amountp_m/saving;
    cout<<"It will take "<<target<<" months to buy a "<<goal<<"\n \n \n ";

    int rentp, groceryp, transportp, entertainmentp, otherep;
    char ch;

    rentp = (rent/income)*100;
    groceryp = (grocery/income)*100;
    transportp = (transport/income)*100;
    entertainmentp = (entertainment/income)*100;
    otherep = (othere/income)*100;

    switch(ch){
        case 'r':
            (rentp<40)?cout<<"You are doing well with your housing budget \n \n ":cout<<"Consider finding a more affordable place to live. \n";
            break;
        case 'g':
            (groceryp<12)?cout<<"You're doing well with your grocery budget \n \n ":cout<<"Try meal planning to reduce grocery costs \n \n";
            break;
        case 't':
            (transportp<5)?cout<<"You're doing well with your transportation budget \n \n":cout<<"Look into public transportation options \n \n"; 
            break;
         case 'e':
            (entertainmentp<15)?cout<<"You're doing well with your entertainment budget \n \n":cout<<"Cut down on entertainment to save more \n \n ";
            break;    
         case 'o':
            (otherep<10)?cout<<"You're doing well with your others budget \n \n ":cout<<"Try to reduce your extra expences \n \n ";
            break; 
        default:
        cout<<"ERROR";
        break;       
    }

    cout<<"Analyze of your overall expenses: \n \n ";
    float exp = 0.0;
    exp = total_expences*100/income;
    if(exp <=50.0){
        cout<<"Your total expances are "<<exp<<" % of your income. \n Good job! You are Conservative spender";
    }else if(exp > 50.0&& exp <=80.0){
        cout<<"Your total expenses are "<<exp<<" % of your income.\n You are a moderate spender. Keep an eye on your budget, and consider saving more if possible";
    }else{
        cout<<"Your total expances are "<<exp<<" % of your income. \n You are an Extravagant spender. Must reduce your expences";
     }

    return 0;
}