#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    bool rem=1;

    for(int i=2; i<n; i++){

        if (n%i==0)
        {
           rem=0;
           break;

        } 

    }

    if (rem==0)
    {
        cout<<"Not  a prime no."<<endl;

    }
    else{

        cout<<"is a prime no."<<endl;
    }
    





}