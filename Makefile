CC=nvcc
DEBUG=-g
INCLUDE= -I /usr/local/include

final: final.cpp
	$(CC) -o final final.cpp

nxn: nxn.cpp
	$(CC) -o nxn nxn.cpp
