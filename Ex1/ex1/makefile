CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_rec=advancedClassificationRecursion.o
OBJECTS_loop=advancedClassificationLoop.o
OBJECTS_base=basicClassification.o
CLASS_rec=advancedClassificationRecursion.c
CLASS_loop=advancedClassificationLoop.c
CLASS_base=basicClassification.c
FLAGS= -Wall -g

all: mains maindrec maindloop
loops: maindloop
mains: $(OBJECTS_MAIN) advancedClassificationRecursion.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) advancedClassificationRecursion.a -lm

maindrec: $(OBJECTS_MAIN) advancedClassificationRecursion.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./advancedClassificationRecursion.so -lm

loops: $(OBJECTS_MAIN) advancedClassificationLoop.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./advancedClassificationLoop.so -lm
	

advancedClassificationRecursion.so: $(OBJECTS_rec) $(OBJECTS_base)
	$(CC) -shared -o advancedClassificationRecursion.so $(OBJECTS_rec) $(OBJECTS_base) 
advancedClassificationRecursion.a: $(OBJECTS_rec) $(OBJECTS_base)
	$(AR) -rcs advancedClassificationRecursion.a $(OBJECTS_rec) $(OBJECTS_base)


advancedClassificationLoop.so: $(OBJECTS_loop) $(OBJECTS_base)
	$(CC) -shared -o advancedClassificationLoop.so $(OBJECTS_loop) $(OBJECTS_base)
advancedClassificationLoop.a: $(OBJECTS_loop) $(OBJECTS_base)
	$(AR) -rcs advancedClassificationLoop.a $(OBJECTS_loop)	$(OBJECTS_base)


advancedClassificationRecursion.o: $(CLASS_rec) NumClass.h
	$(CC) $(FLAGS) -c $(CLASS_rec) -lm
advancedClassificationLoop.o:$(CLASS_loop) NumClass.h
	$(CC) $(FLAGS) -c $(CLASS_loop) 
basicClassification.o:$(CLASS_base) NumClass.h
	$(CC) $(FLAGS) -c $(CLASS_base)
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -lm

.PHONY: clean all

clean:
	rm -f *.o *.a *.so prog mains maindrec maindloop