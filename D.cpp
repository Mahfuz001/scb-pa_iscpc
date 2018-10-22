#include<bits/stdc++.h>
using namespace std;
#define fori(n) for(int i=0;i<n;i++)
#define forj(n) for(int j=0;j<n;j++)

int main(){
    #if 0
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    char s;
    int count=0;
    while (cin>>s){
        if(s == 'm'){
            count++;
        }
    }
    cout << count << endl;


    return 0;
}
