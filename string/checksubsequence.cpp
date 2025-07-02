#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


bool csub(string s1,string s2,int n,int m){
    if(m==0) return true;
    if(n==0) return false;
    if(s1[n-1]==s2[m-1]) return csub(s1,s2,n-1,m-1);
    else return csub(s1,s2,n-1,m);
}

int main(){
    string s1="abc";
    string s2="ac";
    int n=s1.length();
    int m=s2.length();
    cout<<csub(s1,s2,n,m);
}











