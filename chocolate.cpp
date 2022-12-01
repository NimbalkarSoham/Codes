#include<iostream>
using namespace std;
int main(){
    int n,Noc,Now;
    cout<<"enter initial amount"<<endl;
    cin>>n;
    Noc=n;
    Now=n;
    while(Now>2){
        Noc=Noc+Now/3;
        Now=Now/3;
    }
    cout<<"no of chocolates="<<Noc<<endl;
    cout<<"no of wrappers="<<Now<<endl;
    return 0;
}