#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,2,3,5,78,45,8,0,3,6};
    int count=0;
    int n=v.size();
    int k;
    cout<<"Enter number: ";
    cin>>k;
    for(int i=0;i<n;i++){
        if(k<v[i]) count++;
    }
    cout<<"count is: "<<count;

}