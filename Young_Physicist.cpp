#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>force_set;
bool solve(int n){
    int sumx = 0 , sumy = 0 , sumz = 0;
    for(int i = 0; i<n; i++){
        sumx+=force_set[i][0];
        sumy+=force_set[i][1];
        sumz+=force_set[i][2];
    }
    if(sumx==0 && sumy==0 && sumz==0){
        return true;
    }
    return false;
}
int main(){
    int n , inp;
    cin>>n;

    for(int i = 0; i<n; i++){
        vector<int>force;
        for(int i = 0; i<3; i++){
            cin>>inp;
            force.push_back(inp);
        }force_set.push_back(force);
    }
    bool ans = solve(n);
    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}