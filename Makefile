test: FORCE
	g++ bubblefunc.cpp  -o test

FORCE: ;

clean:
	rm test
