#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;



// void printsubset(string ans,string s,vector<string> &v){
//     if(s==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch=s[0];
//     printsubset(ans+ch,s.substr(1),v);
//     printsubset(ans,s.substr(1),v);
// }

// int main(){
//     string ch="abc";
//     vector<string> v;
//     printsubset("",ch,v);
//     for(string ele : v){
//         cout<<ele<<endl;
//     }
    
// }
void subset(int arr[],int n, int idx,vector<int> ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    subset(arr,n,idx+1,ans);
}


int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    subset(arr,n,0,v);
}











