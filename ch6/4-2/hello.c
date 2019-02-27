#include <emscripten.h>

const char* getJsCodeWithArg(int a, int b) {
	static char jsCode[1024];
	sprintf(jsCode, "console.log('eval:', %d, %d)", a, b);
	return jsCode;
}

int main() {
	emscripten_run_script(getJsCodeWithArg(1, 2));
	return 0;
}
