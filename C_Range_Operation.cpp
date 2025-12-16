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
    vector<int>a(n);
    int sum=0,best=0,mn=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        int cur=(i+1)*(i+2)-sum;
        mn=min(mn,cur);
        best=max(best,cur-mn);
    }
    cout<<sum+best<<endl;

}
 
int32_t main() {
    
    int t=1;
    cin>>t;
    while(t--) solve();
 
    
    return 0;
}


