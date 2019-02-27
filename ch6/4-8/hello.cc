#include "mypkg.h" // for my_run_script_args

int main() {
	auto jsCode = R"(
		for(var i = 0; i < arguments.length; i++) {
			console.log(Pointer_stringify(HEAP32[(arguments[1]+4*i)>>2]));
		}
	)";
	my_run_script_args(jsCode, "hello", "world");
	return 0;
}
