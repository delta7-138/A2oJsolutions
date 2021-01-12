#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    string inp;
    for(int i = 0; i<n; i++){
        cin>>inp;
        if(inp.length() > 10){
            cout<<inp[0]<<inp.length()-2<<inp[inp.length() - 1]<<endl;
        }else{
            cout<<inp<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}