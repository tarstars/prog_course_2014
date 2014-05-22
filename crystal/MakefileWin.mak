prog: main.obj  mat3.obj  poly.obj  Tens4.obj  Vec3.obj
	cl main.obj  mat3.obj  poly.obj  Tens4.obj  Vec3.obj /Feprog

main.obj: main.cpp
	cl /c main.cpp 
	
poly.obj: poly.cpp poly.h
	cl /c poly.cpp

mat3.obj: mat3.cpp mat3.h
	cl /c mat3.cpp

Tens4.obj: Tens4.cpp Tens4.h
	cl /c Tens4.cpp

Vec3.obj: Vec3.cpp Vec3.h
	cl /c Vec3.cpp

clean:
	del prog *~ *.obj
