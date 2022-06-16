CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	= braiiiiiiinnnzzzz
CLASSES	= Zombie.cpp
HEADERS	= $(patsubst %.cpp,%.hpp,$(CLASSES))
SRCS	= main.cpp $(CLASSES) newZombie.cpp randomChump.cpp
OBJDIR	= obj
OBJS	= $(patsubst %.cpp,$(OBJDIR)/%.o,$(SRCS))

all: $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

show:
	@echo SRCS=$(SRCS)
	@echo OBJS=$(OBJS)

debug: fclean
debug: CFLAGS := $(CFLAGS) -g
debug: all

leaks: $(NAME)
	leaks --atExit -- ./$(NAME)

$(NAME): $(OBJS) $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir $(OBJDIR)

.PHONY: all clean fclean re show debug leaks
