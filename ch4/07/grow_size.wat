(module
  (memory 3)
  (func (export "size") (result i32)
    memory.size
  )
  (func (export "grow") (param i32) (result i32)
    get_local 0
    memory.grow
  )
)