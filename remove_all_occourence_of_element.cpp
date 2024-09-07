#include<iostream>
#include"join_p.h"

using namespace std;

int find_occourence (int n , int p )
{
    int counter1=0;
    int target = p;
    int Arr [n];
    for (int i =0; i<n; i++)
    {
        cout<< " Enter "<< i+1  <<" element " ;
        cin>> Arr[i];
    }




    for (int i =0; i<n; i++)
    {
        if ( target == Arr[i])

        {

            counter1+=1;
            n=n-1;

            for ( int j =i; j<n; j++ )
            {
                Arr[j] = Arr[j+1];
            }
            i--;
        }
    }


    if (counter1 == 0){
        cout<< " Target element is not found .."<<endl;


         for (int i=0; i<n; i++)
    {
        cout<< Arr[i] << " ";
    }

    }



    else if (counter1 >0) {
     cout<< " After removal of all occourence of "<< target << " the array is :"<<endl;

    for (int i=0; i<n; i++)
    {
        cout<< Arr[i] << " ";
    }
    }

    return 0;

}


void check_occourences ()
{
    int n,t;
    cout<<"Enter the size of the array : " <<endl;
    cin>>n;
    cout<<" Enter the target element :" <<endl;
    cin>>t;

    find_occourence(n ,t);



}
