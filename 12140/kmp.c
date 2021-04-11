#include <stdio.h>
#include <string.h>

void prefixSuffixArray(char* pat, int M, int* pps) {
    int length = 0;
    pps[0] = 0;
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[length]) {
            length++;
            pps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = pps[length - 1];    
            } else {
                pps[i] = 0;
                i++;
            }
        }
    }
}

void KMPAlgorithm(char* text, char* pattern) {
    int N = strlen(text); 
    int M = strlen(pattern);
    int pps[M];
    prefixSuffixArray(pattern, M, pps);
    int i = 0;
    int j = 0;
    int count = 0;
    while (i < N) {
        if (pattern[j] == text[i]) {
            j++;
            i++;
        }
        if (j == M) {
            count++;
            // printf("%d\n", i - j);
            j = pps[j - 1];
        } else if (i < N && pattern[j] != text[i]) {
            if (j != 0) {
                j = pps[j - 1];
            } else {
                i = i + 1;
            }
        }
    }
    printf("%d\n", count);
}

int main(void) {
    char S[1000];
    char s[1000];
    scanf(" %[a-z]s", S);
    scanf(" %[a-z]s", s);
    // fgets(S, sizeof(S), stdin);
    // fgets(s, sizeof(s), stdin);    
    int t;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        int l, r;
        scanf("%d %d\n", &l, &r);
        int size = r - l + 1;
        char subS[size];
        for (int j = 0; j < size; j++) {
            subS[j] = S[j + l - 1];
        }
        KMPAlgorithm(subS, s);
    }
    return 0;
}