#include <stdlib.h>
#include <emscripten.h>

extern "C" char* my_run_script_string(const char *s, ...);

int main() {
	char *s = my_run_script_string("'hello'");
	if(s != NULL) printf("%s\n", s);
	if(s != NULL) free(s);
	return 0;
}
