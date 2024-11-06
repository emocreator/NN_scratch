#############################################################
CXX        = g++
NAME       = nn_from_scratch
SRCDIR     = src
OBJDIR     = obj
CXXFLAGS   = -Wall -Werror -O2 -Wextra -pedantic -std=c++20 -DNDEBUG -I/usr/include/eigen3
#############################################################
#### DO NOT EDIT BELOW THIS LINE ############################
VERSION    = 1.0

# Find all source files in SRCDIR
SOURCES    = $(wildcard $(SRCDIR)/*.cc)
# Generate object file names from source files
OBJS       = $(SOURCES:$(SRCDIR)/%.cc=$(OBJDIR)/%.o)
# Generate dependency file names from source files
DEPS       = $(OBJS:.o=.d)

# Main target
$(NAME): create_dirs $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo ""
	@echo "**************************************************"
	@echo " Neural Network From Scratch"
	@echo " Version: "$(VERSION)
	@echo " For more information, see README."
	@echo " <nnamdidaniel114[at]gmail[dot]com>"
	@echo "**************************************************"

# Create necessary directories
.PHONY: create_dirs
create_dirs:
	@mkdir -p $(OBJDIR)

# Pattern rule for object files
$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	@echo "Compiling $<..."
	@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Include dependency files
-include $(DEPS)

.PHONY: clean all help

clean:
	@echo "Cleaning up..."
	@rm -rf $(OBJDIR) $(NAME)

all: clean $(NAME)

help:
	@echo "Available targets:"
	@echo "  all      - Clean and rebuild everything"
	@echo "  clean    - Remove object files and executable"
	@echo "  $(NAME)  - Build the executable"
	@echo "  help     - Show this help message"
#############################################################
