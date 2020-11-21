#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp;
    if(*a>*b){
        temp=*a;
        *a=*b;
        *b=temp;
    }
}
void init(int *a, int *b){
    cout<<"Fisrt integer : ";cin>>*a;
    cout<<"Second integer : ";cin>>*b;
}
void show(int a,int b){
    cout<<a<<" "<<b;
}
int main(int argc, char const *argv[])
{
    int a, b;
    init(&a,&b);
    swap(&a,&b);
    show(a,b);

    return 0;
}
