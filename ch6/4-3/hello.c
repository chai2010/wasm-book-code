#include <emscripten.h>

int main() {
	emscripten_run_script("           \
		function print(s) {           \
			console.log('print:', s); \
		}                             \
		print('hello');               \
	");
	return 0;
}
