#############################################################
CXX        = g++
NAME       = nn_from_scratch
SRCDIR     = src
OBJDIR     = obj
CXXFLAGS   = -Wall -Werror -O2 -Wextra -pedantic -std=c++20 -DNDEBUG -I/usr/include/eigen3
#############################################################
#### DO NOT EDIT BELOW THIS LINE ############################
VERSION    = 1.0
SOURCES    = main.cc
OBJS       = $(SOURCES:%.cc=$(OBJDIR)/%.o)

# Create object directory if it doesn't exist
$(shell mkdir -p $(OBJDIR))

# Main target
$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo ""
	@echo "**************************************************"
	@echo " Neural Network From Scratch"
	@echo " Version: "$(VERSION)
	@echo " For more information, see README."
	@echo " <nnamdidaniel114[at]gmail[dot]com>"
	@echo "**************************************************"

# Pattern rule for object files
$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	@$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	@rm -rf $(OBJDIR) $(NAME)

.PHONY: all
all: clean $(NAME)
#############################################################
