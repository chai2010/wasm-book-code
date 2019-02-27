// package.js

mergeInto(LibraryManager.library, {
	my_run_script: function(code, $arg) {
		eval(Pointer_stringify(code));
	},
});
