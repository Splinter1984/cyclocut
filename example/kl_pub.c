#include <stdlib.h>

#include "cdds/cdds_builtin.h"
#include "dds/dds.h"

int main(int argc, char *argv[]) {

    dds_entity_t p;
    dds_entity_t t;
    dds_entity_t w;
    NameValue sample;

    if (argc < 4) {
        printf("USAGE:\n\tkl_pub <topic-name> <name> <value>");
        exit(1);
    }

    p = dds_create_participant (DDS_DOMAIN_DEFAULT, NULL, NULL);
    t = dds_create_topic (p, &NameValue_desc, argv[1], NULL, NULL);
    w = dds_create_writer (p, t, NULL, NULL);

    sample.name = argv[2];
    sample.value = argv[3];
    int i = 0;
    printf ("=== [Writing]: \n");
    while (true) {
        sample.sn = i;
        printf ("[%d] -(%s, %s)\n", i, sample.name, sample.value);
        fflush (stdout);
        dds_write (w, &sample);
        dds_sleepfor (DDS_MSECS (500));

    }
  return 0;
}