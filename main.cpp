#include "operations.h"
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    int A[M][N]={{1,2,3,4,5},
             {2,3,4,5,6},
             {3,4,5,6,7},
             {6,5,4,3,2},
             {5,4,3,2,1}};
    int B[n][n]={{0,1,1},
                 {1,0,1},
                 {1,1,0}};

    char s[10];
    cout<<"���� same or full"<<endl;
    cin>>s;
    cout<<"����Ľ���ǣ�"<<endl;
    Conv(A,B,s);

     /*
    char s[10];
    cout<<"���� max or average"<<endl;
    cin>>s;
    cout<<"�ػ��Ľ���ǣ�"<<endl;
    Pool(A,2,2,s);
    */
    return 0;
}


