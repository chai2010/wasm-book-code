(module
  (table $tab 2 anyfunc)              ;;define $tab, initSize = 2
  (export "table" (table $tab))       ;;export $tab as "table  
  (elem (i32.const 0) $func1 $func0)  ;;set $func0,$func1 to table
  (func $func0 (result i32)
    i32.const 13)
  (func $func1 (result i32)
    i32.const 42)  
)