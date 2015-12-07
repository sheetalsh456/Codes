#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[600][600],n,i,j,k,main_diag,sum_chk,sum[360000];
int main()
    {
    scanf("%lld",&n);
    main_diag=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        scanf("%lld",&arr[i][j]);
        if(i==j)
            main_diag+=arr[i][j];
        }
    }
    k=0;

    for(i=1;i<=n;i++)
        {
        sum_chk=0;
        for(j=1;j<=n;j++)
        {
        sum_chk+=arr[i][j];
        }
        if(sum_chk!=main_diag)
            {
            sum[k]=i;
            k++;
        }

    }
    for(j=1;j<=n;j++)
        {
        sum_chk=0;
        for(i=1;i<=n;i++)
        {
        sum_chk+=arr[i][j];
      }
        if(sum_chk!=main_diag)
            {
            sum[k]=(-1)*j;
            k++;
        }

    }
    sum_chk=0;
    for(i=1,j=n;i<=n;j--,i++)
        {
        sum_chk+=arr[i][j];
    }
    if(sum_chk!=main_diag)
        {
        sum[k]=0;
        k++;
    }
    /*for(i=0;i<k;i++)
        printf("%lld\n",sum[i]);*/
    sort(sum,sum+k);
    printf("%lld\n",k);
    for(i=0;i<k;i++)
        {
        printf("%lld\n",sum[i]);
    }
    return 0;

}
