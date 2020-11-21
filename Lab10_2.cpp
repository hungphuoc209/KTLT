#include <iostream>
#include <fstream>
int size;
using namespace std;
struct InvItem
    {
    int partNum;
    string description;
    int onHand;
    float price;
    };
void readfrom(string infilename,InvItem (&datain)[50]){
    ifstream infile;
    infile.open(infilename);
    int i=0;
    while (!infile.eof())
    {
        infile>>datain[i].partNum>>datain[i].description>>datain[i].onHand>>datain[i].price;
        i++;
        size = i;
    }
    infile.close();
}
void writeto(string outfilename,InvItem (&dataout)[50]){
    ofstream outfile;
    outfile.open(outfilename);
    for(int i=0;i<size;i++)
    {   
        outfile<<dataout[i].partNum<<endl;
        outfile<<dataout[i].description<<endl;
        outfile<<dataout[i].onHand<<endl;
        outfile<<dataout[i].price<<endl;
    }
    outfile.close();
}
void copy(string fromfilename,string tofilename){
    InvItem data[50];
    readfrom(fromfilename,data);
    writeto(tofilename,data);
}

int main()
{
    InvItem data[50];
    fstream outfile,infile;
    string infilename = "in2.txt";
    string outfilename = "out2.txt";
    //copy 
    copy(infilename,outfilename);
    //read data struct from file

    readfrom(infilename,data);
    for(int i = 0;i<size;i++){
        cout<<data[i].partNum<<endl;
        cout<<data[i].description<<endl;
        cout<<data[i].onHand<<endl;
        cout<<data[i].price<<endl;
    }
    return 0;
}