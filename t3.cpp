#include <iostream>

using namespace std;

struct pv
{
    int v;
    int p;
};


int main(){
    int x,n,v,r;
    cin>>x>>r>>v;
    cin>>n;
    pv ball[n];
    for(int i=0;i<n;i++){
        cin>>ball[i].p>>ball[i].v;
    }
    for(int i=0;i<n;i++){
        bool b= (ball[i].p<=x+r && ball[i].p>=x-r);
        if(!b) continue;
        else{
            if(ball[i].v<=v){
                x=ball[i].p;
            }else{
                if(ball[i].p>=x){
                    x-=15;
                }else{
                    x+=15;
                }
            }
        }
    }

    cout<<x<<endl;
    return 0;
}