(module
  (import "js" "table" (table 2 anyfunc))
  (elem (i32.const 0) $func1 $func0)  ;;set $func0,$func1 to table
  (func $func0 (result i32)
    i32.const 13)
  (func $func1 (result i32)
    i32.const 42)  
)