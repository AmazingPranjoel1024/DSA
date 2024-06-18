#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


// int fact(int n){
//     if(n==1) return 1;
//     return n*fact(n-1);
// }

// int main(){
//     cout<<fact(6);
// }

// void run(){
//     cout<<"hello";
// }

// void fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//         cout<<f<<endl;
//     }
// }

int fact(int n){
    if(n==1 || n==0) return 1;
    else return n*fact(n-1);

}
int main(){
    cout<<fact(6);
}












