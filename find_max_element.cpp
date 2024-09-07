#include<iostream>
#include<climits>
#include"join_p.h"

using namespace std;

int highest_v_alue() {


    int Arr [8] ={ 49,20,73,55,31,48,42,15};
    int value =  INT_MIN;    //In built constant in cpp for finding maximum value ;

    for( int i =1; i<8; i++)
    {
        if(Arr[i] > value)
        {
            value=Arr[i];
        }
    }
    cout<< " The max element in the array is :"<< value<< endl;

    return 0;
}
