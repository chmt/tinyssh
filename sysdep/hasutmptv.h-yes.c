/* Public domain. */
#include <time.h>
#include <sys/time.h>
#include <utmp.h>

int main(void) {

    struct utmp ut = {0};
    return ut.ut_tv.tv_sec + ut.ut_tv.tv_usec;
}
