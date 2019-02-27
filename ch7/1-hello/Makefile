run: a.out.wasm
	node $(shell go env GOROOT)/misc/wasm/wasm_exec.js a.out.wasm

a.out.wasm: hello.go
	GOARCH=wasm GOOS=js go build -o a.out.wasm hello.go

clean:
	-rm *.out.wasm
