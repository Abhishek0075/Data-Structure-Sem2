#include<iostream>
using namespace std;

string substring(string str, int pos, int l){

    string sub;
    int c = 0;
    while(c < l){
        sub[c] = str[pos+c-1];
        c++; 
    }
    
    return sub;
}

int main(){

    string str, sub;
    int pos, l;
    cout<<"Enter the string : ";
    cin>> str;
    cout<<"Enter the starting position and length of substring\n";
    cin>> pos >> l;

    sub = substring(str,pos,l);

    cout<<"Substring : ";
    for(int i=0; i<l; i++)
        cout<<sub[i];

    return 0;

}