#include <iostream>
#include <string.h>

using namespace std;

void printrange(int* A, int N, int K)
{
    int STN[N], C[K];
    memset(C, -1, K*sizeof(int));
    int i;
    int sum=A[0];
    for (i= 1; i< N; i++)
    {
        sum^= A[i];
        STN[i]= sum;
    }
    for(i=0; i< N; i++)
    {
        if(C[STN[i]] == -1)
            C[STN[i]] =i;
        else
        {
            cout<< C[STN[i]]+1 <<" "<< i;
            break;
        }
    }
}

int main()
{
 scanf("%lld%lld",&n,&m);
 for(i=0;i<n;i++)
 {
     scanf("%lld",&arr[i]);
 }
 for(i=0;i<m;i++)
 {
     scanf("%lld",&query[i]);
     printrange(A,sizeof(A)/sizeof(A[0]),query[i]);
 }
}
