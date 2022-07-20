#include <iostream>
using namespace std;

int binarySearch(int DATA[], int n){

    int BEG=0, END, MID, ITEM, LOC;

    cout << "\nEnter the searching element : ";
    cin >> ITEM;

    // cout << "Item : "<< ITEM;

    for(int i=0; i<n; i++)
    {
        cout << DATA[i] <<" ";
    }

    END = n;
    MID = (BEG + END)/2;
    // cout <<"\nMID = " << MID;

    while(DATA[MID] != ITEM && BEG <= END )
    {
        if( ITEM < DATA[MID] )
        {
            END = MID - 1;
        }
        else
        {
            BEG = MID + 1;                   
        }

        MID = (BEG + END)/2;
    }

    if(DATA[MID] == ITEM)
    {
        LOC = MID;
        cout << "\nItem found at position : "<< LOC + 1;
    }
    else{
        LOC = -1;
        cout << "\nItem not found\n";
    }



}

int main()
{
    int n;

    cout << "Enter the number of elements : ";
    cin >> n;
    int  DATA[n];
    cout << "Enter the elements\n";
    for( int i = 0; i <n; i++)
    {
        cin >> DATA[i];
    }

    binarySearch(DATA,n);
    
    return 0;
}