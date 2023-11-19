#include <stdio.h>
#include "c2buf.h"

int	main(int ac, char **av){
int h=5, w=8;
char c='x';

printf("- allocating c2buf h%i x w%i", h,w); fflush(stdout);
c2buf *buf =alloc_c2buf(h,w);
printf("\nallocation successful");

printf("\n- filling with '%c'", c); fflush(stdout);
c2_fill(buf, c);
printf("\nfilled");

printf("\n- printing\n"); fflush(stdout);
c2_print(buf);
printf("printed");

printf("\n- ncurses display\n");
printf("\n-- couldn't make it work in the same program --");
//initscr();
//SCREEN *termref =newterm(NULL, stdout,stdin);
//cbreak(); noecho();
//printw("hello");
//getch();
//delscreen(termref);
//endwin(); refresh();
//setvbuf(stdout, NULL, _IOLBF, 0);
//setvbuf(stderr, NULL, _IONBF, 0);
//fflush(stdout);
printf("\nncurses display end\n");
//fflush(stdout);

printf("\n- freeing c2buf"); fflush(stdout);
free_c2buf(buf);
printf("\nfreeing successful");
//fflush(stdout);

return 0;}
