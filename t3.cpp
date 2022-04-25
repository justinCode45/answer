#include <iostream>

using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans=0;
    //左邊第一棟
    int h=arr[m-1];
    
    for(int i=m;i<n;i++){
        if(arr[i]>h){
            ans++;
            h=arr[i];
           
        }
    }
    h=arr[m-1];
    for(int i=m-2;i>-1;i--){
        if(arr[i]>h){
            ans++;
            h=arr[i];
          
        }
    }

    cout<<ans;
    return 0;
}