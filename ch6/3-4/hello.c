#include <emscripten.h>

int main() {
	EM_ASM(
		console.log("Hello, world!") // 省略了末尾的分号
		console.log("Hello, world!")
	);
	return 0;
}
