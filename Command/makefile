include ../makefile_config

TARGET = command.a
SRCS = TestCommand.cpp Calculator.cpp CalcSum0to10.cpp CalcSum3to7.cpp Batch.cpp
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
