#  Makefile
#     a makefile for the stack example.
#  Megan Phelan 3/4/2017

#	Test edit
#	By: Seth

#            SHELL =    /bin/sh

#              TOP = .
#      CURRENT_DIR = .

#              CPP = /lib/cpp $(STD_CPP_DEFINES)
#             CXX  = g++
#
#        CCOPTIONS =
#           CFLAGS = $(CDEBUGFLAGS) $(CCOPTIONS) $(ALLDEFINES)
#           RM_CMD = $(RM) *.o core

SRCS=   StackTest.cpp   \
        stack.cpp       \
        link.cpp

OBJS=   StackTest.o     \
        stack.o         \
        link.o

testStack.o:    stack.h

stack.o:        stack.h \
        link.h

link.o: link.h

PROGRAMS = testStack

all::  $(PROGRAMS)


testStack: $(OBJS)
	$(CXX) -o $@ $(OBJS)
#$(CXX) -o $@ $(OBJS) $(LDOPTIONS) $(LOCAL_LIBRARIES) $(LDLIBS)  $(EXTRA_LOAD_FLAGS)

clean::
	$(RM) testStack 

latex::
	latex stack.tex    


###########################################################################
# common rules for all Makefiles - do not edit

emptyrule::


clean::
	rm *.o



