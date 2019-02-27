#include "mypkg.h" // for my_run_script_args

int main() {
	my_run_script_args("console.log(arguments)", 1, 2, 3);
	return 0;
}

// output: { '0': 1152, '1': 3824 }
