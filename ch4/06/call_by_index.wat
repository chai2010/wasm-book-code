(module
  (table 2 anyfunc)
  (elem (i32.const 0) $func1)
  (type $type_0 (func (param i32) (result i32)))  ;;define func Signatures
  (func $func1 (result i32)
    i32.const 13)
  (func (export "call_by_index") (param $index i32) (result i32)
    i32.const 42                  ;;param
    get_local $index              ;;index
    call_indirect (type $type_0)  ;;RuntimeError
  )
)
