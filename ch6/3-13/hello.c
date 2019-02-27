#include <emscripten.h>

int main() {
	EM_ASM_({
		for(var i = 0; i < arguments.length; i++) {
			console.log("$", i, ":", arguments[i]);
		}
	}, 1, 2);
	return 0;
}
