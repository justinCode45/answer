#include <iostream>
#include <math.h>
using namespace std;



int main(){
    int fx,fy;
    int n;
    cin>>fx>>fy;
    cin>>n;
    double des=99999999;
    int ansx=0,ansy=0;
    for(int i=0;i<n;i++){
      int cx,cy;
      cin>>cx>>cy;
      int n_des=pow(pow(cx-fx,2)+pow(cy-fy,2),0.5);
      if(n_des<des){
          des=n_des;
          ansx=cx;
          ansy=cy;
      }
    }

    cout<<ansx<<" "<<ansy<<endl;

    return 0;
}