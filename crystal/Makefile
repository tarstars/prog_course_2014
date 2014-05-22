prog: main.o  mat3.o  poly.o  Tens4.o  Vec3.o
	g++ main.o  mat3.o  poly.o  Tens4.o  Vec3.o -o prog

main.o: main.cpp
	g++ -c main.cpp -omain.o

poly.o: poly.cpp poly.h
	g++ -c poly.cpp -opoly.o

mat3.o: mat3.cpp mat3.h
	g++ -c mat3.cpp -omat3.o

Tens4.o: Tens4.cpp Tens4.h
	g++ -c Tens4.cpp -oTens4.o

Vec3.o: Vec3.cpp Vec3.h
	g++ -c Vec3.cpp -oVec3.o

clean:
	rm prog *~ *.o
