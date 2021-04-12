#include <stdio.h>
#include <string.h>

char text[1000];
char pattern[1000];
int prefix[1001];
int count = 0;

void string_matching(int N, int M) {
    for (int i = 0; i <= N - M; i++) { // slide window
        int j = 0; // start matching
        for (j = 0; j < M; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == M) { // pattern matched
           count++;
           j = 0;
        }
        prefix[i + M] = count; // store at the end of matching
    }
}

int main(void) {
    scanf(" %[a-z]s", text);
    scanf(" %[a-z]s", pattern);
    int N = strlen(text);
    int M = strlen(pattern);
    string_matching(N, M);
    // for (int i = 0; i <= N; i++) {
    //     printf("%c ", text[i]);
    // }
    // printf("\n");
    // for (int i = 1; i <= N; i++) {
    //     printf("%d ", prefix[i]);
    // }
    // printf("\n");
    int t, l, r, frequence;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d\n", &l, &r);
        frequence = prefix[r] - prefix[l - 1];
        // printf("%d %d %d\n", l, r, frequence);
        printf("%d\n", frequence);
    }
    return 0;
}