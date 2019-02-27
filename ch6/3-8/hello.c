#include <stdio.h>
#include <emscripten.h>

int main() {
	int v = EM_ASM_INT({return 42}, 0);
	printf("%d\n", v);
	return 0;
}
