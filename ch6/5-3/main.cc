
#include <stdio.h>
#include <emscripten.h>

#ifndef CAPI_EXPORT
#	define CAPI_EXPORT(rettype) extern "C" rettype EMSCRIPTEN_KEEPALIVE
#endif

CAPI_EXPORT(int) mymain() {
	printf("hello, mymain\n");
	return 0;
}

CAPI_EXPORT(int) c_add(int a, int b) {
	return a+b;
}

CAPI_EXPORT(void) sayHello(const char* name) {
	printf("hi %s!\n", name);
}

CAPI_EXPORT(const char*) getVersion() {
	return "version-0.0.1";
}

int preMain = emscripten_run_script_int(R"==(
	// 禁止 main 函数的自动运行
	Module.noInitialRun = true;
	shouldRunNow = false;

	// 调用 mymain 函数
	Module._mymain();

	var result0 = Module.ccall(
		'c_add', 'number',  ['number', 'number'],
		[10, 20]
	);

	var result1 = Module._c_add(11, 20);
	var result2 = Module._c_add.apply(null, [12, 20]);

	console.log(result0);
	console.log(result1);
	console.log(result2);

	Module.ccall(
		'sayHello', 'null',  ['string'],
		["Emscripten"]
	);

	var version = Module.ccall('getVersion', 'string');
	console.log(version);

	var p = Module._getVersion();
	var s = Module.Pointer_stringify(p);
	Module._free(p);

	console.log(s);

	var js_add = Module.cwrap('c_add', 'number',  ['number', 'number']);
	var result3 = js_add(1, 2);
	var result4 = js_add(3, 4);

	console.log(result3);
	console.log(result4);

)==");

int main() {
	printf("hello, world\n");
}
