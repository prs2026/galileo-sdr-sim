/* Windows file-sink build: no curses screen; -v prints nothing extra. */
#pragma once
#define A_REVERSE 0
static inline int endwin(void) { return 0; }
static inline int clear(void) { return 0; }
static inline int refresh(void) { return 0; }
static inline int attron(int) { return 0; }
static inline int attroff(int) { return 0; }
template <typename... A> static inline int printw(const char *, A...) { return 0; }
