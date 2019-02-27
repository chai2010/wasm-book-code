// package.js

mergeInto(LibraryManager.library, {
	my_run_script_string: function(code) {
		var s = eval(Pointer_stringify(code)) + '';
		var p = _malloc(s.length+1);
		writeStringToMemory(s, p);
		return p;
	},
});
