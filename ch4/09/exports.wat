(module
  (func (export "wasm_func") (result i32)
    i32.const 42
  )
  (memory (export "wasm_mem") 1)
  (table (export "wasm_table") 2 anyfunc)
  (global (export "wasm_global_pi") f32 (f32.const 3.14159))
)
