// +build go1.11
// +build js,wasm

package main

import (
	"syscall/js"
)

func main() {
	var g = js.Global()
	var console = g.Get("console")
	var console_log = console.Get("log")

	console_log.Invoke("console_log: hello wasm!")

	js.Global().Call("eval", `
		console.log("hello, wasm!");
		console.dir(console);
	`)
}
