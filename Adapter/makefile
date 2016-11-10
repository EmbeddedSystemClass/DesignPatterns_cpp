include ../makefile_config

TARGET = adapter.a
SRCS = TestAdapter.cpp Adapter1.cpp OldClass1.cpp Adapter2.cpp OldClass2.cpp
INCLUDES =
SUBS =
SUBDIRS =

all: sub_target $(TARGET)

$(TARGET): $(OBJS) $(SUBS)
	$(AR) r $@ $(OBJS) $(SUBS)

 .PHONY: sub_target
sub_target:
ifdef SUBDIRS
	$(foreach subdir,$(SUBDIRS),cd $(subdir) && $(MAKE) && cd ../ &&) cd ./
endif

.PHONY: clean
clean:
	$(DEL) *.o *.a *.exe
ifdef SUBDIRS
	$(foreach subdir,$(SUBDIRS),cd $(subdir) && $(MAKE) clean && cd ../ &&) cd ./
endif
