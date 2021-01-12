#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    vector<int>array;
    int inp;
    for(int i = 0; i<n; i++){
        cin>>inp;
        array.push_back(inp);
    }
    int mindiff = (int)abs(array[n-1] - array[0]) ;
    int ind1 = n-1, ind2 = 0;
    for(int i = 0; i<n-1; i++){
        int diff = (int)abs(array[i] - array[i+1]);
        if(diff<mindiff){
            mindiff = diff;
            ind1 = i;
            ind2 = i+1;
        }
    }
    cout<<ind1+1<<" "<<ind2+1;
}
int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}