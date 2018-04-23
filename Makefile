#Makefile for "Lab02IMD0030"C++ application
#Created by Italo Hortiz 21/04/2018

PROG	=	geometria
CC	=	g++
CPPFLAGS	=	-O0	-g	-Wall	-ansi	-pedantic	-I	include	-std=c++11
OBJS	=	triangulo.o	retangulo.o	quadrado.o	circulo.o	piramide.o	paralelepipedo.o	cubo.o	esfera.o

$PROG:	$(OBJS)
	$(CC)	-o	$(PROG)	$(OBJS)

teste2.o: teste2.cpp
	$(CC)	$(CPPFLAGS)	-c	teste/teste2.cpp
triangulo.o:	triangulo.h
	$(CC)	$(CPPFLAGS)	-c	src/triangulo.cpp
retangulo.o:	retangulo.h
	$(CC)	$(CPPFLAGS)	-c	src/retangulo.cpp
quadrado.o:	quadrado.h
	$(CC)	$(CPPFLAGS)	-c	src/quadrado.cpp
circulo.o:	circulo.h
	$(CC)	$(CPPFLAGS)	-c	src/circulo.cpp
piramide.o:	piramide.h
	$(CC)	$(CPPFLAGS)	-c	src/piramide.cpp
paralelepipedo.o:	paralelepipedo.h
	$(CC)	$(CPPFLAGS)	-c	src/paralelepipedo.cpp
cubo.o:	cubo.h
	$(CC)	$(CPPFLAGS)	-c	src/cubo.cpp
esfera.o:	esfera.h
	$(CC)	$(CPPFLAGS)	-c	src/esfera.cpp

clean:
	rm	-f	core	$(PROG)	$(OBJS)
