#include <iostream>
#include <fstream>
using namespace std;

void openInFile(ifstream &infile,string filename){
    infile.open(filename);
}
void openOutFile(ofstream &outfile,string filename){
    outfile.open(filename);
}
int main()
{
    ifstream infile;
    ofstream outfile;
    char infilename[30], outfilename[30];
    cout << "Enter file name to copy from: "; cin>>infilename;
    cout << "Enter file name to copy to: "; cin>>outfilename; 
    openInFile(infile,infilename);
    openOutFile(outfile,outfilename);
    char inc;
    string s="";
    while(!infile.eof()){
        getline(infile,s);
        cout<<s<<endl;
        outfile<<s<<endl;
    }
    outfile.close();
    infile.close();
    return 0;
}