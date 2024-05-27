#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    int n = s.length();
    cout<<"Original string: "<<s<<endl;

    reverse(s.begin(),s.begin()+n/2);

    cout<<"reversed string: "<<s<<endl;
}

