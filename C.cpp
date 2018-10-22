#include<bits/stdc++.h>
using namespace std;
#define fori(n) for(int i=0;i<n;i++)
#define forj(n) for(int j=0;j<n;j++)

void reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

int main(){
    #if 0
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    getline(cin, s);
    reverseStr(s);

    cout << s<<endl;


    return 0;
}
