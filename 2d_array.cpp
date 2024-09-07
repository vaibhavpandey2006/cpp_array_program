#include<iostream>
#include"join_p.h"

using namespace std;

int print_two_d_array (int a , int b)

{
    int A[a][b];

    cout<< " Enter the elements of 2D array :"<<endl;
    for (int i=0; i<a ; i++ )
    {
        for(int j=0; j<b; j++)
        {
            cout<< " Enter the "<< i << " and "<< j<< " element "<<endl;
            cin>>A[i][j];
        }
        cout<<endl;
    }



    cout<< " The 2-D Array is :"<<endl;
    for (int i =0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<< A[i][j]<< " ";
        }
        cout<< endl;

    }


    return 0;

}

void two_d_array ( )
{
    int row,coloumn;
    cout<< " Enter the number of the row  "<<endl;
    cin>>row;
    cout<< " Enter the number of the coloumn  "<<endl;
    cin>>coloumn;
    print_two_d_array (row,coloumn);


}
