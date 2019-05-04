/*
 * triangle.cpp
 * 
 * Created by Mahfuz Ahmed on 30/04/2019.
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define br std::cout << "\n";
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)

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
    
    int t; cin >> t;
	int a, b, c;
	double s, area;
	
	while(t--){
		 cin >> a >> b >> c;
		
		
		if(a+b < c || a+c < b || b+c < a){
			cout << "Oh, No!\n";
		}else{
			s = (double)(a+b+c)/2;
			area = sqrt(s*(s-a)*(s-b)*(s-c));
		
			cout << fixed << setprecision(2) << area;br;
		}
	}
    

    return 0;
}
