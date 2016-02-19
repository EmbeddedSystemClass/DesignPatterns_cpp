MAKE = make
CC = g++
AR = ar
CFLAGS = -g -O0 -Wall
LDFLAGS =
INCLUDES = -IAdapter -IObsrever -ISingleton -IChainOfResponsibility -IMyInt
LIBS = -lm
TARGET = a.exe
SUBS = Adapter/adapter.a Observer/observer.a Singleton/singleton.a ChainOfResponsibility/chainOfResponsibility.a Visitor/visitor.a
SUBDIRS = Adapter Observer Singleton ChainOfResponsibility Visitor
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
#OBJS = *.o

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<


all: sub_target $(TARGET)

.PHONY: sub_target
sub_target:
	@for subdir in $(SUBDIRS) ; do \
		(cd $$subdir && $(MAKE)) ;\
	done

$(TARGET): $(OBJS) $(SUBS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(SUBS) $(LIBS)

.PHONY: clean
clean:
	rm -f *.o *.a *.exe
	@for subdir in $(SUBDIRS) ; do \
		(cd $$subdir && $(MAKE) clean) ;\
	done

