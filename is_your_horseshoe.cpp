#include <bits/stdc++.h>
using namespace std;
int solve(){
    map<int , int>color_count;
    int inp;
    for(int i = 0; i<4; i++){
        cin>>inp;
        color_count.insert({inp , 0});
    }
    int numkeys = color_count.size();
    return (4 - numkeys);
}
int main(){
    cout<<solve();
    return 0;
}