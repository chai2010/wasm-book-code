onmessage = function (event){
  WebAssembly.instantiate(event.data).then(instance =>
    postMessage('' + instance.exports.showMeTheAnswer())
  );
}