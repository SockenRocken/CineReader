CC=g++

imageoffsets.o: imageoffsets.h imageoffsets.cpp data.h
	$(CC) -c imageoffsets.cpp

bitmapinfoheader.o: bitmapinfoheader.cpp bitmapinfoheader.h data.h 
	$(CC) -c bitmapinfoheader.cpp 

cinefileheader.o: cinefileheader.cpp cinefileheader.h data.h 
	$(CC) -c cinefileheader.cpp 

bitreader.o: bitreader.cpp bitreader.h data.h
	$(CC) -c bitreader.cpp 

test: test.cpp data.h bitreader.o cinefileheader.o bitmapinfoheader.o imageoffsets.o
	$(CC) imageoffsets.o bitreader.o cinefileheader.o bitmapinfoheader.o test.cpp -o test

run: test
	./test