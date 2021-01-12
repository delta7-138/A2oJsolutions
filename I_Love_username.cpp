#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    int inp;
    cin>>inp;
    int amaz = 0;
    int min=inp , max = inp;
    for(int i = 1; i<n; i++){
        cin>>inp;
        if(inp>max){
            amaz++;
            max = inp;
        }
        if(inp<min){
            amaz++;
            min = inp;
        }
    }
    return amaz;
}
int main(){
    int n;
    cin>>n;
    int ans = solve(n);
    cout<<ans;
    return 0;
}