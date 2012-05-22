/* -*- mode: C; c-basic-offset: 4; indent-tabs-mode: nil -*- */
// vim: expandtab:ts=8:sw=4:softtabstop=4:
#include <test.h>
#include <stdio.h>
#include <stdlib.h>
#include <toku_assert.h>
#include <fcntl.h>

int test_main(int argc, char *const argv[]) {
    int r;
    int fd;
    struct fileid fid;

    fd = open(DEV_NULL_FILE, O_RDWR);
    assert(fd != -1);

    r = toku_os_get_unique_file_id(fd, &fid);
    printf("%s:%d %d\n", __FILE__, __LINE__, r);

    r = close(fd);
    assert(r != -1);
    return 0;
}
