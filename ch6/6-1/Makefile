
RUN_IN_DOCKER:=docker run --rm -it -v `pwd`:/src apiaryio/emcc:1.38.11

docker-run:
	$(RUN_IN_DOCKER) make run

docker-gen-html:
	$(RUN_IN_DOCKER) make gen-html

run:
	emcc hello.cc --pre-js pre.js --post-js post.js
	node a.out.js

gen-html:
	emcc -std=c++11 --js-library package.js hello.c -o a.out.html

server:
	go run server.go

clean:
	-rm *.out.html
	-rm *.out.wasm
	-rm *.out.js
