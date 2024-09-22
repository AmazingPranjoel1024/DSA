#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


// void removechar(string ans, string original){
//     if(original==""){
//         cout<<ans;
//         return;
//     }
//     char ch=original[0];
//     if(ch=='a') removechar(ans,original.substr(1));
//     else removechar(ans+ch,original.substr(1));
// }

void removechar(string ans, string original,int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') removechar(ans,original,idx+1);
    else removechar(ans+ch,original,idx+1);
}

int main(){
    string str="Pranjal kumar";
    string s="";
    removechar("",str,0);
    // for(int i=0;i<str.length();i++){
    //     if(str[i]!='a') s+=str[i];
    // }
    // cout<<s;

}












