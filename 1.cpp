#include<iostream>
using namespace std;
int main(){
    int T,sum;
    cin>>T;
    while(T!=0){
        int N;
        sum=0;
        cin>>N;
        int A[N];
        for(int i = 0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
        if(sum%2!=0){
            cout<<"0";
            
            }
        else {
            cout<<"1";
        
        }
        T--;
    }
}