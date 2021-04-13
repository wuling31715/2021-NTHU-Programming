#include <stdio.h>
#include <string.h>
#define Max(x,y) ((x>y) ? x : y)
#define Min(x,y) ((x<y) ? x : y)

char S[1001],p[1001];
int s_len,p_len;

int check_H(int id)
{
    for(int i=id,j=0; j<p_len; j++,i++)
    {
        if(i>=s_len || S[i] != p[j]) return 0;
    }
    return 1;
}

int check_E(int id)
{

    for(int i=id,j=p_len-1; j>=0; j--,i--)
    {
        if(i<0 || S[i] != p[j]) return 0;
    }
    return 1;
}

int main ()
{

    scanf("%s%s",S,p);
    int pre_H[1002],pre_E[1002];
    s_len = strlen(S);
    p_len = strlen(p);

    for(int i=0; i<s_len; i++)
    {
        pre_H[i+1] = check_H(i) + pre_H[i];
    }
    for(int i=0; i<s_len; i++)
    {
        pre_E[i+1] = check_E(i) + pre_E[i];
    }
    for (int i = 0; i < s_len; i++) {
        printf("%d ", pre_H[i]);
    }
    printf("\n");
    for (int i = 0; i < s_len; i++) {
        printf("%d ", pre_E[i]);
    }
    printf("\n");

    int q;
    scanf("%d",&q);
    while(q--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        int ans = pre_E[r] - pre_H[l-1];
        printf("%d\n",Max(ans,0));
    }
    return 0;
}