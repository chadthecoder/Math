# note every second line must start with a Tab character

all: programs/mod.cpp
	g++ programs/mod.cpp -o bin/mod
	g++ programs/gcd.cpp -o bin/gcd

clean:
	rm bin/*