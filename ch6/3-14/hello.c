#include <emscripten.h>

int main() {
	EM_ASM_({
		var args = ([$0, $1]); // [$0, $1] is invalid
		console.log(args);
  	}, 1, 2);
	return 0;
}
