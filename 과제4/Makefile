cc=g++
target = exe
objects = main.o Array.o

$(target): $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : Array.h GrowableArray.h

.PHONY : clean
clean :
	rm $(target) $(objects)
