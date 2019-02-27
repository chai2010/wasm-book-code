(module
  (type (;0;) (func (result i32)))
  (import "js" "memory" (memory (;0;) 1))
  (import "js" "table" (table (;0;) 1 anyfunc))
  (func (;0;) (type 0) (result i32)
    i32.const 0
    i32.const 42
    i32.store
    i32.const 0
    call_indirect (type 0))
  (export "doIt" (func 0)))
