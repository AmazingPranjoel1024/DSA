#include<iostream>
using namespace std;


int main(){
    string str ="hello i am pranjal";
//     cout<<"Enter the string: ";
//     getline(cin,str);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
        i++;

    }
    cout<<"Count of vowel is: "<<count;

}















