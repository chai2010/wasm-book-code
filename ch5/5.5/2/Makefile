# Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

# install wabt
# https://github.com/WebAssembly/wabt/

default:
	wat2wasm start.wat -v > start.wat.txt
	node run.js

clean:
	-rm *.wasm

