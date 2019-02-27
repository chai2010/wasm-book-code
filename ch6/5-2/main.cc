
#include <stdio.h>
#include <emscripten.h>

#ifndef CAPI_EXPORT
#	define CAPI_EXPORT(rettype) extern "C" rettype EMSCRIPTEN_KEEPALIVE
#endif

CAPI_EXPORT(int) mymain() {
	printf("hello, mymain\n");
    return 0;
}

int preMain = emscripten_run_script_int(R"==(
	// 禁止 main 函数的自动运行
	Module.noInitialRun = true;
	shouldRunNow = false;

	// 调用 mymain 函数
	Module._mymain();
)==");

int main() {
	printf("hello, world\n");
}
