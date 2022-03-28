#include <iostream>

using namespace std;

int main(){
    int km,w,s,e;
    cin>>km>>w>>s>>e;
    int count=0;
    if(km>2){
        count+=(20+(km-2)*5);
    }else{
        count+=20;
    }
    count+=((w/2)*5);
    
    for(int t=s;t<e;t++){
        if(t==18) count+=185;
        if(t==19) count+=195;
        if(t==20) count+=205;
        if(t==21) count+=215;
        if(t==22) count+=225;
        
    }
    
    cout<<count<<endl;
    return 0;
}