#include<iostream>
using namespace std;

int main()
{
    string lekho;
    cout<<"Enter your Sentence : ";
    getline(cin,lekho);
    int temp,x = 2;
    int forchange;
    cout<<"Input how many word you want to proceed : ";
    cin>>forchange;
    for(int i = x; i<lekho.size(); i += x){
        temp = lekho[i];
        lekho[i] = (char)(temp + forchange);
    }
    cout<<"Changed sentence : "<<lekho;

}
