#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    string inp;
    int x = 0;
    for(int i = 0; i<n; i++){
        cin>>inp;
        for(int j = 0; j<3;j++){
            if(inp[j]=='+'){
                x++;
                break;
            }else if(inp[j]=='-'){
                x--;
                break;
            }
        }
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}