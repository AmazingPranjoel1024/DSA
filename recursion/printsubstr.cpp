#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;



void printsubset(string ans,string s){
    if(s==""){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    printsubset(ans+ch,s.substr(1));
    printsubset(ans,s.substr(1));
}

int main(){
    string ch="abc";
    printsubset("",ch);
}








