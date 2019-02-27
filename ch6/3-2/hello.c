#include <emscripten.h>

int main() {
	EM_ASM(console.log("Hello, world!");console.log("Hello, world!"));
	return 0;
}
