#include<iostream>
using namespace std;
int main(){
    // Write your code here
    int T,N,sum;
    cin>>T;
    while(T!=0){
        cin>>N;
        int A[N];
        for(int i = 0;i<N;i++){
            cin>>A[i];
        }
        for(int i=1;i<N;i++){
            A[i]+=A[i-1];
        }
        cout>>A[N-1];
        if(A[N-1]%2==0)
            return 1;
        else 
            return 0;
        T--;
    }
}