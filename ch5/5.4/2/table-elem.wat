;; Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
;; Use of this source code is governed by a BSD-style
;; license that can be found in the LICENSE file.

(module
	(table 3 4 anyfunc)
	(elem (i32.const 0) $foo $bar)

	(func $foo)
	(func $bar)
)
