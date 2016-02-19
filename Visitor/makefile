MAKE = make
CC = g++
AR = ar
CFLAGS = -g -O0 -Wall
INCLUDES =
TARGET = visitor.a
SUBS =
SUBDIRS =
SRCS = TestVisitor.cpp MyInt.cpp MyDouble.cpp VisitorNewOP1.cpp VisitorNewOP2.cpp
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
	$(AR) r $@ $(OBJS) $(SUBS)

.PHONY: clean
clean:
	rm -f *.o *.a *.exe
	@for subdir in $(SUBDIRS) ; do \
		(cd $$subdir && $(MAKE) clean) ;\
	done
