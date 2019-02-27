(module
  (start $print_pi)
  (import "js" "print_f32" (func $js_print_f32 (param f32)))
  (func $print_pi
    f32.const 3.14
    call $js_print_f32
  )
)
