#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    int sumfin = 0;
    int inp;
    for(int i = 0; i<n; i++){
        cin>>inp;
        sumfin+=inp;
    }
    int ans = 0;
    for(int i = 1; i<=5; i++){
        if((i + sumfin - 1)%(n+1)!=0){
            ans++;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}