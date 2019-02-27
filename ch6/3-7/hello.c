#include <stdio.h>
#include <emscripten.h>

int main() {
	float sum = EM_ASM_DOUBLE({
		var sum = $0+$1;
		console.log("sum:", sum);
		return sum;
	}, 1.1, 2.2);
	printf("sum(1.0,2.2): %f\n", sum);
	return 0;
}
