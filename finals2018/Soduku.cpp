/**
 * 	author: MahfuzAhmed
 * 	created: 10.08.2019 
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define forn(var,from,to) for(int var=(from);var<(to);var++)
#define forx(var,from,to) for(int var=(from);var<=(to);var++)
#define fory(var,from,to) for(int var=(from);var>=(to);var--)
#define all(p) p.begin(),p.end()
#define pll pair<ll,ll>
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define mp make_pair
#define s second
#define f first
typedef long long ll;
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
    
    vector<string> vec;
    
    int arr[9][9] = {{0}};
    
    
    forn(i, 0, 9){
        string s; cin >> s;
        
        forn(j, 0, s[j]){
            arr[i][j] = s[j] - '0';
        }
        
    }
    
    forn(i, 0, 9){
        int a[9] = {0};
        forn(j, 0, 9){
            a[arr[i][j]]++;
        }
        
        sort(a, a+9, greater<int>());
        if(a[0] > 1){
            cout << "Oh No!\n";
            return 0;
        }
    }
    
    forn(i, 0, 9){
        int a[9] = {0};
        forn(j, 0, 9){
            a[arr[j][i]]++;
        }
        
        sort(a, a+9, greater<int>());
        if(a[0] > 1){
            cout << "Oh No!\n";
            return 0;
        }
    }
    
    cout << "Congratulations!\n";
    
    return 0;
}
