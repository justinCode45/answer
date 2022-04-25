#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int avg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        avg+=arr[i];
    }
    avg/=n;
    int* max=max_element(arr,arr+n);
    int* min=min_element(arr,arr+n);
    
    *min+=*max-avg;
    *max=avg;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}