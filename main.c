#include <ncurses.h>
#include <string.h>

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

void print_menu(WINDOW *menu_win, int highlight, char *choices[], int n_choices) {
    int x, y, i;
    x = 2; 
    y = 2;

    box(menu_win, 0, 0); // border kotak
    for (i = 0; i < n_choices; ++i) {
        if (highlight == i + 1) { // highlight item aktif
            wattron(menu_win, A_REVERSE);
            mvwprintw(menu_win, y, x, "%s", choices[i]);
            wattroff(menu_win, A_REVERSE);
        } else {
            mvwprintw(menu_win, y, x, "%s", choices[i]);
        }
        y++;
    }
    wrefresh(menu_win);
}

int main() {
    WINDOW *menu_win;
    int highlight = 1;
    int choice = 0;
    int c;

    char *choices[] = {
        "Option 1 - Lihat data",
        "Option 2 - Input data",
        "Option 3 - Hapus data",
        "Keluar"
    };
    int n_choices = ARRAY_SIZE(choices);

    initscr();
    clear();
    noecho();
    cbreak(); // input langsung
    curs_set(0); // sembunyikan kursor

    int height = 10, width = 40;
    int starty = (LINES - height) / 2;
    int startx = (COLS - width) / 2;

    menu_win = newwin(height, width, starty, startx);
    keypad(menu_win, TRUE);

    mvprintw(0, 0, "Gunakan panah atas/bawah untuk navigasi, Enter untuk pilih, q untuk keluar");
    refresh();

    print_menu(menu_win, highlight, choices, n_choices);
    while (1) {
        c = wgetch(menu_win);
        switch (c) {
            case KEY_UP:
                if (highlight == 1)
                    highlight = n_choices;
                else
                    --highlight;
                break;
            case KEY_DOWN:
                if (highlight == n_choices)
                    highlight = 1;
                else
                    ++highlight;
                break;
            case 10: // Enter
                choice = highlight;
                break;
            case 'q': // keluar
                endwin();
                return 0;
        }
        print_menu(menu_win, highlight, choices, n_choices);

        if (choice != 0) { // jika ada pilihan di-enter
            mvprintw(LINES - 2, 0, "Kamu memilih: %s", choices[choice - 1]);
            clrtoeol();
            refresh();
            if (choice == n_choices) // kalau "Keluar"
                break;
            choice = 0; // reset pilihan
        }
    }

    endwin();
    return 0;
}
