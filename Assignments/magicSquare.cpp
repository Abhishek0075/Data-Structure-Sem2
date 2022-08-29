#include<iostream>
using namespace std;

void square(int n)
{
    int msquare[n][n];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            msquare[i][j] = 0;
        }
    }

    int i = n/2;
    int j = n-1;

    for(int num = 1; num <= n*n;)
    {
        if(i == -1 && j == n)
        {
            j = n-2;
            i = 0;
        }
        else
        {
            if(j == 2)
                j = 0;

            if(i < 0)
                i = n-1;
        }
        if(msquare[i][j])
        {
            j -= 2;
            i++;
            continue;
        }
        else
            msquare[i][j] = num++;

        j++;
        i--;
    }

    cout<<"The Magic Square for "<<n<<"\nSum of each row or column : "<<n*(n*n+1)/2<<"\n\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<msquare[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cout<<"Enter the number of row or coloum : ";
    cin>>n;
    square(n);

    return 0;
}