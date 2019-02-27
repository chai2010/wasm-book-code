// package.js

mergeInto(LibraryManager.library, {
	my_run_script_string: function(code) {
		var s = eval(Pointer_stringify(code)) + '';
		var p = _my_run_script_string;
		if (!p.bufferSize || p.bufferSize < s.length+1) {
			if (p.bufferSize) _free(p.buffer);
			p.bufferSize = s.length+1;
			p.buffer = _malloc(p.bufferSize);
		}
		stringToUTF8(s, p.buffer, 1024*8);
		return p.buffer;
	},
});
