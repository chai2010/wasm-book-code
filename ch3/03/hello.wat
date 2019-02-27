(module
  (import "js" "print" (func $js_print (param i32 i32)))  ;; import js:print as $js_print()
  (import "js" "mem" (memory 1))  ;; import js:mem as memory
  (data (i32.const 0) "你好，WASM")
  (func (export "hello")
    i32.const 0  ;; pass offset 0 to js_print
    i32.const 13  ;; pass length 13 to js_print
    call $js_print)
)