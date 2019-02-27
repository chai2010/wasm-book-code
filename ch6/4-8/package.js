// package.js

mergeInto(LibraryManager.library, {
	my_run_script_args: function(code) {
		eval(Pointer_stringify(code));
	},
});
