#include <bits/stdc++.h>
using namespace std;
vector<int>prices;

int solve(int n , int m){
    int inp;
    for(int i = 0; i<n; i++){
        cin>>inp;
        prices.push_back(inp);
    }
    sort(prices.begin() , prices.end());
    int sum = 0;
    for(int i = 0; i<m; i++){
        if(prices[i]>=0){
            break;
        }
        sum = sum + prices[i];
    }
    return (-sum);
}
int main(){
    int n , m;
    cin>>n>>m;
    int ans = solve(n , m);
    cout<<ans;
    return 0;
}