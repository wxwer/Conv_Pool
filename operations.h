#ifndef OPERATIONS_H_INCLUDED
#define OPERATIONS_H_INCLUDED

#define M 5
#define N 5
#define n 3

void Conv(int A[][N],int B[][n],char* padding);
void Pool(int A[][N],int k,int s,char* choice);

#endif // OPERATIONS_H_INCLUDED

