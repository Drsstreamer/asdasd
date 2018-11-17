#include <iostream>
#include"account.h"
#include "Bankapp.h"
using namespace std;
int tmp;
Bankapp data[]={};
int sizes=0;
int choice;
int main()
{
cout <<"Welcome to FCI Banking Application \n1. Create a New Account  \n2. List Clients and Accounts  \n3. Withdraw Money  \n4. Deposit Money"<<endl;
cin>>choice;



if (choice==1){
cin.ignore();
Bankapp a;
a.create();
data[a.p->id]=a;
sizes=a.p->id;
a.ca();
}



if (choice==2){
    for (int i=1; i<sizes+1; i++){
        data[i].ca();
    }}
if (choice==3){
 cout<<"Please enter your id : ";
 cin>>tmp;
 for (int i=1; i<sizes+1; i++){
        if (data[i].id==tmp){
            data[i].p->withdraw();
            main();}
    }
cout<<"Account not found"<<endl;
}

if (choice==4)
{   for (int i=1; i<sizes+1; i++){
    cout<<"Please enter your id : ";
    cin>>tmp;
    if (data[i].id==tmp){
            data[i].p->deposit();
            main();}
}
cout<<"Account not found"<<endl;
}
cout<<"----------------------------------------------------------------------------------"<<endl;
main();}
