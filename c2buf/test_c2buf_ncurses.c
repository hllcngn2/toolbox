#include <ncurses.h>
#include "c2buf.h"

int	main(int ac, char **av){
int h=5, w=8;
char c='x';
initscr(); noecho(); cbreak();

c2buf *buf =alloc_c2buf(h,w);
c2_fill(buf, c);

printw("hello\n");
c2_disp(buf, 2,2);

free_c2buf(buf);

getch(); endwin();
return 0;}
