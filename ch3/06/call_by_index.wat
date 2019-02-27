(module
  (import "js" "table" (table 2 anyfunc))
  (elem (i32.const 0) $plus13 $plus42)            ;;set $plus13,$plus42 to table
  (type $type_0 (func (param i32) (result i32)))  ;;define func Signatures
  (func $plus13 (param $i i32) (result i32)
    i32.const 13
    get_local $i
    i32.add)
  (func $plus42 (param $i i32) (result i32)
    i32.const 42
    get_local $i
    i32.add)
  (func (export "call_by_index") (param $index i32) (param $input i32) (result i32)
    get_local $input              ;;push param into stack
    get_local $index              ;;push index into stack
    call_indirect (type $type_0)  ;;call table:index
  )
)