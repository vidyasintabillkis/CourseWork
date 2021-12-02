#include <ncurses/ncurses.h>
using namespace std; 

int main (){
	initscr();
	
	char nama[20], alamat[30], hobi[30];
	
	getstr (nama);
	getstr (alamat);
	getstr (hobi);
	
	mvprintw (5,1,"Nama\t : ");
	printw (nama);
	mvprintw(6,1,"Alamat\t : "); 
	printw (alamat);
	mvprintw (7,1,"Hobi\t : "); 
	printw (hobi);
	
	refresh ();
	getch ();
	endwin (); 
	
	
}
