#include<iostream>
#include"join_p.h"

using namespace std;

int check_equal  () {

    int A[10] ={ 3,5,33,42,421,86,8,85,23,75};
    int B[6] ={ 3,5,8,75,33,22};
    int counter1 =0;
    int counter2 =0;

    for (int i =0; i<9;i++)
    {
        for (int j =0; j<10; j++)
        {
            if ( B [i]== A [j])
                {
                    counter1+=1;
                }
            else
            {
                counter2+=1;
            }

        }

        }

    if ( counter1 == 9){
        cout<< " Arrays are equal "<<endl;

    }
    else if( counter2 != 0)
    {
        cout << " arrays are not equal "<<endl;
    }


    return 0;

}


void call_array () {


    int check_equal  ();

}









