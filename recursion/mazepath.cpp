#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways =maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways =rightways+downways;
    return totalways;
}
int maze2(int er,int ec){
    if(er<1 || ec<1) return 0;
    if(er==1 && ec==1) return 1;
    return maze2(er,ec-1)+maze2(er-1,ec);
}
void ways(int sr,int sc, int er, int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    ways(sr,sc+1,er,ec,s+'R');
    ways(sr+1,sc,er,ec,s+'D');
}
int main(){
    cout<<maze(0,0,2,2);
    ways(1,1,3,3," ");
    cout<<maze2(4,4);
}





