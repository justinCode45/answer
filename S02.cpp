//168

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class big_num
{
    public:
        bool sign;
        string num;

        //void print(){
        //    cout<<sign<<" "<<num<<endl;
        //};
        
        void print(){
            string ans =(sign)?"-":"";
            ans=ans+num;
            cout<<ans<<endl;
        };
};
bool comp(string s1,string s2){
    //>=
    if(s1==s2) return 1;
    if(s1.size() != s2.size()) return s1.size()>s2.size();
    for(int i=0;i<s1.size();i++){
        if     (s1[i]>s2[i]) return 1;
        else if(s1[i]<s2[i]) return 0;
    }
    return 1;
}

big_num splus(big_num s1,big_num s2){
    big_num ans;
    if(s1.sign^s2.sign){
        if(comp(s1.num,s2.num)){
            ans.sign=s1.sign;
        }else{
            ans.sign=s2.sign;
            swap(s1.num,s2.num);
        }

        string s1r=s1.num;
        string s2r=s2.num;
        reverse(s1r.begin(),s1r.end());
        reverse(s2r.begin(),s2r.end());
        int i=0;
        int c=0,r;
        while(1){
            if(i>=s1r.size() && i>=s2r.size()) break;
            int s1int=(i<s1r.size())?s1r[i]-'0':0;
            int s2int=(i<s2r.size())?s2r[i]-'0':0;
            r=(s1int-s2int-c);
            if(r<0){
                r+=10;
                c=1;
            }else{
                c=0;
            }
            //c=(s1int-s2int-c)/10;
            ans.num=ans.num+(char)(r+'0');
            i++;
        }
        //if(c)ans.num=ans.num+"1";
        //if(s1.sign)ans.sign=1;
        //else ans.sign=0;
        reverse(ans.num.begin(),ans.num.end());
        if(ans.num[0]=='0') ans.num.erase(0,1);
        return  ans;

    }else{
        string s1r=s1.num;
        string s2r=s2.num;
        reverse(s1r.begin(),s1r.end());
        reverse(s2r.begin(),s2r.end());
        int i=0;
        int c=0,r;
        while(1){
            if(i>=s1r.size() && i>=s2r.size()) break;
            int s1int=(i<s1r.size())?s1r[i]-'0':0;
            int s2int=(i<s2r.size())?s2r[i]-'0':0;
            r=(s1int+s2int+c)%10;
            c=(s1int+s2int+c)/10;
            ans.num=ans.num+(char)(r+'0');
            i++;
        }
        if(c)ans.num=ans.num+"1";
        if(s1.sign)ans.sign=1;
        else ans.sign=0;
        reverse(ans.num.begin(),ans.num.end());
        return  ans;
    }
}

int main(){
    bool x;
    cin>>x;
    string s[2];
    big_num n[2];
    cin>>s[0]>>s[1];

    for(int i=0;i<2;i++){

        if(s[i][0]=='-'){
            n[i].sign=1;
            s[i].erase(0,1);
            n[i].num=s[i];
        }else{
            n[i].sign=0;
            n[i].num=s[i];
        }
    }
    n[1].sign^=x;
    big_num ans=splus(n[0],n[1]);
    ans.print();

    //n[0].print();
    //n[1].print();


    return 0;
}