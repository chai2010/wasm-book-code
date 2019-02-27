(module
  (import "js" "mem" (memory 1))
  (import "js" "table" (table 2 anyfunc))
  (elem (i32.const 0) $f0 $f1)
  (type $type_0 (func (result i32)))
  (func $f0 (param i32)(result i32)
    i32.const 13)
  (func $f1 (result i32)
    i32.const 65540
    i32.load)
  (func (export "call_by_index") (param $index i32)(result i32)
    get_local $index
    call_indirect (type $type_0))
  (func (export "return_i64") (result i64)
    i64.const 0)
  (func (export "param_i64") (param i64))
)