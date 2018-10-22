
#include <bits/stdc++.h> 
using namespace std;
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++){
          if ((arr[j] < arr[min_idx] && arr[j] >96 && arr[min_idx] > 96) || (arr[j] < arr[min_idx] && arr[j] < 96 && arr[min_idx] <96)) 
            min_idx = j; 
        }
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++){
        if(arr[i] > 96){
            char num = arr[i];
            printf("%c", num);
        }else{
            printf("%d", arr[i]-48);
        }
    } 
    printf("\n"); 
}
int main() 
{ 
    #if 0
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >>t;
    vector<int> vec;
    while(t--){
        string s;
        cin >> s;

    int arr[s.length()];
    for(int i=0;s[i];i++){
        arr[i] = s[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    printArray(arr, n); 
    }
    
    return 0; 
}