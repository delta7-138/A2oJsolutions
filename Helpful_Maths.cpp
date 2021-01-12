#include <bits/stdc++.h>
using namespace std;
void solve(string inp){
    string inter;
    vector<string>numbers;
    stringstream check1(inp);

    while(getline(check1 , inter , '+')){
        numbers.push_back(inter);
    }

    sort(numbers.begin() , numbers.end());
    for(int i = 0; i<numbers.size(); i++){
        if(i!=numbers.size()-1){
            cout<<numbers[i]<<"+";
        }else{
            cout<<numbers[i];
        }
    }
}
int main(){
    string inp;
    cin>>inp;
    solve(inp);
    return 0;
}