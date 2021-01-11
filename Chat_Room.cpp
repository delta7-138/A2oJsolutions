#include <bits/stdc++.h>
using namespace std;
bool solve(string inp){
    string refstr = "hello";
    int ind = 0;
    for(int i = 0; i<inp.length(); i++){
        if(refstr[ind]==inp[i]){
            ind++;
        }
    }
    if(ind==5){
        return true;
    }
    return false;
}
int main(){
    string inp;
    cin>>inp;
    bool ans = solve(inp);
    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}