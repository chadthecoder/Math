# note every second line must start with a Tab character

mod: programs/mod.cpp
	g++ programs/mod.cpp -o bin/mod

clean:
	rm bin/*.exe