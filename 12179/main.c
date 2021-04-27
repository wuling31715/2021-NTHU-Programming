#include <stdio.h>
#include <stdlib.h>

// #define N 8
// int Queenes[N] = {0}, count = 0;
int count = 0;

int Check(int* Queenes, int N, int line, int list){
    int index;
    for (index = 0; index < line; index++) {
        int data = Queenes[index];
        if (list == data) 
            return 0;
        else if ((index + data) == (line + list))
            return 0;
        else if ((index - data) == (line - list))
            return 0;
    }
    return 1;
}

void eight_queen(int* Queenes, int N, int line){
    int list;
    for (list = 0; list < N; list++) {
        if (Check(Queenes, N, line, list)) {
            Queenes[line] = list;
            if (line == N - 1) {
                count++;
                // print();
                Queenes[line] = 0;
                return;
            }
            eight_queen(Queenes, N, line + 1);
            Queenes[line] = 0;
        }
    }
}

int main() {
    int N = 0;
    scanf("%d", &N);
    int *Queenes = malloc(sizeof(N));
    eight_queen(Queenes, N, 0);
    printf("%d\n", count);
    return 0;
}