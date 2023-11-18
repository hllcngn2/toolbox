#ifndef RNGBRUSH_H
#define RNGBRUSH_H

/*#include "struct.h"*/

void	rng_init(void);

//random numbers
int	rn(int max); //0-max inclusive
int	rr(int min, int max); //inclusive
/*void	ryx(rect r, int *y,int *x); //inclusive of boundaries*/

//random characters
char	ra(void);
char	ra1(void);

#endif
