#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


// void srt(vector<int> & v){
//     int n=v.size();
//     int noz=0;
//     int noo=0;
//     int nots=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) noz++;
//         else if(v[i]==1) noo++;
//         else nots++;
//     }
//     for(int i=0;i<n;i++){
//         if(i<noz) v[i]=0;
//         else if(i<(noz+noo)) v[i]=1;
//         else v[i]=2;
//     }

// }
// void srt(vector<int> &v){
//     int lo=0;
//     int mid=0;
//     int hi=v.size()-1;
//     while(mid<=hi){
//         if(v[mid]==2){
//             int temp=v[mid];
//             v[mid]=v[hi];
//             v[hi]=temp;
//             hi--;
//         }
//         else if(v[mid]==0){
//             int temp=v[mid];
//             v[mid]=v[lo];
//             v[lo]=temp;
//             lo++;
//             mid++;
//         }
//         else mid++;

//     }
// }


// int main(){
//     vector<int> v={0,1,2,1,2,0,2,1,0,2,1,2};
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     srt(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }

// }


void srt(vector<int> &v){
    int lo=0;
    int mid=0;
    int hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }
        else mid++;
    }
}

void display(vector<int> & v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v={2,1,0,2,1,1,2,0,1,2};
    int n=v.size();
    cout<<"Unsorted array : "<<endl;
    display(v);
    srt(v);
    cout<<"sorted array : "<<endl;
    display(v);

    
}

















