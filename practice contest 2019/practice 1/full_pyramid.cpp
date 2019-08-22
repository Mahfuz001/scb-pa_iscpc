// https://toph.co/p/full-pyramid

/**
 *  author: MahfuzAhmed
 *  created: 17.08.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    
    for(int i=1; i<=n;i++){
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        for(int j=0; j<i-1; j++){
            cout << "* ";
        }
        cout << "*\n";
    }
    
    
    return 0;
}
