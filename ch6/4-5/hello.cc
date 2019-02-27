extern "C" void my_run_script(const char *jsCode, int arg);

int main() {
	my_run_script("console.log($arg)", 42);
	return 0;
}
