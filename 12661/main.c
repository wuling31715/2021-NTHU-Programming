#include <stdio.h>
int tmp[10000]= {0};
int main()
{
    int t, n, m, k;
    scanf("%d", &t);
    while(t--)
    {
        int ans = -1; //最終解
        scanf("%d%d%d", &n, &m, &k);
        for(int i=0; i<n; i++)
            scanf("%d", &tmp[i]);

        if(k>=m) //選最大的
        {
            for(int i=0; i<m; i++)
            {
                if(tmp[i] > ans) // choose the max head
                    ans = tmp[i];
                if(tmp[n-1-i] > ans) // choose the max tail
                    ans = tmp[n-1-i];
            }
        }
        else
        {
            int gap = m-k-1; //在我前面且不能被我操控的人数
            for(int i=0; i<=k; i++) //窮舉
            {
                int head = 0;
                int tail = n-1;
                int tmpans = -1; // 此次窮舉至少為多少(初始=-1)  // tmpans要找小的
                head += i; // head選k個可以控制的人
                tail -= k-i; // tail選k-i個人
                for(int j=0; j<=gap; j++)
                {
                    int copyh = head;
                    int copyt = tail;
                    copyh += j; // head選gap個不能控制的人
                    copyt -= gap-j; // tail選gap-j個不能控制的人
                    if (tmp[copyh]>tmp[copyt]) // 如果head比較大
                    {
                        if (tmpans == -1) // 如果是初始值就直接套用
                            tmpans = tmp[copyh];
                        if (tmp[copyh] < tmpans) // 如果比原本小則更新tmpans
                            tmpans = tmp[copyh];
                    }
                    else // 如果tail比較大
                    {
                        if (tmpans == -1) //如果是初始值就直接套用
                            tmpans = tmp[copyt];
                        if (tmpans > tmp[copyt]) //如果比原本小則更新tmpans
                            tmpans = tmp[copyt];
                    }
                }
                if (tmpans > ans) // 找最大的max
                    ans = tmpans;
            }
        }
        printf("%d\n",ans);
    }
}