linux:
	g++ main.cpp src/*.cpp -o bin/main
	bin/main

windows:
	g++ main.cpp src/*.cpp -o bin/main.exe
	bin/main.exe