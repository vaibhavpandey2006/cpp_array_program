#include<iostream>
#include"join_p.h"

using namespace std;

int  calculate_avg  ( int n) {

    int avg =0;

    int A[n];

    for(int i =0; i<n; i++)
    {
        cout<<"Enter the "<< i <<" element " << endl;
        cin>>A[i];
    }

    for( int j =0 ; j<n ;j++)
    {
        avg = avg + A[j];
    }

     cout<<" The average is "<< (float)avg / n <<endl;


     return 0;

}

void call_avg () {


    int n;
    cout << " Enter the size of the array "<<endl;
    cin>>n;

    calculate_avg  (n);





}
