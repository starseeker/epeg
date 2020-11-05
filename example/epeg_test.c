#include <stdio.h>
#include <stdlib.h>
#include "epeg.h"

int
main(int argc, char **argv)
{

    if (argc != 3) {
	printf("Usage: %s input.jpg thumb.jpg\n", argv[0]);
	exit(0);
    }

    Epeg_Image *im = epeg_file_open(argv[1]);

    if (!im) {
	printf("Cannot open %s\n", argv[1]);
	exit(-1);
    }

    epeg_decode_size_set           (im, 1280, 960);
    epeg_quality_set               (im, 75);
    epeg_thumbnail_comments_enable (im, 1);
    epeg_file_output_set           (im, argv[2]);
    epeg_encode                    (im);
    epeg_close                     (im);

    return 0;
}

/*
 * Local Variables:
 * tab-width: 8
 * mode: C
 * indent-tabs-mode: t
 * c-file-style: "stroustrup"
 * End:
 * ex: shiftwidth=4 tabstop=8
 */
