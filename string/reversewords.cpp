#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


void reverse(char s[],int low,int high){
    while(low<=high){
        swap(s[low],s[high]);
        low++;
        high--;
    }
}

void reverseword(char s[],int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(s[end]==' '){
            reverse(s,start,end-1);
            start=end+1;
        }
    }
    reverse(s,start,n-1);
    reverse(s,0,n-1);
}

int main(){
    char ch[]="WELCOME TO GLB";
    int n=sizeof(ch)/sizeof(ch[0]);
    reverseword(ch,n);
    for(int i=0;i<n;i++){
        cout<<ch[i];
    }
}
