#include<bits/stdc++.h>
using namespace std;
string solve(string inp){
    string ans = "";
    for(int i = 0; i<inp.length(); i++){
        if(inp[i]=='.'){
            ans+="0";
        }else if(inp[i]=='-'){
            if(inp[i+1]=='.'){
                ans+="1";
            }else{
                ans+="2";
            }
            i++;
        }
    }
    return ans;
}
int main(){
    string cipher;
    cin>>cipher;
    cout<<solve(cipher);
    return 0;
}