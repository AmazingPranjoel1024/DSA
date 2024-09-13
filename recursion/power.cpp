#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


int powr(int n,int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p *=n;
    }
    return p;
}
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}

int main(){
    cout<<pow(2,10);
}