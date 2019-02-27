;; Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
;; Use of this source code is governed by a BSD-style
;; license that can be found in the LICENSE file.

(module $mymod
	(start $main)

	(import "module" "cpu" (global $module_cpu i32))
	(import "module" "init" (func $module_init))
	(import "module" "debug" (func $module_debug (param i32)))

	(export "module_cpu" (global $module_cpu))
	(export "module_debug" (func $module_debug))

	(global $next_id (export "next_id") i32 (i32.const 42))

	(func $main
		call $module_init
	)

	(func $get_next_id (result i32)
		get_global $next_id
	)

	(func $add (export "add") (param $a i32)(param $b i32) (result i32)
		get_local $a
		get_local $b
		i32.add
	)

	(func $pi (export "pi") (result f64)
		f64.const 3.14
	)

	(func $two_pi (result f64)
		f64.const 2
		call $pi
		f64.mul
	)
)
