#include<iostream>
using namespace std;

int MATCHING(string P, string T, int R, int S){
    
    int k = 0, max = S-R+1;
    int index = -1;
    int l;
    while(k <= max){
        for(l = 0; l<= R; l++){
            if(P[l] != T[l+k-1]){
                k = k+1;
                break;
            }
        }  

        if(l == R){
            index = k;
            return index;
        }  

        k = k+1;      
            
    }
    return index;
}


int main(){

    string T, P;
    int R, S;

    cout<<"Enter the text and its length : ";
    cin>> T >> S;

    cout<<"Enter the pattern and its length : ";
    cin >> P >> R;

    int index = MATCHING(P,T,R,S);

    cout<<"Pattern found at position : "<<index;

    return 0;
}