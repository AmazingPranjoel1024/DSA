#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;



int mySqrt(int x) {
        int l=0;
        int h=x;
        while(l<=h){
            int m=l+(h-l)/2;
            long long mid =(long long)m;
            long long y=(long long)x;
            if(mid*mid==y) return m;
            else if(mid*mid>y) h=m-1;
            else l=m+1;
        }
    return h;
}