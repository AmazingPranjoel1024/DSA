#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


// int leftmost(string s){
//     int n=s.length();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(s[i]==s[j]) return i;
//         }
//     }
//     return -1;
// }

const int CHAR=256;
int leftmost(string &s){
    int count[CHAR]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]]>1) return i;
    }
    return -1;
}



int main(){
    string s="GLBGLB";
    cout<<leftmost(s);
}


