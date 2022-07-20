#include<iostream>
using namespace std;


void merge(int A[], int r,int lba, int B[], int s, int lbb, int C[], int lbc){

    int na = lba, nb = lbb, ptr = lbc, uba = lba+r-1, ubb = lbb+s-1;
    while(na <= uba && nb <= ubb){
        if(A[na]<B[nb]){
            C[ptr] = A[na];
            na = na+1;
            ptr = ptr + 1;
        }
        else{
            C[ptr] = B[nb];
            nb = nb + 1;
            ptr = ptr + 1;
        }
    }

    if(na > uba){
        for(int i=0; i<s-nb; i++)
            C[ptr+i] = B[nb+i];
    }
    else{
        for(int i=0; i<uba - na; i++)
            C[ptr+i] = A[nb+i];
    }
}

int merge_pass(int A[], int n, int l, int B[])
{
	
	int q = n/(2*l);
	int s = 2*l*q;
	int r = n-s;

    cout<<"\n3";
	
	for(int i=0; i<q; i++){
	
		int lb = 1+(2*i-2)*l;
		merge(A,l,lb,A,l,lb+1,B,lb);uj
	}
	
    cout<<"\n4";
	if(r<=l)
	{
		for(int j=1; j<r; j++)
			B[s+j] = A[s+j];
	}
	else
		merge(A,l,(s+1),A,(r-l),(l+s+1),B,(s+1));	
}

void merge_sort(int A[], int n, int B[]){
    
    int l = 1;
    cout<<"\n2";
    while(l<n){
        merge_pass(A,n,l,B);
        merge_pass(B,n,2*l,A);
        l = 4*l;
    }
    cout<<"\nhello"; 

    for(int i=0; i<14; i++){
            cout<<B[i]<<" ";
        }
}



int main(){

    int A[14]={66,33,40,22,55,88,60,11,80,20,50,44,77,30};
    int B[14];

    int n = 14;

    cout<<"\n1";
    
    merge_sort(A,n,B);

    cout<<"Hi";
    // if(n%2 == 0){

        cout<<"Array : ";
        for(int i=0; i<14; i++)
            cout<<B[i]<<" ";
    //     }
    // else{
        cout<<"Array : ";
        // for(int i=0; i<14; i++)
        //    cout<<B[i]<<" ";

        //}
        cout<<"*";

    return 0;

}