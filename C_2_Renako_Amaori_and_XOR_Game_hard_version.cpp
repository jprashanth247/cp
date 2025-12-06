#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <climits>

using namespace std;
#define vi vector<int>
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define int long long 
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    int x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x^=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        x^=b[i];
    }
    if(x==0){
        cout<<"Tie\n";
        return;
    }
    int bit;
    for(int i=0;i<20;i++){
        int y=(1<<i);
        if((x&y)) bit=i;
    }
    int idx;
    for(int i=0;i<n;i++){
        if((a[i]^b[i])&(1<<bit)){
            idx=i;
            
        }
    }
    if(idx%2==0){
        cout<<"Ajisai\n";
    }else{
        cout<<"Mai\n";
    }
    
 
}
 
int32_t main() {
    
    int t=1;
    cin>>t;
    while(t--) solve();
 
    
    return 0;
}