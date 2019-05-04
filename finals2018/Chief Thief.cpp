/*
 * https://toph.co/p/chief-thief
 * Chief Thief.cpp 
 * 
 * Created by Mahfuz Ahmed on 04/05/2019.
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define forn(i, s, n) for(int i = s; i < int(n); i++)

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
    
    int n; cin >> n;
    int arr[n];
    
    ll ans = 1;
    int z_cnt = 0;
    
    forn(i, 0, n){
		cin >> arr[i];
		if(arr[i] == 0){
			z_cnt++;
			continue;
		}
		ans *= arr[i];
	}
	
	
	forn(i, 1, n){
		if(z_cnt > 1){
			cout << 0 << " ";
		}else if(arr[i-1] == 0){
			cout << ans << " ";
		}else if(arr[i-1] != 0 && z_cnt == 1){
			cout << 0 << " ";
		}else{
			cout << ans/arr[i-1] << " ";
		}
	}
	
	if(arr[n-1] == 0 && z_cnt == 1) cout << ans << "\n";
	else if(z_cnt > 0) cout << 0 << "\n";
	else cout << ans/arr[n-1] << "\n";
    

    return 0;
}
