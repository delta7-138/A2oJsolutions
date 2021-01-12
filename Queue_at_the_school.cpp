#include <bits/stdc++.h>
#define LARGE 50
using namespace std;
void solve(char q[LARGE] , int n , int x){
    for(int i = 0; i<x; i++){
        for(int j = 0; j<n-1; j++){
            if(q[j]=='B' && q[j+1]=='G'){
                char tmp = q[j];
                q[j] = q[j+1];
                q[j+1] = tmp;
                j++;
            }
        }
    }
}

int main(){
    int n , x;
    char queue[LARGE];
    cin>>n>>x;
    cin>>queue;
    solve(queue , n , x);
    cout<<queue;
    return 0;
}