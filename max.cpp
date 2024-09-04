#include <bits/stdc++.h>
using namespace std;
int main() {

    int ans=INT_MIN;
    int arr[5]={};
    for(int i=0;i<5;i++){
       cin>>arr[i] ;
    }
    
    for(int i=0;i<5;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    cout<<"The largest element present in the array is "<<ans<<endl;
    return 0;
}
