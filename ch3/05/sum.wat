(module
  (import "js" "mem" (memory 1))
  (func (export "sum") (param $offset i32) (param $count i32) (result i32)
   (local $end i32)(local $re i32)
    get_local $offset
    get_local $count
    i32.const 4
    i32.mul
    i32.add
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