#include <iostream>
using namespace std;


int linearSearch(int DATA[], int n){

    int ITEM, LOC = -1;

    cout << "\nEnter the searching element : ";
    cin >> ITEM;

    int j = 0;

    while( j <= n && LOC == -1)
    {
        if( DATA[j] == ITEM)
            LOC = j;
        
        j = j + 1;
    }

    if( LOC != -1)
        cout << "\nLocation of the searching element : " << LOC+1;
    
    else
        cout << "\nItem not found";
    

}

int main()
{
    int n, DATA[n];
    cout << "Enter the number of elements\n";
    cin >> n;

    cout << "Enter the elements\n";
    for(int i = 0; i < n; i++)
    {
        cin >> DATA[i];
    } 

    for(int i = 0; i < n; i++)
    {
        cout << DATA[i] << " ";
    }

    linearSearch(DATA,n);

    
    
    return 0;
}