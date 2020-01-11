# note every second line must start with a Tab character

all: programs/mod.cpp
	g++ programs/mod.cpp -o bin/mod
	g++ programs/gcd.cpp -o bin/gcd
	g++ programs/isPrime.cpp -o bin/isPrime

clean:
	rm bin/mod
	rm bin/gcd
	rm bin/isPrime
