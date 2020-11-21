#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Input n = ";
    cin>>n;
    cout<<"In "<<n<<" there are :\n"; 
    cout<<n/1000<<" thousands"<<endl;
    n = n%1000;
    cout<<n/100<<" hundreds"<<endl;
     n = n%100;
    cout<<n/10<<" tens"<<endl;
     n = n%10;
    cout<<n<<" ones"<<endl;
    
    return 0;
}
