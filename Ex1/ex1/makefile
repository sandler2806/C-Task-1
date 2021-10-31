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

all: mains maindrec maindloop libclassloops.a libclassloops.so libclassrec.so libclassrec.a
loops: libclassloops.a
recursives:libclassrec.a
recursived:libclassrec.so
loopd:libclassloops.so
mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm

maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm

maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm
	

libclassrec.so: $(OBJECTS_rec) $(OBJECTS_base)
	$(CC) -shared -o libclassrec.so $(OBJECTS_rec) $(OBJECTS_base) 
libclassrec.a: $(OBJECTS_rec) $(OBJECTS_base)
	$(AR) -rcs libclassrec.a $(OBJECTS_rec) $(OBJECTS_base)


libclassloops.so: $(OBJECTS_loop) $(OBJECTS_base)
	$(CC) -shared -o libclassloops.so $(OBJECTS_loop) $(OBJECTS_base)
libclassloops.a: $(OBJECTS_loop) $(OBJECTS_base)
	$(AR) -rcs libclassloops.a $(OBJECTS_loop)	$(OBJECTS_base)


advancedClassificationRecursion.o: $(CLASS_rec) NumClass.h
	$(CC) $(FLAGS) -c $(CLASS_rec) -lm
advancedClassificationLoop.o:$(CLASS_loop) NumClass.h
	$(CC) $(FLAGS) -c $(CLASS_loop) 
basicClassification.o:$(CLASS_base) NumClass.h
	$(CC) $(FLAGS) -c $(CLASS_base)
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -lm

.PHONY: clean all loops recursives recursived loopd

clean:
	rm -f *.o *.a *.so prog mains maindrec maindloop