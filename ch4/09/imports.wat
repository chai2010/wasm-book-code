(module
  (import "js" "print_f32" (func $js_print_f32 (param f32) (result f32)))
  (import "js" "global_pi" (global $pi f32))
  (func (export "print_pi") (result f32)
    get_global $pi
    call $js_print_f32
  )
)
