main.exe: main.o produto.o
	g++ -o main.exe main.o produto.o

main.o: main.cpp
	g++ -c main.cpp

produto.o: produto.cpp produto.h
	g++ -c produto.cpp

clean:
	rm *.o