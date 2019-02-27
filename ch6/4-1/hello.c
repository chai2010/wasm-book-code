#include <emscripten.h>

const char* getJsCode() {
	return "console.log('eval:abc')";
}

int main() {
	emscripten_run_script(getJsCode());
	return 0;
}
