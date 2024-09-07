#include<iostream>
#include"join_p.h"

using namespace std;

int rotate_array (int n)
{
    int A[n];
    int temp[n];
    int d;
    cout<< " Enter the elements of the array "<<endl;
    for (int i =0; i<n; i++)
    {
        cout<< " Enter the "<< i+1 << "element";
        cin>>A[i];
    }

    cout<< " Before rotation array is :"<< endl;
    for(int i=0; i<n; i++)
        {
            cout<< A[i]<< " "  ;

        }
        cout<<endl;

    cout<< "  Enter the indices from where to rotate the array "<< endl;
    cin>>d;

     for (int i = 0; i < n; i++) {
        temp[i] = A[(i + d) % n]; // Rotating elements left by d positions
    }

        cout<< endl;

    cout<< " After rotartion of the array from indice   "<< d   << " it become "<<endl;


        for(int i=0; i<n; i++)
        {
            cout<< A[i] << " ";

        }

    return 0;

}
void do_rotation ()
{
    int n;
    cout<< " Enter the the length of the array" <<endl;
    cin>>n;

    rotate_array(n);
}
