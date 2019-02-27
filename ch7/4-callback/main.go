// +build go1.11
// +build js,wasm

package main

import (
	"fmt"
	"sync"
	"syscall/js"
)

func main() {
	var g = js.Global()
	var wg sync.WaitGroup

	g.Set("println", js.NewCallback(func(args []js.Value) {
		defer wg.Done()

		var goargs []interface{}
		for _, v := range args {
			goargs = append(goargs, v)
		}

		fmt.Println(goargs...)
	}))

	wg.Add(2)
	g.Call("eval", `
		println("hello", "wasm");
		println(123, "abc");
	`)

	wg.Wait()
}
