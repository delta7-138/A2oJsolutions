#include <bits/stdc++.h>
using namespace std;
bool checkIfPrime(int n){
    for(int i = 2; i<=n-1; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool solve(int n , int m){
    for(int i = n+1; i<m; i++){
        if(checkIfPrime(i)){
            return false;
        }
    }
    if(!checkIfPrime(m)){
        return false; 
    }
    return true;
}
int main(){
    int n , m;
    cin>>n>>m;
    if(solve(n , m)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}