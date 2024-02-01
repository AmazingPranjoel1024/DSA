#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int v[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    int sumo,sume;
    sumo=sume=0;
    for(int i=0;i<n;i++){
        if(i%2==0) sume+=v[i];
        // else sumo+=v[i];
    }
    cout<<sume;
    // int diff=abs(sume-sumo);
    // cout<<"diff is: "<<diff;
    return 0;
}