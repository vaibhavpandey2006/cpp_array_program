#include<iostream>
#include"join_p.h"

using namespace std;

int remove_duplicate ( int n )
{
    int A[n];


    cout<< "Enter the elements in array "<<endl;

    for(int i =0; i<n;i++)
    {
        cout<< "Enter the " << i<<endl;
        cin>>A[i];
    }

    for ( int i =0; i<n;i++)
    {
        for (int j= i+1; j<n; j++ )
        {
            if( A[i]  == A [j])
            {
                 n = n-1;

                 for ( int m=j; m<n; m++)
                 {
                     A[m]=A[m+1];

                 }
                 j=j-1;

            }
        }
    }

    cout << " The new array is :"<< endl;
    for(int i =0; i<n; i++ )
    {
        cout<<A[i] << " ";
    }

    return 0;
}

void find_duplicate ( )
{
    int n;
    cout<< "Enter the size of the array "<<endl;
    cin>>n;
    remove_duplicate(n);
}
