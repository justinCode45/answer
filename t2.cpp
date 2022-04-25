#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int t[n];
    int s[n];
    int ans[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        int k=t[i];
        int min=n+10;
        for(int j=0;j<n;j++){
            if(s[j]==k && abs(j-i)<min){
                min=abs(j-i);
            }
        }
        if(min==n+10){
            ans[i]=-1;
        }else{
            ans[i]=min;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}