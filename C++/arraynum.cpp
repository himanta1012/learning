#include<iostream> 
#include<fstream> 
#include<stdlib.h> 
 
//command line arguments passed : ODD EVEN 
 
using namespace std; int main(int argc, char *argv[]) 
{     int i; 
    int num[9]={1,6,15,23,37,44,59,62,75};     if(argc!=3) 
    { 
        cout<<"argc = "<<argc<<"\n"; 
        cout<<"Error in arguments a\n"; 
        exit(1); 
    } 
    ofstream fout1,fout2;     fout1.open(argv[1]); 
    if(fout1.fail()) 
    { 
        cout<<"could not open file"             <<argv[1]<<"\n"; 
        exit(1); 
    } 
    fout2.open(argv[2]); 
    if(fout2.fail()) 
    { 
        cout<<"could not open file"             <<argv[2]<<"\n"; 
        exit(1); 
    } 
    for(i=0;i<9;i++) 
    { 
        if(num[i]%2==0) 
            fout2<<num[i]<<" ";         else 
            fout1<<num[i]<<" "; 
    } 
    fout1.close();     fout2.close();     ifstream fin;     char ch; 
    for(i=1;i<argc;i++) 
    { 
        fin.open(argv[i]); 
        cout<<"contents of "<<argv[i]<<"\n";         do 
        { 
            fin.get(ch); 
            cout<<ch; 
        } 
        while(fin);         cout<<"\n\n"; 
        fin.close(); 
    } 
    return 0; 
} 
