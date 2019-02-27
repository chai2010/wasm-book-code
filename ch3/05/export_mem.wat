(module
  (memory $mem 1)                  ;;define $mem, initSize = 1page
  (export "memory" (memory $mem))  ;;$export $mem as "memory"
  (func (export "fibonacci") (param $count i32)
   (local $i i32) (local $a i32) (local $b i32)
    i32.const 0
    i32.const 1
    i32.store
    i32.const 4
    i32.const 1
    i32.store
    i32.const 1
    set_local $a
    i32.const 1
    set_local $b
    i32.const 8
    set_local $i    
    get_local $count
    i32.const 4
    i32.mul
    set_local $count   
    block
      loop
        get_local $i
        get_local $count
        i32.ge_s
        br_if 1      
        get_local $a
        get_local $b
        i32.add
        set_local $b      
        get_local $b
        get_local $a
        i32.sub
        set_local $a      
        get_local $i
        get_local $b
        i32.store      
        get_local $i
        i32.const 4
        i32.add
        set_local $i
        br 0
      end
    end
  )
)