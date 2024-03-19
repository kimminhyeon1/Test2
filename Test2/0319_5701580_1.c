#include <stdio.h>
#include <time.h>
//20! 을 구하는 재귀함수 반복함수
double factorial_rec(int n) {
	if (n <= 1) return(1);
	else return (n * factorial_rec(n - 1));
}
double factorial_iter(int n) {
	int i, result = 1;
	for (i = 1; i <= n; i++)
		result = result * i;
	return(result);
}
int main(void) {
	clock_t start1, stop1, start2, stop2;
	double duration_rec, duration_iter;
	start1 = clock();

	double result_rec = factorial_rec(20);
	
	stop1 = clock();
	duration_rec = (double)(stop1 - start1) / CLOCKS_PER_SEC;
	
	start2 = clock();

	double result_iter = factorial_iter(20);

	stop2 = clock();
	duration_iter = (double)(stop2 - start2) / CLOCKS_PER_SEC;
	printf("20! 재귀함수값 = %f, 반복함수값 = %f\n", result_rec, result_iter);
	printf("재귀함수 실행시간 = %f, 반복함수 실행시간 = %f\n", duration_rec, duration_iter);

	return 0;
}