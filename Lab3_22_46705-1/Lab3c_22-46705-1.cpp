#include<iostream>
#include<string.h>
using namespace std;

struct employee{
        int id;
        string department;
        int salary;
        int year;

};

int main()
{
    int x = 10;
    struct employee record[10];
    for(int i = 0; i<10; i++){
        cout<<"Give "<<i+1<<" employee Information : ";
        cin>>record[i].id;
        cin>>record[i].department;
        cin>>record[i].salary;
        cin>>record[i].year;
    }

    for(int i = 0; i<10; i++){
        if(record[i].year < 2009 && record[i].salary > 20000){
            cout << record[i].id<<" "<<endl;

        }

    }
}

