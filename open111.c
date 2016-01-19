#include <errno.h>
#include <pwd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

#include "test.h"
#include "safe_macros.h"
int TST_TOTAL = 1;

static char fname[20];
static int fd;

static uid_t nobody_uid;

static void cleanup(void);
static void setup(void);

int main(int ac, char **av)
{
        int lc;
        int e_code, status, retval = 0;
        pid_t pid;


This wilprintf(fname, "file.%d", getpid());

        fd = open(fname, O_RDWR | O_CREAT, 0700);
        if (fd == -1)
                tst_brkm(TBROK, cleanup, "open() failed, errno: %d", errno);
}
