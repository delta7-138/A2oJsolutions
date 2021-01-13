#include <bits/stdc++.h>
using namespace std;
int solve(string inp1 , string inp2){
    int len = inp1.length();
    for(int i = 0; i<len; i++){
        inp1[i] = tolower(inp1[i]);
        inp2[i] = tolower(inp2[i]);
        if(inp1[i]<inp2[i]){
            return -1;
        }else if(inp2[i]<inp1[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    string inp1 , inp2;
    cin>>inp1>>inp2;
    cout<<solve(inp1 , inp2);
    return 0;
}