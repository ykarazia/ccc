.PHONY: compile clean link run


BDIR ?= build
SRCDIR=src
OBJDIR=$(BDIR)/obj


SRC=$(wildcard $(SRCDIR)/*.cpp )
OBJ=$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRC))

DIRS= $(OBJDIR) $(SRCDIR) $(BDIR)

$(DIRS):
	mkdir -p $@

compile : $(DIRS) $(OBJ)

$(OBJ) : $(OBJDIR)/%.o : $(SRCDIR)/%.cpp $(DIRS)
	g++ -g -c -I inc/ -o $@ $< 

clean:
	rm -rf $(BDIR)

$(BDIR)/out.a: $(OBJ)
	g++ $(OBJ) -o $@

link: $(BDIR)/out.a

run: link
	$(BDIR)/out.a
