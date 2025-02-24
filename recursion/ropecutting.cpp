#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;

int cut(int N,int x,int y,int z){
    if(N==0) return 0;
    if(N<0) return -1;
    
    int a = 1+cut(N-x,x,y,z);
    int b = 1+cut(N-y,x,y,z);
    int c = 1+cut(N-z,x,y,z);
    int m=max(a,b);
    int ans=max(c,m);
    return ans;
}

int main(){

    int ans=cut(5,5,3,2);
    cout<<ans;
    
}