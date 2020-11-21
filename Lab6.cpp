#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,s,min,max,i=1;
    float average;
    cout<<"Enter a number or enter a negative number to quit: ";cin>>n;
    s=min=max=n;
    while(n>=0){
        cout<<"Enter a number or enter a negative number to quit: ";cin>>n;
        if(n<0) break;
        s+=n;
        i++;
        if(n>max) max = n;
        if(n<min) min =n;
    }
    average = float(s)/i;

    cout<<"\nAverage   "<<average<<endl;
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max<<endl;
    
    return 0;
}
