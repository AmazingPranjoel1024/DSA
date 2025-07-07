#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


// void ps(string &txt,string &pat){
//     int m=pat.length();
//     int n=txt.length();
//     for(int i=0;i<=n-m;i++){
//         int j;
//         for(j=0;j<m;j++){
//             if(pat[j]!=txt[i+j]) break;
//             //if(j==m) cout<<i<<" ";
//         }
//         if(j==m) cout<<i<<" ";
//     }
// }

void ps(string &txt,string &pat){
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=n-m;){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=txt[i+j]) break;
            //if(j==m) cout<<i<<" ";
        }
        if(j==m) cout<<i+" ";
        if(j==0) i++;
        else i=i+j;
    }
}




int main(){
    string txt="ABCABCD";
    string pat="ABCD";
    ps(txt,pat);
}