/**
 *  author: mahfuzz
 *  created: 22.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define pii pair<int, int>
#define pll pair<long long, long long>
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int max_n = 1000005;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n;
    ll r; 
    
    cin >> n >> r;
    
    vector<int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    
    int m = r % n;
    
    if(m == 0){
        cout << vec[0] << " " << vec[n-1] << "\n";
    }else{
        cout << vec[0+m] << " " << vec[0 + (m-1)] << "\n";
    }
    
    
    return 0;
}
