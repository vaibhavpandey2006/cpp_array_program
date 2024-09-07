#include<iostream>
#include"join_p.h"

using namespace std;

int  arrayone () {
     int A[4] ={ 3,5,29,54};  //array decleation and initialization

     cout << A[0] << endl;   //accessing elemnts
     cout << A[3]<< endl;
     A[3]=9;                    //modifying elements
     cout << A[3]<<endl;
    cout << endl;
     for( int &x:A)           //for each loop through reference
     {
         cout<<++x<< endl;
     }

     for( auto &x:A)           //for each loop //accessing
     {
         cout<<x<< endl;
     }


     return 0;


}
