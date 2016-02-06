MAKE = make
CC = g++
AR = ar
CFLAG = -O
INCLUDES =
TARGET = adapter.a
SUBS =
SUBDIRS =
SRCS = TestAdapter.cpp Adapter1.cpp OldClass1.cpp Adapter2.cpp OldClass2.cpp
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

$(TARGET): $(OBJS)
	$(AR) r $@ $(OBJS) $(SUBS)

.PHONY: clean
clean:
	rm -f *.o *.a *.exe
	@for subdir in $(SUBDIRS) ; do \
		(cd $$subdir && $(MAKE) clean) ;\
	done
