#include <stdio.h>
void write_binary(char *name, unsigned char *buf, int len)
{
    FILE *fp = fopen(name, "wb");
    fwrite(buf, len, 1, fp);
    fclose(fp);
}

