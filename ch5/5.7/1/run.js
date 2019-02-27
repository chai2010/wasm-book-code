// Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

const fs = require('fs');
const buf = fs.readFileSync('./mod.wasm');

WebAssembly.instantiate(new Uint8Array(buf), {
	module: {
		cpu: 1,
		init: function() {
			console.log("module_init done");
		},
		debug: function(arg) {
			console.log("module_debug:", arg);
		}
	}
}).then(function(result) {
	console.log(result.instance.exports.module_cpu)
	console.log(result.instance.exports.next_id)

	console.log(result.instance.exports.add(1, 2))
	console.log(result.instance.exports.pi())

	result.instance.exports.module_debug(9527)
})
