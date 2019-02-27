#include <emscripten.h>

int main() {
	EM_ASM(console.log("你好，Emscripten！"));
	return 0;
}
