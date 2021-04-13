#include <stdio.h>
#include <string.h>

char S[1001], p[1001];
int s_len, p_len;

int check_head(int id) {
    for(int i = id, j = 0; j < p_len; j++, i++) {
        if (i >= s_len || S[i] != p[j]) {
            return 0;
        }
    }
    return 1;
}

int check_end(int id) {
    for (int i = id, j = p_len - 1; j >= 0; j--, i--) {
        if (i < 0 || S[i] != p[j]) {
            return 0;
        }
    }
    return 1;
}

int main (void) {
    scanf("%s%s", S, p);
    int prefix_head[1002], prefix_end[1002];
    prefix_head[0] = 0;
    prefix_end[0] = 0;
    s_len = strlen(S);
    p_len = strlen(p);
    for (int i = 1; i <= s_len; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < s_len; i++) {
        printf("%c ", S[i]);
    }
    printf("\n");
    for (int i = 0; i < s_len; i++) {
        prefix_head[i + 1] = check_head(i) + prefix_head[i];
        printf("%d ", prefix_head[i + 1]);
    }
    printf("\n");
    for (int i = 0; i < s_len; i++) {
        prefix_end[i + 1] = check_end(i) + prefix_end[i];
        printf("%d ", prefix_end[i + 1]);
    }
    printf("\n");
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int l, r, ans;
        scanf("%d%d\n", &l, &r);
        ans = prefix_end[r] - prefix_head[l - 1];
        if (ans < 0) {
            ans = 0;
        }
        printf("%d %d %d\n", l, r, ans);
    }
    return 0;
}