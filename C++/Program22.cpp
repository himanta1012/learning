#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("country");
    fout<<"USA\n";
    fout<<"FRANCE\n";
    fout<<"INDIA\n";
    fout.close();
    fout.open("capital");
    fout<<"Washington DC\n";
    fout<<"ITALY\n";
    fout<<"DELHI\n";
    fout.close();
    const int N = 80;
    char line[N];
    ifstream fin;
    fin.open("country");
    cout<<"contents of country file => \n";
    while(fin)
    {
        fin.getline(line,N);
        cout<<line<<"\n";
    }
    fin.close();
    fin.open("capital");
    cout<<"\ncontents of capital file => \n";
    while(fin)
    {
        fin.getline(line,N);
        cout<<line<<"\n";
    }
    fin.close();
    return 0;
}
