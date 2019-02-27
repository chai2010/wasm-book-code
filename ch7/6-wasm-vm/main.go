// +build go1.11

package main

import (
	"fmt"
	"log"
	"os"

	"github.com/go-interpreter/wagon/exec"
	"github.com/go-interpreter/wagon/wasm"
)

func main() {
	f, err := os.Open("add.wasm")
	if err != nil {
		log.Fatal(err)
	}
	defer f.Close()

	m, err := wasm.ReadModule(f, nil)
	if err != nil {
		log.Fatal(err)
	}

	for name, e := range m.Export.Entries {
		fidx := m.Function.Types[int(e.Index)]
		ftype := m.Types.Entries[int(fidx)]

		fmt.Printf("%s: %#v: %v \n", name, e, ftype)
	}

	vm, err := exec.NewVM(m)
	if err != nil {
		log.Fatal(err)
	}

	// result = add(100, 20)
	result, err := vm.ExecCode(0, 100, 20)
	if err != nil {
		log.Fatal(err)
	}

	fmt.Printf("result(%[1]T): %[1]v\n", result)
	fmt.Println(result.(uint32))
}
