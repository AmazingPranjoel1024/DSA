#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


int ED(string s1,string s2,int m,int n){
    if(m==0) return n;
    if(n==0) return m;
    if(s1[m-1]==s2[n-1]) return ED(s1,s2,m-1,n-1);
    else {
        int ins=ED(s1,s2,m,n-1);
        int del=ED(s1,s2,m-1,n);
        int repl=ED(s1,s2,m-1,n-1);
        return 1+min(min(ins,del),repl);
    }
}

int main(){
    string s1="CAT";
    string s2="CUT";
    int m=s1.length();
    int n=s2.length();
    cout<<ED(s1,s2,m,n);
}