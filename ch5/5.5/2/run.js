// Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

const fs = require('fs');
const buf = fs.readFileSync('./start.wasm');

WebAssembly.instantiate(new Uint8Array(buf), {
	console: {
		log_i32: function(arg) {
			console.log("console.log_i32:", arg);
		}
	}
}).then(function(result) {
	console.log("WebAssembly.instantiate done")
})
