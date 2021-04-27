#include <stdio.h>
#include <stdlib.h>
 
int arr[20];        //各皇后所在的行号
int count = 0;     //统计解得个数

void print(int n)
{
	int i, j;
	count++;
	printf("第%d个解：", count);
	for(i = 1; i <= n; i++) {
        printf("(%d,%d) ",i,arr[i]);
    }
	printf("\n");
	for(i = 1; i <= n; i++) { //行
		for(j = 1; j <= n; j++) { //列
			if(arr[i] != j) {
                printf("X ");
            } else {
                printf("Q "); 
            }
		}
		printf("\n");
	}
}
//检验第i行的k列上是否可以摆放皇后
int find(int i, int k)  
{
	int j = 1;
	while(j < i)  //j=1~i-1是已经放置了皇后的行
	{
		//第j行的皇后是否在k列或(j,arr[j])与(i,k)是否在斜线上
		if(arr[j] == k || abs(j-i) == abs(arr[j] - k)) {
            return 0;
        }
		j++;
	}
	return 1;
}
//放置皇后到棋盘上
void place(int k, int n) {
	int j;
	if (k > n) {
        // print(n);
        count++;
    } else {
		for (j = 1; j <= n; j++) { //试探第k行的每一个列
			if (find(k, j)) {
				arr[k] = j;
				place(k + 1, n);  //递归总是在成功完成了上次的任务的时候才做下一个任务
			}
		}
	}
}
 
int main(void) {
	int N;
	scanf("%d", &N);
    place(1, N);        //问题从最初状态解起
    printf("%d\n", count);
	return 0;
}