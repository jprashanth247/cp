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
    int x,y,k;
    cin>>x>>y>>k;
    int l=1;
    int r=1e12+1;
    int mid;
    while(l<=r){
        mid=l+(r-l)/2;
        int p=mid-1;
        for(int i=0;i<x;i++){
            p-=(p/y);
        }
        if(p+1>k){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    if(r==(1e12+1)){
        cout<<"-1\n";
    }else{
        cout<<r<<endl;
    }
    
 
}
 
int32_t main() {
    
    int t=1;
    cin>>t;
    while(t--) solve();
 
    
    return 0;
}