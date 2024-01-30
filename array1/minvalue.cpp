#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(8);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    v.push_back(9);
    int mx=v[0];
    for(int i=1;i<v.size();i++){
        if(mx>v[i]) mx=v[i];
    }
    cout<<mx;
}