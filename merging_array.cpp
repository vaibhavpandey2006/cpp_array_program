#include<iostream>
#include"join_p.h"

using namespace std;

int start_merging (int n ,int k)
{
    int A[n];
    int B[k];
    int m = n+k;
    int C[m];
    int l =0;

    cout<< "Enter the elements in A array" <<endl;
    cout<<endl;
    for(int i =0; i<n; i++)
    {
        cout <<" enter the "<< i << "element"<<endl;
        cin>>A[i];
    }

     cout<< "Enter the elements in B array" <<endl;
     cout<<endl;
    for(int j =0; j<k; j++)
    {
        cout <<" enter the "<< j << "element"<<endl;
        cin>>B[j];
    }



    for (int i =0 ;i <n; i++)
    {
        C[i] =A[i];
    }

    for(int i=n; i <m;  i++ )
    {

        while(  l< k)
        {

            C[i] =B[l];
            l++;
            break;
        }
    }

    cout<< "The merged array is : " ;
    for (int i =0; i<m; i++)
    {

        cout<< C[i]<< " " ;
    }

    return 0;

}


void merged_array ()
{
    int n,k;
    cout<<"Enter the size of A array : " <<endl;
    cin>>n;
    cout<<"Enter the size of B   array : " <<endl;
    cin>>k;
    start_merging (n,k);


}
