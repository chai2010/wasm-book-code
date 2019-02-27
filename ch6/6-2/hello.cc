#include <emscripten.h>
#include <emscripten/html5.h>

int key_callback(int eventType, const EmscriptenKeyboardEvent *keyEvent, void *userData) {
	printf("eventType: %d, %s, %s\n", eventType, keyEvent->key, keyEvent->code);
	return 0;
}

void do_web_frame() {
	// printf("do_web_frame\n");
}

int main() {
	emscripten_set_canvas_element_size("#canvas", 1024, 768);
	emscripten_set_keydown_callback(0, 0, 1, key_callback);

	emscripten_set_main_loop(do_web_frame, 0, 0);
	return 0;
}
