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
        prefix[i + 1] = count; // start from 1
    }
    int tmp = N - M + 1;
    for (int i = tmp; i <= N; i++) {
        prefix[i] = prefix[tmp];
    }
}

int main(void) {
    scanf(" %[a-z]s", text);
    scanf(" %[a-z]s", pattern);
    int N = strlen(text);
    int M = strlen(pattern);
    string_matching(N, M);
    for (int i = 1; i <= N; i++) {
        printf("%d ", prefix[i]);
    }
    return 0;
}
