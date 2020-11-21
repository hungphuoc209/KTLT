#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    float a,b,c,average;
    string name;
    cout<<"Your name : ";
    getline(cin,name);
    cout<<"First grades : ";cin>>a;
    cout<<"Second grades : ";cin>>b;
    cout<<"Third grades : ";cin>>c;
    average = (a+b+c)/3;
    cout<<"Name : "<<name<<endl;
    cout<<"Avegare : "<<setprecision(3)<<average;

    return 0;
}
