#include <stdio.h>
#include <string.h>

// FILE *fopen ( const char *filename, const char *mode );
// int  fclose ( FILE *stream );

// int  fprintf( FILE *stream, const char *format, ... );
// int  fscanf ( FILE *stream, const char *format, ... );
// int  fgetc  ( FILE *stream );
// char *fgets ( char *s, int n, FILE *stream );
// int  fputc  ( int c, FILE *stream );
// int  fputs  ( const char *s, FILE *stream );
// int  getc   ( FILE *stream );
// int  putc   ( int c, FILE *stream );
// int  ungetc ( int c, FILE *stream );

// size_t fread  ( void *ptr, size_t size, size_t nmemb, FILE *stream );
// size_t fwrite ( const void *ptr, size_t size, size_t nmemb, FILE *stream );

/* modes:
r(b)  - open for reading
w(b)  - create for writing, discard previous contents
a(b)  - append, open or create for writing
r(b)+ - open for update
w(b)+ - create for update, overwrite file
a(b)+ - append, open or create for update */

int main()
{
    FILE *fp_txt;
    FILE *fp_bin;
    char *fn_txt = ".\\test.txt";
    char *fn_bin = ".\\test.bin";
    char x[10] =  "abcdefghij";
    char y[10];
    char z[10];

    // write
    fp_txt = fopen(fn_txt, "w");  // text
    fprintf(fp_txt, "abcdefghij");
    fclose(fp_txt);

    fp_bin = fopen(fn_bin, "wb"); // binary
    fwrite(x, sizeof(x[0]), sizeof(x)/sizeof(x[0]), fp_bin);
    fclose(fp_bin);

    // read
    fp_txt = fopen(fn_txt, "r");  // text
    fscanf(fp_txt, "%s", y);
    fclose(fp_txt);
    
    fp_bin = fopen(fn_bin, "rb"); // binary
    fread(z, sizeof(z[0]), sizeof(z)/sizeof(z[0]), fp_bin);
    fclose(fp_bin);
    
    if (strcmp(y, z) == 0)
        printf("Reading and writing works!\n");
    else
        printf("The text file is %s and has a length of %i chars\n", y, strlen(y));
        printf("The binary file is %s and has a length of %i chars\n", z, strlen(z));
}