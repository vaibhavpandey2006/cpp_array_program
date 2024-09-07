#include<iostream>
#include<climits>
#include"join_p.h"

using namespace std;

int lowest_value() {


    int Arr [8] ={ 49,20,73,55,31,48,42,15};
    int value = INT_MAX; // In built constant in cpp for finding minimum value ;

    for( int i =1; i<8; i++)
    {
        if(Arr[i] < value)
        {
            value=Arr[i];
        }
    }
    cout<< " The min element in the array is :"<< value<< endl;

    return 0;
}

