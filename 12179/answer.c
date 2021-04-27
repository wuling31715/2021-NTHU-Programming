#include <stdio.h>
 
long sum = 0, upperlim = 1;     
 
void test(long row, long ld, long rd) {
	if (row != upperlim) {
		long pos = upperlim & ~(row | ld | rd); 
		while (pos) {
			long p = pos & -pos;
			pos -= p;                           
			test(row + p, (ld + p) << 1, (rd + p) >> 1);
		}
	} else {
		sum++;
	}
}
 
int main() {
	int N;
	scanf("%d", &N);
	upperlim = (upperlim << N) - 1;         
	test(0, 0, 0);
	printf("%ld\n", sum);
	return 0;
}