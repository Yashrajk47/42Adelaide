#include <unistd.h>
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef enum e_t_bool{
	FALSE = 0,
	TRUE = 1
}	t_bool;

# define SUCCESS 0
# define EVEN(nbr) (nbr % 2 == 0)

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
#endif
