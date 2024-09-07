#include<iostream>
#include"join_p.h"

using namespace std;

int do_reverse ( int  n)
{
    int A[n];
    int temp [n];
    cout<< " Enter the elements of the array :"<< endl;

    for( int i =0; i<n; i++)
    {
        cout<< "Enter the "<< i +1 <<" element " <<endl;
        cin>> A[i];
    }

    for ( int i =0; i<n; i++ )
    {
        for(int j= n-i-1 ; j>=0; j-- )
        {
            temp[i]=A[j];
            j--;
            break;
        }
    }

    cout<< " The reverse array is "<< endl;
    cout<<endl;
    for( int i=0; i<n; i++ )
    {
        cout<< temp[i] <<" " ;
    }

    return 0;


}


void copy_reverse ()
{
    int n;
    cout<< " Enter the size of the array :"<< endl;
    cin>>n;
    do_reverse(n);
}
