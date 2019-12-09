#include <iostream>
#include <string.h>
#include "operations.h"
using namespace std;

void Pool(int A[][N],int k,int s,char* choice){
    int M1=(M-k)/s+1;
    int N1=(N-k)/s+1;
    double C[M1][N1];
    if(choice[0]=='m'){
        for(int i=0;i<M1;i++){
        for(int j=0;j<N1;j++){
            int m1=i*s,n1=j*s;
            int Max=-999;
            for(int u=0;u<k;u++)
            for(int v=0;v<k;v++){
                if(A[m1+u][n1+v]>Max)
                    Max=A[m1+u][n1+v];
            }
            C[i][j]=Max;
            cout<<Max<<" ";
        }
        cout<<endl;
        }
    }
    if(choice[0]=='a'){
        for(int i=0;i<M1;i++){
        for(int j=0;j<N1;j++){
            int m1=i*s,n1=j*s;
            double mean=0;
            for(int u=0;u<k;u++)
            for(int v=0;v<k;v++){
                mean+=A[m1+u][n1+v];
            }
            mean=mean/(k*k);
            C[i][j]=mean;
            cout<<mean<<" ";
        }
        cout<<endl;
        }
    }
}
