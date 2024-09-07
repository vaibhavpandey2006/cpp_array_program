#include<iostream>
#include"join_p.h"
using namespace std;

int sum_elements ()
{
    int n;
    int sum = 0;
    cout << " Enter the size of the array :"<< endl;
    cin>> n;
    int A [n];
    cout << "Enter the array value :"<< endl;

    for (int i =0; i <n; i++)
    {
        cin>>A[i];
    }
    for (int j =0; j<n; j++)
    {
        sum += A[j] ;
    }
    cout << "The sum of all elements of array is :"<< sum<< endl;

    return 0;
}
