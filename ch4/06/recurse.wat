(module
  (func $sum (export "sum") (param $i i32) (result i32)
   (local $c i32)
    get_local $i
	i32.const 1
	i32.le_s
	if
	  get_local $i
	  set_local $c
	else
	  get_local $i
	  i32.const 1
	  i32.sub
	  call $sum
	  get_local $i
	  i32.add
	  set_local $c
	end
	get_local $c
  )
)
