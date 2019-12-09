#include <iostream>
#include <string.h>
#include "operations.h"
using namespace std;

void Conv(int A[][N],int B[][n],char* padding){
    if(padding[0]=='s'){
        int M1=M,N1=N;
        int C[M1][N1];
        for(int i=0;i<M1;i++){
            for(int j=0;j<N1;j++){
                int sum=0,temp=0;
                for(int k=-n/2;k<=n/2;k++){
                    for(int l=-n/2;l<=n/2;l++){
                        if(i+k<0 || j+l<0 || i+k>=M || j+l>=N)
                            temp=0;
                        else
                            temp=A[i+k][j+l];
                        sum+=temp*B[k+n/2][l+n/2];
                    }
                }
                C[i][j]=sum;
                cout<<sum<<" ";
            }
            cout<<endl;
        }
    }
    if(padding[0]=='f'){
        int M1=M-n+1,N1=N-n+1;
        int C[M1][N1];
        for(int i=0;i<M1;i++){
            for(int j=0;j<N1;j++){
                int sum=0;
                for(int k=-n/2;k<=n/2;k++){
                    for(int l=-n/2;l<=n/2;l++){
                        sum+=A[i+n/2+k][j+n/2+l]*B[k+n/2][l+n/2];
                    }
                }
                C[i][j]=sum;
                cout<<sum<<" ";
            }
            cout<<endl;
        }
    }

}
