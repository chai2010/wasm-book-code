#include <stdio.h>
#include <emscripten.h>

int main() {
	int v = EM_ASM_INT_V({return 42});
	printf("%d\n", v);
	return 0;
}
