#include <stdio.h>

#include "rngbrush/rngbrush.h"

int	main(int ac, char **av){

rng_init();

printf("hello ra1");
printf("\ngenerated: %c %c %c %c", ra1(), ra1(), ra1(), ra1());
printf("\ngenerated: %c %c %c %c", ra1(), ra1(), ra1(), ra1());
printf("\ngenerated: %c %c %c %c", ra1(), ra1(), ra1(), ra1());
printf("\ngenerated: %c %c %c %c", ra1(), ra1(), ra1(), ra1());
printf("\nend test");

return 0;}
