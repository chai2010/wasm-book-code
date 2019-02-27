function f(a, b, c){
	for(var i = 0; i < arguments.length; i++) {
		console.log("arguments[", i, "]: ", arguments[i]);
	}
}

f(1, 2)
