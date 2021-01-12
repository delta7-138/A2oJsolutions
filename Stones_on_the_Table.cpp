#include<bits/stdc++.h>
using namespace std;
int solve(string inp , int n){
    int num = 0;
    for(int i = 1; i<inp.length(); i++){
        if(inp[i]==inp[i-1]){
            num++;
        }
    }
    return num;
}
int main(){
    int n;
    string inp;
    cin>>n>>inp;
    int ans = solve(inp , n);
    cout<<ans;
    return 0;
}