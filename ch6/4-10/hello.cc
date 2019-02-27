#include <emscripten.h>

#include "mypkg.h" // for my_run_script_args

int main() {
	auto jsCode = R"(
		console.log('arg1:', Pointer_stringify(getValue(arguments[1]+0, 'i32')));
		console.log('arg2:', getValue(arguments[1]+4, 'i32'));
		console.log('arg3:', getValue(arguments[1]+8, 'double'));
		console.log('arg4:', getValue(arguments[1]+16, 'i32'));
	)";
	my_run_script_args(jsCode, "hello", 43, 3.14f, 2017);
	return 0;
}
