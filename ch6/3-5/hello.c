#include <stdio.h>
#include <emscripten.h>

int main() {
	int a = 1;
	int b = 2;
	int sum = EM_ASM_({return $0+$1}, a, b);
	printf("sum(%d, %d): %d\n", a, b, sum);
	return 0;
}
