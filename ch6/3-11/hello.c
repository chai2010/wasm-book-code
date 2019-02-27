#include <emscripten.h>

int main() {
	EM_ASM_({
		console.log("$0:", $0);
		console.log("$1:", $1);
  	}, 1, 2);
	return 0;
}
