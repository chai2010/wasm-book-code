run:
	GOOS=js GOARCH=wasm go run -exec="$(shell go env GOROOT)/misc/wasm/go_js_wasm_exec" .

test:
	GOOS=js GOARCH=wasm go test -exec="$(shell go env GOROOT)/misc/wasm/go_js_wasm_exec"

bench:
	GOOS=js GOARCH=wasm go test -exec="$(shell go env GOROOT)/misc/wasm/go_js_wasm_exec" -bench=.*

clean:
	-rm *.wasm
