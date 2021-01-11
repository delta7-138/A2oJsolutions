#include <bits/stdc++.h>
using namespace std;
bool solve(string inp){
    int hashmap[26];
    for(int i = 0; i<26; i++){
        hashmap[i] = 0;
    }

    int num_distinct = 0;
    for(int i = 0; i<inp.length(); i++){
        char c = inp[i];
        hashmap[c - 97]++;
        if(hashmap[c-97]==1){
            num_distinct++;
        }
    }
    
    if(num_distinct%2==0){
        return true;
    }
    return false;
}

int main(){
    string inp;
    cin>>inp;
    bool ans = solve(inp);
    if(ans){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}