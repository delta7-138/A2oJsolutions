#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    int capmax = 0 , prevcap = 0;
    int a,b;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        prevcap = prevcap - a + b;
        if(prevcap>capmax){
            capmax = prevcap;
        }
    }
    return capmax;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}