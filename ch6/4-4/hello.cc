#include <emscripten.h>

int main() {
	emscripten_run_script(R"(
		function print(s) {
			console.log("print:", s);
		}
		print("hello");
	)");
	return 0;
}
