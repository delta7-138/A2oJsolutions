#include <bits/stdc++.h>
using namespace std;
string solve(string inp1 , string inp2){
    string ans = "";
    for(int i = 0; i<inp1.length(); i++){
        if(inp1[i]!=inp2[i]){
            ans+="1";
        }else{
            ans+="0";
        }
    }
    return ans;
}
int main(){
    string inp1 , inp2;
    cin>>inp1>>inp2;
    cout<<solve(inp1 , inp2);
    return 0;
}