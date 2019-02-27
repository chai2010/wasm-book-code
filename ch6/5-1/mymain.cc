#include "mymain.h"

#include <stdio.h>
#include <emscripten.h>

int EMSCRIPTEN_KEEPALIVE mymain() {
	printf("hello, world\n");
	return 0;
}

int EMSCRIPTEN_KEEPALIVE mymain2() {
	printf("hello, world\n");
	return 0;
}
