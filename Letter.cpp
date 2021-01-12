#include <bits/stdc++.h>
#define LARGE 52
using namespace std;
int hashtable[LARGE];
bool solve(string inp , string text){
    for(int i = 0; i<52; i++){
        hashtable[i] = 0;
    }

    for(int i = 0; i<inp.length(); i++){
        if(inp[i]<'Z' && inp[i]>'A'){
            hashtable[inp[i]-'A']++;
        }
        if(inp[i]>'a'){
            hashtable[inp[i]-'a' + 26]++;
        }
    }

    for(int i = 0; i<text.length(); i++){
        if(text[i]>'a'){
            if(hashtable[text[i] - 'a' + 26]==0){
                return false;
            }else{
                hashtable[text[i] - 'a' + 26]--;
            }
        }else if(text[i]<'Z' && text[i]>'A'){
            if(hashtable[text[i] - 'A']==0){
                return false;
            }else{
                hashtable[text[i] - 'A']--;
            }
        }
    }
    return true;
}
int main(){
    string inp;
    string text;
    getline(cin , inp);
    getline(cin , text);
    if(solve(inp , text)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
