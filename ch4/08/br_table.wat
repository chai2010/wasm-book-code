(module
  (func (export "brTable")(param $i i32) (result i32)
    block
      block
        block
          get_local $i
          br_table 2 1 0
        end
        i32.const 4
        return
      end
      i32.const 5
      return
    end
    i32.const 6
  )
)
