;; Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
;; Use of this source code is governed by a BSD-style
;; license that can be found in the LICENSE file.

(module
	(import "console" "log" (func $log (param i32)))

	(func (export "add") (param i32) (param i32) (result i32)
		get_local 0
		get_local 1
		i32.add
	)
)
