run: a.out.wasm
	node $(shell go env GOROOT)/misc/wasm/wasm_exec.js a.out.wasm

a.out.wasm: main.go
	GOARCH=wasm GOOS=js go build -o a.out.wasm main.go

clean:
	-rm *.out.wasm
