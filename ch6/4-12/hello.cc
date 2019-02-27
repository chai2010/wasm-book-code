#include <stdlib.h>
#include <emscripten.h>

#include <string>

extern "C" char* my_run_script_string(const char *s, ...);

int main() {
	std::string s0 = my_run_script_string("'hello'");
	std::string s1 = my_run_script_string("'world'");
	printf("%s, %s\n", s0.c_str(), s1.c_str());
	return 0;
}
