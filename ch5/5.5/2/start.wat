;; Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
;; Use of this source code is governed by a BSD-style
;; license that can be found in the LICENSE file.

(module
	(start 1) ;; $main index is 1
	(import "console" "log_i32" (func $log.i32 (param i32)))

	(func $main
		i32.const 42
		call $log.i32
	)
)
