
run: wasm_exec.js a.out.wasm
	go run server.go

a.out.wasm: hello.go
	GOARCH=wasm GOOS=js go build -o a.out.wasm hello.go

wasm_exec.js:
	cp $(shell go env GOROOT)/misc/wasm/wasm_exec.js wasm_exec.js

clean:
	-rm *.out.wasm wasm_exec.js
