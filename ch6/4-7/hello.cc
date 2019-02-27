#include "mypkg.h" // for my_run_script_args

int main() {
	auto jsCode = R"(
		console.log("arg1:", HEAP32[(arguments[1]+0)/4]);
		console.log("arg2:", HEAP32[(arguments[1]+4)/4]);
		console.log("arg3:", HEAP32[(arguments[1]+8)/4]);
	)";
	my_run_script_args(jsCode, 1, 2, 3);
	return 0;
}
