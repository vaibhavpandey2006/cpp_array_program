#include<iostream>
#include"join_p.h"

using namespace std;

int find_common (int n,int k)
{
    int A[n];
    int B[k];
    int counter1 =0;
    int dd=0;

    cout<<" input the array elements of A : " <<endl;
    for (int i =0; i<n; i++)
    {
        cout<< "Enter the "<<i << "element "<<endl;
        cin>>A[i];
    }

    cout<<" input the array elements of B: " <<endl;
    for (int i =0; i<k; i++)
    {
        cout<< "Enter the "<<i << "element "<<endl;
        cin>>B[i];
    }


    for (int i=0; i<n; i++)
    {
        for (int dd = 0; dd<k; dd++)
        {
            if (A[i] == B[dd] && A[i] == B[dd+1] )
            {
                cout<< " The common elements is "<< A[i] << " from A at " << i << "and from B at " << dd << " and "<< dd+1 <<endl;
                counter1 += 2;
                dd=dd+1;
            }

            else if ( A[i] == B[dd])
            {
                cout<<"common element is " << A[i] <<  " form A at "<< i <<"  And from B at "<< dd<<endl;
                counter1+=1;
            }
        }
    }

    if(counter1 == 0)
    {
        cout<< "There is no common elements in the array A" <<endl;
    }


    return 0;
}

void common_element () {
    int n,k;
    cout<< "Enter the size of the array A"<<endl;
    cin>>n;
    cout<< "Enter the size of the array B "<<endl;
    cin>>k;
    find_common(n,k);



}
