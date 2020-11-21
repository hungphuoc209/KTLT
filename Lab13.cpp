#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
void swapName(string&name1,string& name2){
    string temp;
    temp = name1;
    name1 = name2;
    name2 = temp;
}
void swapID(int &id1,int &id2){
    int temp;
    temp = id1;
    id1 = id2;
    id2 = temp;
}
int main(int argc, char const *argv[])
{
    string name[50];
    int ID[50],n;
    //input
    cout<<"Number of student :";cin>>n;
    cout<<"Enter ID and Name\n";
    for(int i=0;i<n;i++){
        cout<<"Enter ID and Name student #"<<i+1<<" :";
        cin>>ID[i]>>name[i];
    }
    //sort by name
    for(int i=0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            if(name[i]>name[j]){
            swapName(name[i],name[j]);
            swapID(ID[i],ID[j]);
            }
        }
    }
    //display
    cout<<"-------------------------------------------------------\n";
    cout<<setw(3)<<"ID"<<setw(20)<<"Name"<<endl;
    cout<<"-------------------------------------------------------\n";
    for(int i=0;i<n;i++){
    cout<<setw(3)<<ID[i]<<setw(20)<<name[i]<<endl;
    }

  

    return 0;
}
