(module
  (import "js" "mem" (memory 1))
  (import "js" "table" (table 1 anyfunc))
  (type $type_0 (func (param i32))) ;;define func Signatures
  (func (export "sumfib") (param $count i32) (result i32)
   (local $offset i32)(local $end i32)(local $re i32)
    (call_indirect (type $type_0) (get_local $count) (i32.const 0))  ;;call Table:0
    i32.const 0
    set_local $offset
    get_local $count
    i32.const 4
    i32.mul
    set_local $end
    block 
      loop
        get_local $offset
        get_local $end
        i32.eq
        br_if 1
        get_local $re
        get_local $offset
        i32.load  ;;Load i32 from memory:offset
        i32.add
        set_local $re
        get_local $offset
        i32.const 4
        i32.add
        set_local $offset
        br 0
      end
    end
    get_local $re
  )
)