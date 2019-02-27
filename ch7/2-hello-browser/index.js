const go = new Go();
let mod, inst;

WebAssembly.instantiateStreaming(
	fetch("a.out.wasm"), go.importObject
).then(
	(result) => {
		mod = result.module;
		inst = result.instance;
		console.log("init done");
	}
).catch((err) => {
	console.error(err);
});

async function run() {
	await go.run(inst);

	// reset instance
	inst = await WebAssembly.instantiate(
		mod, go.importObject
	);
}
