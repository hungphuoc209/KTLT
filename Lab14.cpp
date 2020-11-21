#include<iostream>
#include<iomanip>
using namespace std;
int getName(string names[],string tele[]){
    int n=1;
    cout<<"Enter a name or 'quit' to stop entry-> ";cin>>names[n];
    while(names[n].compare("quit")!=0 && n<10){
        cout << "Enter Telephone for " << names[n] << ":  ";
        cin >> tele[n];
        cout << "--------------------\n";
        n++;
        if (n<10) {
        cout << "Enter a name or 'quit' to stop entry-> ";
        cin >> names[n];
        }
    };
    return n-1;
}
int lookup (int n,string lookfor, string names[])
{
    int first=1, last=n, middle;
    bool found=false;
    while (!found && first <= last)
    {
        middle = (first+last)/2;
        if (names[middle].compare(lookfor)==0)
        found = true;
        else if (names[middle].compare(lookfor)<0) first = middle+1;
        else last = middle-1;
    }

    if (found) return middle;
    else return 0;
}
void sort(int n,string (&name)[10], string (&tele)[10]){
    int i;
    string ntemp,ttemp;
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for(i=1;i<=n-1;i++){
            if(name[i].compare(name[i+1])>0){
                ntemp = name[i];
                name[i] = name[i+1];
                name[i+1] = ntemp;
                ttemp = tele[i];
                tele[i] = tele[i+1];
                tele[i+1] = ttemp;
                sorted = false; 
                }
        }
    }
    
}
void Display(int n,string name[],string tele[]){
    string lookfor;
    int i, location;
    cout << "Sorted names \n";
    cout<<setw(3)<<"ID"<<setw(10)<<"Name"<<setw(15)<<"Telephone"<<endl;
    for (i=1;i <=n; i++) cout <<setw(3)<< i <<setw(10)<< name[i] <<setw(15)<<tele[i] <<endl;
    cout << "SEARCH ROUTINE. ENTER quit TO STOP\n";
    cout << "Enter a name to lookup telephone number:  ";cin >> lookfor;
    while (lookfor.compare("quit")!=0)
    {
        location = lookup (n, lookfor, name);
        if (location >0){
        cout << lookfor <<" found at location " << location << ", Telephone# " << tele[location] << endl;
        cout<<"----------------------------\n";
        }
       
        else {
            cout << "Name not in list! \n";
            cout<<"----------------------------\n";
        }
            cout << "Enter a name to lookup telephone number:  ";
            cin >> lookfor;
        
    }
}
int main(int argc, char const *argv[])
{
    string names[10], tele[10];
    int n;
    n = getName(names, tele);
    cout << "\n*******************************\n";
    sort(n, names, tele);
    Display( n, names, tele);
    return 0;
}
