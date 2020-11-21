#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,s=0,day=1;
    float regPay,OTPay,grPay,regHour,OTHour,rate,rateOT;
    string name;
    //input
    while(true)
    {
        cout<<"Enter name of the employee or'quit' to quit: ";
        getline(cin,name);
        if(name == "quit") break;
        cout<<"Enter pay rate for "<<name<<": ";cin>>rate;
        cout<<"Enter OT pay rate for "<<name<<": ";cin>>rateOT;
        cout<<"Enter hours worked for each day up to a maximum of 14 days, enter 0 when finished\n";
        while(day<=14){
            cout<<"Enter hours worked or '0' to quit: ";cin>>n;
            day++;
            s+=n;
            if(n==0) break;
        }
        //calculation
        if(s<80){
            regHour = s;
            OTHour = 0;
        }
        else
        {
            regHour = 80;
            OTHour = s- 80;
        }
        regPay = regHour*rate;
        OTPay = OTHour*rateOT;
        grPay = regPay + OTPay;
        //output
        cout<<"Name of the Emplyee: "<<name<<endl;
        cout<<"Total hours worked: "<<s<<endl;
        cout<<"Total days worked: "<<float(s/8)<<endl;
        cout<<"Total Regular Hours: "<<regHour<<endl;
        cout<<"Total OT Hours: "<<OTHour<<endl;
        cout<<"Regular Pay: "<<regPay<<endl;
        cout<<"OT Pay: "<<OTPay<<endl;
        cout<<"Gross Pay: "<<grPay;
        return 0;
    }
    
}
