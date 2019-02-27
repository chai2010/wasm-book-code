;;test.wat
(module
	(func (export "add") (param $i1 i32) (param $i2 i32) (result i32)
		get_local $i1
		get_local $i2
		i32.add)
	(func (export "inc") (param $i1 i32) (result i32)
		get_local $i1
		i32.const 1
		i32.add)
)