void (*signal(int sig, void (*func)(int)))(int);

int raise(int sig);

