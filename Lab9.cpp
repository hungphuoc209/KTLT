#include<iostream>
using namespace std;

long factorial(int a){
    if(a==0 || a==1) return 1;
    return a*factorial(a-1);
}
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Factorial of "<<a<<" : "<<factorial(a);
    return 0;
}
