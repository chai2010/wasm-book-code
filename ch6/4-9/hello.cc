#include <emscripten.h>

#include "mypkg.h" // for my_run_script_args

int main() {
	auto jsCode = R"(
		console.log("arg1:", getValue(arguments[1]+8*0, "double"));
		console.log("arg2:", getValue(arguments[1]+8*1, "double"));
		console.log("arg3:", getValue(arguments[1]+8*2, "double"));
	)";
	my_run_script_args(jsCode, 1.1f, 2.2f, 3.3f);
	return 0;
}
