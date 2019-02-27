// Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

const fs = require('fs');
const buf = fs.readFileSync('./add.wasm');

WebAssembly.instantiate(new Uint8Array(buf)).then(function(result) {
	console.dir(result.instance.exports)
})
