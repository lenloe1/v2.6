#include "fs.h"
#include "lwip/def.h"
#include "fsdata.h"


#define file_NULL (struct fsdata_file *) NULL


static const unsigned int dummy_align__index_html = 0;
static const unsigned char data__index_html[] = {
/* /index.html (12 chars) */
0x2f,0x69,0x6e,0x64,0x65,0x78,0x2e,0x68,0x74,0x6d,0x6c,0x00,

/* HTTP header */
/* "HTTP/1.0 200 OK
" (17 bytes) */
0x48,0x54,0x54,0x50,0x2f,0x31,0x2e,0x30,0x20,0x32,0x30,0x30,0x20,0x4f,0x4b,0x0d,
0x0a,
/* "Server: lwIP/1.3.1 (http://savannah.nongnu.org/projects/lwip)
" (63 bytes) */
0x53,0x65,0x72,0x76,0x65,0x72,0x3a,0x20,0x6c,0x77,0x49,0x50,0x2f,0x31,0x2e,0x33,
0x2e,0x31,0x20,0x28,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x73,0x61,0x76,0x61,0x6e,
0x6e,0x61,0x68,0x2e,0x6e,0x6f,0x6e,0x67,0x6e,0x75,0x2e,0x6f,0x72,0x67,0x2f,0x70,
0x72,0x6f,0x6a,0x65,0x63,0x74,0x73,0x2f,0x6c,0x77,0x69,0x70,0x29,0x0d,0x0a,
/* "Content-type: text/html

" (27 bytes) */
0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x74,0x79,0x70,0x65,0x3a,0x20,0x74,0x65,
0x78,0x74,0x2f,0x68,0x74,0x6d,0x6c,0x0d,0x0a,0x0d,0x0a,
/* raw file data (569 bytes) */
0x3c,0x21,0x44,0x4f,0x43,0x54,0x59,0x50,0x45,0x20,0x68,0x74,0x6d,0x6c,0x3e,0x3c,
0x68,0x74,0x6d,0x6c,0x20,0x6c,0x61,0x6e,0x67,0x3d,0x22,0x65,0x6e,0x22,0x3e,0x3c,
0x68,0x65,0x61,0x64,0x3e,0x3c,0x74,0x69,0x74,0x6c,0x65,0x3e,0x57,0x65,0x62,0x73,
0x65,0x72,0x76,0x65,0x72,0x20,0x45,0x78,0x61,0x6d,0x70,0x6c,0x65,0x3c,0x2f,0x74,
0x69,0x74,0x6c,0x65,0x3e,0x3c,0x6c,0x69,0x6e,0x6b,0x20,0x68,0x72,0x65,0x66,0x3d,
0x22,0x73,0x74,0x79,0x6c,0x65,0x73,0x2e,0x63,0x73,0x73,0x22,0x20,0x72,0x65,0x6c,
0x3d,0x22,0x73,0x74,0x79,0x6c,0x65,0x73,0x68,0x65,0x65,0x74,0x22,0x3e,0x3c,0x2f,
0x68,0x65,0x61,0x64,0x3e,0x3c,0x62,0x6f,0x64,0x79,0x3e,0x3c,0x68,0x65,0x61,0x64,
0x65,0x72,0x3e,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6c,
0x6f,0x67,0x6f,0x22,0x3e,0x3c,0x69,0x6d,0x67,0x20,0x73,0x72,0x63,0x3d,0x22,0x73,
0x69,0x6c,0x61,0x62,0x73,0x5f,0x6c,0x6f,0x67,0x6f,0x2e,0x73,0x76,0x67,0x22,0x3e,
0x3c,0x2f,0x64,0x69,0x76,0x3e,0x3c,0x68,0x31,0x3e,0x57,0x65,0x6c,0x63,0x6f,0x6d,
0x65,0x20,0x74,0x6f,0x20,0x79,0x6f,0x75,0x72,0x20,0x53,0x69,0x6c,0x69,0x63,0x6f,
0x6e,0x20,0x4c,0x61,0x62,0x73,0x20,0x64,0x65,0x76,0x65,0x6c,0x6f,0x70,0x6d,0x65,
0x6e,0x74,0x20,0x6b,0x69,0x74,0x21,0x3c,0x2f,0x68,0x31,0x3e,0x3c,0x2f,0x68,0x65,
0x61,0x64,0x65,0x72,0x3e,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,
0x22,0x69,0x6e,0x74,0x72,0x6f,0x22,0x3e,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,
0x73,0x73,0x3d,0x22,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x65,0x72,0x20,0x74,0x65,
0x78,0x74,0x2d,0x63,0x65,0x6e,0x74,0x65,0x72,0x22,0x3e,0x3c,0x70,0x20,0x63,0x6c,
0x61,0x73,0x73,0x3d,0x22,0x6c,0x65,0x61,0x64,0x22,0x3e,0x54,0x68,0x69,0x73,0x20,
0x77,0x65,0x62,0x70,0x61,0x67,0x65,0x20,0x69,0x73,0x20,0x73,0x65,0x72,0x76,0x65,
0x64,0x20,0x62,0x79,0x20,0x61,0x20,0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x77,0x65,
0x62,0x20,0x73,0x65,0x72,0x76,0x65,0x72,0x20,0x72,0x75,0x6e,0x6e,0x69,0x6e,0x67,
0x20,0x6f,0x6e,0x20,0x79,0x6f,0x75,0x20,0x64,0x65,0x76,0x65,0x6c,0x6f,0x70,0x6d,
0x65,0x6e,0x74,0x20,0x6b,0x69,0x74,0x20,0x75,0x73,0x69,0x6e,0x67,0x20,0x74,0x68,
0x65,0x20,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,
0x2f,0x2f,0x6c,0x77,0x69,0x70,0x2e,0x77,0x69,0x6b,0x69,0x61,0x2e,0x63,0x6f,0x6d,
0x2f,0x77,0x69,0x6b,0x69,0x2f,0x4c,0x77,0x49,0x50,0x5f,0x57,0x69,0x6b,0x69,0x22,
0x3e,0x6c,0x77,0x49,0x50,0x3c,0x2f,0x61,0x3e,0x20,0x54,0x43,0x50,0x2f,0x49,0x50,
0x20,0x73,0x74,0x61,0x63,0x6b,0x2e,0x3c,0x2f,0x70,0x3e,0x3c,0x61,0x20,0x68,0x72,
0x65,0x66,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x73,
0x69,0x6c,0x61,0x62,0x73,0x2e,0x63,0x6f,0x6d,0x22,0x20,0x63,0x6c,0x61,0x73,0x73,
0x3d,0x22,0x62,0x74,0x6e,0x20,0x62,0x74,0x6e,0x2d,0x77,0x68,0x69,0x74,0x65,0x22,
0x3e,0x4c,0x65,0x61,0x72,0x6e,0x20,0x4d,0x6f,0x72,0x65,0x3c,0x2f,0x61,0x3e,0x3c,
0x2f,0x64,0x69,0x76,0x3e,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x3c,0x2f,0x62,0x6f,0x64,
0x79,0x3e,0x3c,0x2f,0x68,0x74,0x6d,0x6c,0x3e,};

static const unsigned int dummy_align__silabs_logo_svg = 1;
static const unsigned char data__silabs_logo_svg[] = {
/* /silabs_logo.svg (17 chars) */
0x2f,0x73,0x69,0x6c,0x61,0x62,0x73,0x5f,0x6c,0x6f,0x67,0x6f,0x2e,0x73,0x76,0x67,
0x00,0x00,0x00,0x00,

/* HTTP header */
/* "HTTP/1.0 200 OK
" (17 bytes) */
0x48,0x54,0x54,0x50,0x2f,0x31,0x2e,0x30,0x20,0x32,0x30,0x30,0x20,0x4f,0x4b,0x0d,
0x0a,
/* "Server: lwIP/1.3.1 (http://savannah.nongnu.org/projects/lwip)
" (63 bytes) */
0x53,0x65,0x72,0x76,0x65,0x72,0x3a,0x20,0x6c,0x77,0x49,0x50,0x2f,0x31,0x2e,0x33,
0x2e,0x31,0x20,0x28,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x73,0x61,0x76,0x61,0x6e,
0x6e,0x61,0x68,0x2e,0x6e,0x6f,0x6e,0x67,0x6e,0x75,0x2e,0x6f,0x72,0x67,0x2f,0x70,
0x72,0x6f,0x6a,0x65,0x63,0x74,0x73,0x2f,0x6c,0x77,0x69,0x70,0x29,0x0d,0x0a,
/* "Content-type: image/svg+xml

" (31 bytes) */
0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x74,0x79,0x70,0x65,0x3a,0x20,0x69,0x6d,
0x61,0x67,0x65,0x2f,0x73,0x76,0x67,0x2b,0x78,0x6d,0x6c,0x0d,0x0a,0x0d,0x0a,
/* raw file data (3106 bytes) */
0x3c,0x3f,0x78,0x6d,0x6c,0x20,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x3d,0x22,0x31,
0x2e,0x30,0x22,0x20,0x65,0x6e,0x63,0x6f,0x64,0x69,0x6e,0x67,0x3d,0x22,0x75,0x74,
0x66,0x2d,0x38,0x22,0x3f,0x3e,0x0d,0x0a,0x3c,0x21,0x2d,0x2d,0x20,0x47,0x65,0x6e,
0x65,0x72,0x61,0x74,0x6f,0x72,0x3a,0x20,0x41,0x64,0x6f,0x62,0x65,0x20,0x49,0x6c,
0x6c,0x75,0x73,0x74,0x72,0x61,0x74,0x6f,0x72,0x20,0x31,0x38,0x2e,0x31,0x2e,0x31,
0x2c,0x20,0x53,0x56,0x47,0x20,0x45,0x78,0x70,0x6f,0x72,0x74,0x20,0x50,0x6c,0x75,
0x67,0x2d,0x49,0x6e,0x20,0x2e,0x20,0x53,0x56,0x47,0x20,0x56,0x65,0x72,0x73,0x69,
0x6f,0x6e,0x3a,0x20,0x36,0x2e,0x30,0x30,0x20,0x42,0x75,0x69,0x6c,0x64,0x20,0x30,
0x29,0x20,0x20,0x2d,0x2d,0x3e,0x0d,0x0a,0x3c,0x73,0x76,0x67,0x20,0x76,0x65,0x72,
0x73,0x69,0x6f,0x6e,0x3d,0x22,0x31,0x2e,0x31,0x22,0x20,0x69,0x64,0x3d,0x22,0x4c,
0x61,0x79,0x65,0x72,0x5f,0x31,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,
0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,
0x2f,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,
0x3a,0x78,0x6c,0x69,0x6e,0x6b,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,
0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f,0x31,0x39,0x39,0x39,0x2f,0x78,
0x6c,0x69,0x6e,0x6b,0x22,0x20,0x78,0x3d,0x22,0x30,0x70,0x78,0x22,0x20,0x79,0x3d,
0x22,0x30,0x70,0x78,0x22,0x0d,0x0a,0x09,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78,
0x3d,0x22,0x30,0x20,0x30,0x20,0x31,0x32,0x38,0x20,0x36,0x34,0x22,0x20,0x65,0x6e,
0x61,0x62,0x6c,0x65,0x2d,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3d,
0x22,0x6e,0x65,0x77,0x20,0x30,0x20,0x30,0x20,0x31,0x32,0x38,0x20,0x36,0x34,0x22,
0x20,0x78,0x6d,0x6c,0x3a,0x73,0x70,0x61,0x63,0x65,0x3d,0x22,0x70,0x72,0x65,0x73,
0x65,0x72,0x76,0x65,0x22,0x3e,0x0d,0x0a,0x3c,0x67,0x3e,0x0d,0x0a,0x09,0x3c,0x70,
0x61,0x74,0x68,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x23,0x44,0x39,0x31,0x45,0x32,
0x41,0x22,0x20,0x64,0x3d,0x22,0x4d,0x36,0x35,0x2e,0x38,0x2c,0x32,0x34,0x2e,0x39,
0x63,0x31,0x30,0x2c,0x30,0x2e,0x34,0x2c,0x31,0x30,0x2e,0x35,0x2c,0x31,0x2c,0x31,
0x33,0x2e,0x31,0x2c,0x32,0x2e,0x31,0x63,0x2d,0x38,0x2e,0x38,0x2c,0x31,0x2e,0x37,
0x2d,0x32,0x34,0x2e,0x34,0x2c,0x33,0x2e,0x35,0x2d,0x33,0x39,0x2e,0x39,0x2c,0x32,
0x63,0x2d,0x32,0x2e,0x36,0x2d,0x30,0x2e,0x33,0x2d,0x39,0x2e,0x33,0x2d,0x31,0x2e,
0x36,0x2d,0x31,0x32,0x2e,0x34,0x2d,0x33,0x2e,0x33,0x0d,0x0a,0x09,0x09,0x63,0x2d,
0x31,0x2e,0x33,0x2d,0x30,0x2e,0x37,0x2d,0x34,0x2e,0x33,0x2d,0x32,0x2e,0x34,0x2d,
0x34,0x2e,0x31,0x2d,0x35,0x2e,0x36,0x63,0x30,0x2e,0x32,0x2d,0x33,0x2e,0x31,0x2c,
0x34,0x2e,0x36,0x2d,0x36,0x2e,0x34,0x2c,0x36,0x2e,0x33,0x2d,0x37,0x2e,0x34,0x43,
0x34,0x31,0x2c,0x35,0x2e,0x36,0x2c,0x35,0x33,0x2e,0x39,0x2c,0x33,0x2e,0x32,0x2c,
0x36,0x37,0x2e,0x36,0x2c,0x31,0x43,0x35,0x37,0x2e,0x32,0x2c,0x32,0x2e,0x33,0x2c,
0x35,0x30,0x2c,0x33,0x2e,0x38,0x2c,0x34,0x33,0x2e,0x35,0x2c,0x35,0x2e,0x34,0x43,
0x32,0x37,0x2e,0x31,0x2c,0x39,0x2e,0x36,0x2c,0x31,0x30,0x2e,0x31,0x2c,0x31,0x37,
0x2e,0x31,0x2c,0x33,0x2e,0x39,0x2c,0x32,0x34,0x2e,0x39,0x0d,0x0a,0x09,0x09,0x63,
0x2d,0x32,0x2e,0x36,0x2c,0x33,0x2e,0x33,0x2d,0x33,0x2e,0x39,0x2c,0x37,0x2d,0x32,
0x2e,0x31,0x2c,0x31,0x30,0x2e,0x35,0x63,0x33,0x2e,0x32,0x2c,0x36,0x2e,0x31,0x2c,
0x31,0x32,0x2e,0x36,0x2c,0x39,0x2e,0x31,0x2c,0x32,0x33,0x2c,0x31,0x30,0x2e,0x36,
0x63,0x2d,0x33,0x2e,0x35,0x2d,0x31,0x2e,0x31,0x2d,0x37,0x2e,0x38,0x2d,0x32,0x2e,
0x32,0x2d,0x39,0x2e,0x37,0x2d,0x34,0x2e,0x38,0x63,0x2d,0x30,0x2e,0x36,0x2d,0x30,
0x2e,0x39,0x2d,0x30,0x2e,0x39,0x2d,0x32,0x2e,0x38,0x2c,0x31,0x2e,0x32,0x2d,0x34,
0x2e,0x36,0x63,0x35,0x2e,0x32,0x2d,0x34,0x2e,0x32,0x2c,0x39,0x2e,0x33,0x2d,0x35,
0x2e,0x37,0x2c,0x39,0x2e,0x33,0x2d,0x35,0x2e,0x37,0x0d,0x0a,0x09,0x09,0x4c,0x33,
0x36,0x2c,0x33,0x33,0x2e,0x33,0x6c,0x2d,0x31,0x2e,0x39,0x2c,0x31,0x2e,0x34,0x63,
0x2d,0x30,0x2e,0x39,0x2c,0x30,0x2e,0x36,0x2d,0x31,0x2e,0x33,0x2c,0x31,0x2e,0x35,
0x2d,0x30,0x2e,0x39,0x2c,0x32,0x2e,0x35,0x63,0x31,0x2e,0x31,0x2c,0x31,0x2e,0x35,
0x2c,0x32,0x2e,0x35,0x2c,0x32,0x2e,0x31,0x2c,0x33,0x2e,0x37,0x2c,0x32,0x2e,0x37,
0x63,0x31,0x32,0x2e,0x33,0x2c,0x35,0x2c,0x33,0x35,0x2e,0x33,0x2c,0x30,0x2e,0x36,
0x2c,0x34,0x32,0x2e,0x38,0x2d,0x34,0x2e,0x39,0x63,0x32,0x2e,0x31,0x2d,0x31,0x2e,
0x35,0x2c,0x34,0x2e,0x32,0x2d,0x32,0x2e,0x39,0x2c,0x34,0x2e,0x34,0x2d,0x35,0x2e,
0x36,0x0d,0x0a,0x09,0x09,0x63,0x30,0x2e,0x31,0x2d,0x31,0x2e,0x35,0x2d,0x31,0x2e,
0x32,0x2d,0x32,0x2e,0x37,0x2d,0x31,0x2e,0x39,0x2d,0x33,0x2e,0x33,0x63,0x2d,0x34,
0x2e,0x33,0x2d,0x33,0x2e,0x31,0x2d,0x31,0x31,0x2e,0x36,0x2d,0x33,0x2e,0x34,0x2d,
0x31,0x36,0x2e,0x35,0x2d,0x33,0x2e,0x35,0x63,0x2d,0x39,0x2d,0x30,0x2e,0x32,0x2d,
0x31,0x31,0x2e,0x32,0x2d,0x31,0x2e,0x32,0x2d,0x31,0x33,0x2e,0x37,0x2d,0x32,0x2e,
0x37,0x63,0x31,0x36,0x2e,0x35,0x2d,0x33,0x2c,0x33,0x31,0x2e,0x38,0x2d,0x33,0x2e,
0x37,0x2c,0x34,0x36,0x2e,0x36,0x2d,0x30,0x2e,0x37,0x63,0x33,0x2e,0x35,0x2c,0x30,
0x2e,0x39,0x2c,0x37,0x2e,0x39,0x2c,0x32,0x2e,0x34,0x2c,0x39,0x2e,0x34,0x2c,0x35,
0x2e,0x33,0x0d,0x0a,0x09,0x09,0x63,0x31,0x2e,0x31,0x2c,0x32,0x2e,0x32,0x2c,0x30,
0x2e,0x31,0x2c,0x34,0x2e,0x37,0x2d,0x32,0x2c,0x36,0x2e,0x38,0x63,0x2d,0x34,0x2e,
0x37,0x2c,0x34,0x2e,0x35,0x2d,0x31,0x32,0x2e,0x38,0x2c,0x37,0x2e,0x34,0x2d,0x31,
0x38,0x2e,0x31,0x2c,0x39,0x2e,0x33,0x63,0x31,0x30,0x2e,0x39,0x2d,0x33,0x2e,0x35,
0x2c,0x31,0x37,0x2e,0x36,0x2d,0x35,0x2e,0x34,0x2c,0x32,0x37,0x2e,0x38,0x2d,0x31,
0x31,0x2e,0x35,0x63,0x35,0x2e,0x33,0x2d,0x33,0x2e,0x32,0x2c,0x31,0x32,0x2e,0x36,
0x2d,0x39,0x2e,0x34,0x2c,0x31,0x31,0x2e,0x32,0x2d,0x31,0x35,0x2e,0x38,0x0d,0x0a,
0x09,0x09,0x63,0x2d,0x31,0x2e,0x38,0x2d,0x37,0x2e,0x38,0x2d,0x31,0x36,0x2d,0x31,
0x30,0x2e,0x38,0x2d,0x31,0x36,0x2d,0x31,0x30,0x2e,0x38,0x73,0x33,0x2e,0x32,0x2c,
0x31,0x2e,0x31,0x2c,0x34,0x2e,0x37,0x2c,0x33,0x63,0x31,0x2e,0x34,0x2c,0x31,0x2e,
0x37,0x2c,0x31,0x2e,0x34,0x2c,0x33,0x2e,0x31,0x2c,0x31,0x2e,0x32,0x2c,0x33,0x2e,
0x37,0x63,0x2d,0x31,0x2e,0x33,0x2c,0x34,0x2e,0x37,0x2d,0x37,0x2e,0x34,0x2c,0x35,
0x2e,0x33,0x2d,0x31,0x31,0x2e,0x35,0x2c,0x36,0x2e,0x38,0x6c,0x2d,0x31,0x31,0x2e,
0x34,0x2d,0x31,0x2e,0x37,0x63,0x30,0x2c,0x30,0x2c,0x32,0x2d,0x31,0x2e,0x31,0x2c,
0x33,0x2d,0x31,0x2e,0x37,0x0d,0x0a,0x09,0x09,0x63,0x31,0x2e,0x31,0x2d,0x30,0x2e,
0x38,0x2c,0x31,0x2e,0x38,0x2d,0x31,0x2e,0x39,0x2c,0x31,0x2e,0x33,0x2d,0x33,0x2e,
0x32,0x63,0x2d,0x31,0x2d,0x31,0x2e,0x39,0x2d,0x32,0x2e,0x36,0x2d,0x32,0x2e,0x38,
0x2d,0x34,0x2e,0x38,0x2d,0x33,0x2e,0x35,0x63,0x2d,0x31,0x32,0x2e,0x34,0x2d,0x33,
0x2e,0x37,0x2d,0x32,0x38,0x2e,0x34,0x2d,0x31,0x2e,0x36,0x2d,0x33,0x39,0x2e,0x35,
0x2c,0x34,0x2e,0x38,0x63,0x2d,0x32,0x2e,0x37,0x2c,0x31,0x2e,0x36,0x2d,0x36,0x2e,
0x32,0x2c,0x33,0x2e,0x39,0x2d,0x36,0x2e,0x35,0x2c,0x37,0x2e,0x32,0x63,0x2d,0x30,
0x2e,0x31,0x2c,0x31,0x2e,0x35,0x2c,0x31,0x2e,0x31,0x2c,0x33,0x2e,0x33,0x2c,0x32,
0x2e,0x39,0x2c,0x34,0x2e,0x33,0x0d,0x0a,0x09,0x09,0x43,0x35,0x35,0x2e,0x39,0x2c,
0x32,0x35,0x2e,0x31,0x2c,0x36,0x30,0x2e,0x35,0x2c,0x32,0x34,0x2e,0x38,0x2c,0x36,
0x35,0x2e,0x38,0x2c,0x32,0x34,0x2e,0x39,0x7a,0x22,0x2f,0x3e,0x0d,0x0a,0x09,0x3c,
0x63,0x69,0x72,0x63,0x6c,0x65,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x6e,0x6f,0x6e,
0x65,0x22,0x20,0x73,0x74,0x72,0x6f,0x6b,0x65,0x3d,0x22,0x23,0x30,0x30,0x30,0x30,
0x30,0x30,0x22,0x20,0x73,0x74,0x72,0x6f,0x6b,0x65,0x2d,0x77,0x69,0x64,0x74,0x68,
0x3d,0x22,0x30,0x2e,0x36,0x22,0x20,0x63,0x78,0x3d,0x22,0x31,0x32,0x34,0x2e,0x35,
0x22,0x20,0x63,0x79,0x3d,0x22,0x33,0x2e,0x36,0x22,0x20,0x72,0x3d,0x22,0x32,0x2e,
0x35,0x22,0x2f,0x3e,0x0d,0x0a,0x09,0x3c,0x70,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,
0x4d,0x31,0x32,0x33,0x2e,0x34,0x2c,0x35,0x2e,0x31,0x56,0x32,0x2e,0x32,0x68,0x31,
0x2e,0x33,0x63,0x30,0x2e,0x33,0x2c,0x30,0x2c,0x30,0x2e,0x34,0x2c,0x30,0x2c,0x30,
0x2e,0x36,0x2c,0x30,0x2e,0x31,0x63,0x30,0x2e,0x31,0x2c,0x30,0x2e,0x31,0x2c,0x30,
0x2e,0x32,0x2c,0x30,0x2e,0x31,0x2c,0x30,0x2e,0x33,0x2c,0x30,0x2e,0x33,0x63,0x30,
0x2e,0x31,0x2c,0x30,0x2e,0x31,0x2c,0x30,0x2e,0x31,0x2c,0x30,0x2e,0x33,0x2c,0x30,
0x2e,0x31,0x2c,0x30,0x2e,0x34,0x63,0x30,0x2c,0x30,0x2e,0x32,0x2d,0x30,0x2e,0x31,
0x2c,0x30,0x2e,0x34,0x2d,0x30,0x2e,0x32,0x2c,0x30,0x2e,0x35,0x0d,0x0a,0x09,0x09,
0x63,0x2d,0x30,0x2e,0x31,0x2c,0x30,0x2e,0x31,0x2d,0x30,0x2e,0x33,0x2c,0x30,0x2e,
0x32,0x2d,0x30,0x2e,0x36,0x2c,0x30,0x2e,0x33,0x63,0x30,0x2e,0x31,0x2c,0x30,0x2c,
0x30,0x2e,0x32,0x2c,0x30,0x2e,0x31,0x2c,0x30,0x2e,0x32,0x2c,0x30,0x2e,0x31,0x63,
0x30,0x2e,0x31,0x2c,0x30,0x2e,0x31,0x2c,0x30,0x2e,0x32,0x2c,0x30,0x2e,0x32,0x2c,
0x30,0x2e,0x33,0x2c,0x30,0x2e,0x34,0x6c,0x30,0x2e,0x35,0x2c,0x30,0x2e,0x38,0x68,
0x2d,0x30,0x2e,0x35,0x4c,0x31,0x32,0x35,0x2c,0x34,0x2e,0x35,0x63,0x2d,0x30,0x2e,
0x31,0x2d,0x30,0x2e,0x32,0x2d,0x30,0x2e,0x32,0x2d,0x30,0x2e,0x33,0x2d,0x30,0x2e,
0x33,0x2d,0x30,0x2e,0x34,0x0d,0x0a,0x09,0x09,0x63,0x2d,0x30,0x2e,0x31,0x2d,0x30,
0x2e,0x31,0x2d,0x30,0x2e,0x31,0x2d,0x30,0x2e,0x32,0x2d,0x30,0x2e,0x32,0x2d,0x30,
0x2e,0x32,0x63,0x2d,0x30,0x2e,0x31,0x2c,0x30,0x2d,0x30,0x2e,0x31,0x2d,0x30,0x2e,
0x31,0x2d,0x30,0x2e,0x32,0x2d,0x30,0x2e,0x31,0x63,0x30,0x2c,0x30,0x2d,0x30,0x2e,
0x31,0x2c,0x30,0x2d,0x30,0x2e,0x32,0x2c,0x30,0x68,0x2d,0x30,0x2e,0x34,0x76,0x31,
0x2e,0x33,0x48,0x31,0x32,0x33,0x2e,0x34,0x7a,0x20,0x4d,0x31,0x32,0x33,0x2e,0x37,
0x2c,0x33,0x2e,0x35,0x68,0x30,0x2e,0x38,0x63,0x30,0x2e,0x32,0x2c,0x30,0x2c,0x30,
0x2e,0x33,0x2c,0x30,0x2c,0x30,0x2e,0x34,0x2d,0x30,0x2e,0x31,0x0d,0x0a,0x09,0x09,
0x63,0x30,0x2e,0x31,0x2c,0x30,0x2c,0x30,0x2e,0x32,0x2d,0x30,0x2e,0x31,0x2c,0x30,
0x2e,0x32,0x2d,0x30,0x2e,0x32,0x63,0x30,0x2e,0x31,0x2d,0x30,0x2e,0x31,0x2c,0x30,
0x2e,0x31,0x2d,0x30,0x2e,0x32,0x2c,0x30,0x2e,0x31,0x2d,0x30,0x2e,0x33,0x63,0x30,
0x2d,0x30,0x2e,0x31,0x2c,0x30,0x2d,0x30,0x2e,0x33,0x2d,0x30,0x2e,0x31,0x2d,0x30,
0x2e,0x33,0x63,0x2d,0x30,0x2e,0x31,0x2d,0x30,0x2e,0x31,0x2d,0x30,0x2e,0x33,0x2d,
0x30,0x2e,0x31,0x2d,0x30,0x2e,0x35,0x2d,0x30,0x2e,0x31,0x68,0x2d,0x30,0x2e,0x39,
0x56,0x33,0x2e,0x35,0x7a,0x22,0x2f,0x3e,0x0d,0x0a,0x09,0x3c,0x72,0x65,0x63,0x74,
0x20,0x78,0x3d,0x22,0x31,0x34,0x22,0x20,0x79,0x3d,0x22,0x34,0x39,0x22,0x20,0x77,
0x69,0x64,0x74,0x68,0x3d,0x22,0x32,0x22,0x20,0x68,0x65,0x69,0x67,0x68,0x74,0x3d,
0x22,0x31,0x34,0x22,0x2f,0x3e,0x0d,0x0a,0x09,0x3c,0x70,0x6f,0x6c,0x79,0x67,0x6f,
0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x73,0x3d,0x22,0x32,0x38,0x2c,0x36,0x33,0x20,
0x32,0x38,0x2c,0x36,0x31,0x20,0x32,0x33,0x2c,0x36,0x31,0x20,0x32,0x33,0x2c,0x34,
0x39,0x20,0x32,0x31,0x2c,0x34,0x39,0x20,0x32,0x31,0x2c,0x36,0x33,0x20,0x09,0x22,
0x2f,0x3e,0x0d,0x0a,0x09,0x3c,0x72,0x65,0x63,0x74,0x20,0x78,0x3d,0x22,0x33,0x31,
0x22,0x20,0x79,0x3d,0x22,0x34,0x39,0x22,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,
0x32,0x22,0x20,0x68,0x65,0x69,0x67,0x68,0x74,0x3d,0x22,0x31,0x34,0x22,0x2f,0x3e,
0x0d,0x0a,0x09,0x3c,0x70,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x34,0x34,0x2c,
0x35,0x39,0x76,0x32,0x68,0x2d,0x34,0x56,0x35,0x31,0x68,0x34,0x6c,0x30,0x2c,0x31,
0x2e,0x36,0x68,0x32,0x56,0x35,0x31,0x63,0x30,0x2d,0x31,0x2d,0x31,0x2d,0x32,0x2d,
0x32,0x2d,0x32,0x68,0x2d,0x34,0x63,0x2d,0x31,0x2c,0x30,0x2d,0x32,0x2c,0x31,0x2d,
0x32,0x2c,0x32,0x56,0x36,0x31,0x63,0x30,0x2c,0x31,0x2c,0x31,0x2c,0x32,0x2c,0x32,
0x2c,0x32,0x68,0x34,0x63,0x31,0x2c,0x30,0x2c,0x32,0x2d,0x31,0x2c,0x32,0x2d,0x32,
0x76,0x2d,0x32,0x48,0x34,0x34,0x7a,0x22,0x2f,0x3e,0x0d,0x0a,0x09,0x3c,0x70,0x6f,
0x6c,0x79,0x67,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x73,0x3d,0x22,0x36,0x34,
0x2c,0x35,0x34,0x20,0x36,0x38,0x2c,0x36,0x33,0x20,0x37,0x30,0x2c,0x36,0x33,0x20,
0x37,0x30,0x2c,0x34,0x39,0x20,0x36,0x38,0x2c,0x34,0x39,0x20,0x36,0x38,0x2c,0x35,
0x38,0x20,0x36,0x34,0x2c,0x34,0x39,0x20,0x36,0x32,0x2c,0x34,0x39,0x20,0x36,0x32,
0x2c,0x36,0x33,0x20,0x36,0x34,0x2c,0x36,0x33,0x20,0x09,0x22,0x2f,0x3e,0x0d,0x0a,
0x09,0x3c,0x70,0x6f,0x6c,0x79,0x67,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x73,
0x3d,0x22,0x39,0x32,0x2c,0x36,0x33,0x20,0x39,0x32,0x2c,0x36,0x31,0x20,0x38,0x37,
0x2c,0x36,0x31,0x20,0x38,0x37,0x2c,0x34,0x39,0x20,0x38,0x35,0x2c,0x34,0x39,0x20,
0x38,0x35,0x2c,0x36,0x33,0x20,0x09,0x22,0x2f,0x3e,0x0d,0x0a,0x09,0x3c,0x70,0x61,
0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x35,0x36,0x2c,0x36,0x33,0x63,0x31,0x2c,0x30,
0x2c,0x32,0x2d,0x31,0x2c,0x32,0x2d,0x32,0x56,0x35,0x31,0x63,0x30,0x2d,0x31,0x2d,
0x31,0x2d,0x32,0x2d,0x32,0x2d,0x32,0x68,0x2d,0x34,0x63,0x2d,0x31,0x2c,0x30,0x2d,
0x32,0x2c,0x31,0x2d,0x32,0x2c,0x32,0x56,0x36,0x31,0x63,0x30,0x2c,0x31,0x2c,0x31,
0x2c,0x32,0x2c,0x32,0x2c,0x32,0x48,0x35,0x36,0x7a,0x20,0x4d,0x35,0x36,0x2c,0x36,
0x31,0x68,0x2d,0x34,0x56,0x35,0x31,0x68,0x34,0x56,0x36,0x31,0x7a,0x22,0x2f,0x3e,
0x0d,0x0a,0x09,0x3c,0x70,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x39,0x38,0x2e,
0x35,0x2c,0x34,0x39,0x6c,0x2d,0x34,0x2c,0x31,0x34,0x6c,0x32,0x2c,0x30,0x6c,0x30,
0x2e,0x39,0x2d,0x33,0x68,0x34,0x2e,0x32,0x6c,0x30,0x2e,0x38,0x2c,0x33,0x68,0x32,
0x2e,0x31,0x6c,0x2d,0x34,0x2d,0x31,0x34,0x48,0x39,0x38,0x2e,0x35,0x7a,0x20,0x4d,
0x39,0x39,0x2e,0x35,0x2c,0x35,0x32,0x2e,0x33,0x4c,0x31,0x30,0x31,0x2c,0x35,0x38,
0x6c,0x2d,0x33,0x2e,0x31,0x2c,0x30,0x4c,0x39,0x39,0x2e,0x35,0x2c,0x35,0x32,0x2e,
0x33,0x7a,0x22,0x2f,0x3e,0x0d,0x0a,0x09,0x3c,0x70,0x61,0x74,0x68,0x20,0x64,0x3d,
0x22,0x4d,0x31,0x30,0x38,0x2c,0x36,0x33,0x68,0x36,0x63,0x31,0x2c,0x30,0x2c,0x32,
0x2d,0x31,0x2c,0x32,0x2d,0x32,0x76,0x2d,0x33,0x2e,0x35,0x6c,0x2d,0x31,0x2e,0x35,
0x2d,0x31,0x2e,0x35,0x6c,0x31,0x2e,0x35,0x2d,0x31,0x2e,0x35,0x56,0x35,0x31,0x63,
0x30,0x2d,0x31,0x2d,0x31,0x2d,0x32,0x2d,0x32,0x2d,0x32,0x68,0x2d,0x36,0x56,0x36,
0x33,0x7a,0x20,0x4d,0x31,0x31,0x30,0x2c,0x35,0x31,0x68,0x34,0x76,0x34,0x68,0x2d,
0x34,0x56,0x35,0x31,0x7a,0x20,0x4d,0x31,0x31,0x30,0x2c,0x35,0x37,0x68,0x34,0x76,
0x34,0x68,0x2d,0x34,0x56,0x35,0x37,0x7a,0x22,0x2f,0x3e,0x0d,0x0a,0x09,0x3c,0x70,
0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x33,0x2c,0x35,0x32,0x2e,0x31,0x63,0x30,
0x2c,0x31,0x2e,0x31,0x2c,0x30,0x2c,0x31,0x2e,0x32,0x2c,0x30,0x2e,0x38,0x2c,0x31,
0x2e,0x36,0x6c,0x33,0x2e,0x39,0x2c,0x31,0x2e,0x39,0x63,0x31,0x2c,0x30,0x2e,0x35,
0x2c,0x31,0x2e,0x33,0x2c,0x31,0x2e,0x31,0x2c,0x31,0x2e,0x34,0x2c,0x31,0x2e,0x39,
0x56,0x36,0x31,0x63,0x30,0x2c,0x31,0x2d,0x31,0x2c,0x32,0x2d,0x32,0x2c,0x32,0x48,
0x33,0x63,0x2d,0x31,0x2c,0x30,0x2d,0x32,0x2d,0x31,0x2d,0x32,0x2d,0x32,0x76,0x2d,
0x32,0x68,0x32,0x76,0x32,0x68,0x34,0x76,0x2d,0x31,0x2e,0x39,0x0d,0x0a,0x09,0x09,
0x63,0x30,0x2d,0x31,0x2e,0x33,0x2c,0x30,0x2d,0x31,0x2e,0x33,0x2d,0x30,0x2e,0x38,
0x2d,0x31,0x2e,0x38,0x6c,0x2d,0x33,0x2e,0x31,0x2d,0x31,0x2e,0x36,0x63,0x2d,0x31,
0x2e,0x33,0x2d,0x30,0x2e,0x36,0x2d,0x32,0x2d,0x31,0x2e,0x33,0x2d,0x32,0x2e,0x31,
0x2d,0x32,0x2e,0x33,0x56,0x35,0x31,0x63,0x30,0x2d,0x31,0x2c,0x31,0x2d,0x32,0x2c,
0x32,0x2d,0x32,0x6c,0x34,0x2c,0x30,0x63,0x31,0x2e,0x34,0x2c,0x30,0x2c,0x32,0x2c,
0x30,0x2e,0x38,0x2c,0x32,0x2c,0x32,0x6c,0x30,0x2c,0x31,0x2e,0x36,0x48,0x37,0x4c,
0x37,0x2c,0x35,0x31,0x48,0x33,0x4c,0x33,0x2c,0x35,0x32,0x2e,0x31,0x7a,0x22,0x2f,
0x3e,0x0d,0x0a,0x09,0x3c,0x70,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x31,0x32,
0x31,0x2c,0x35,0x32,0x2e,0x31,0x63,0x30,0x2c,0x31,0x2e,0x31,0x2c,0x30,0x2c,0x31,
0x2e,0x32,0x2c,0x30,0x2e,0x38,0x2c,0x31,0x2e,0x36,0x6c,0x33,0x2e,0x39,0x2c,0x31,
0x2e,0x39,0x63,0x31,0x2c,0x30,0x2e,0x35,0x2c,0x31,0x2e,0x33,0x2c,0x31,0x2e,0x32,
0x2c,0x31,0x2e,0x34,0x2c,0x32,0x56,0x36,0x31,0x63,0x30,0x2c,0x31,0x2d,0x31,0x2c,
0x32,0x2d,0x32,0x2c,0x32,0x68,0x2d,0x34,0x63,0x2d,0x31,0x2c,0x30,0x2d,0x32,0x2d,
0x31,0x2d,0x32,0x2d,0x32,0x76,0x2d,0x32,0x68,0x32,0x76,0x32,0x68,0x34,0x76,0x2d,
0x31,0x2e,0x39,0x0d,0x0a,0x09,0x09,0x63,0x30,0x2d,0x31,0x2e,0x33,0x2c,0x30,0x2d,
0x31,0x2e,0x33,0x2d,0x30,0x2e,0x38,0x2d,0x31,0x2e,0x38,0x6c,0x2d,0x33,0x2e,0x31,
0x2d,0x31,0x2e,0x36,0x63,0x2d,0x31,0x2e,0x33,0x2d,0x30,0x2e,0x36,0x2d,0x32,0x2d,
0x31,0x2e,0x33,0x2d,0x32,0x2e,0x31,0x2d,0x32,0x2e,0x33,0x56,0x35,0x31,0x63,0x30,
0x2d,0x31,0x2c,0x31,0x2d,0x32,0x2c,0x32,0x2d,0x32,0x68,0x34,0x63,0x31,0x2e,0x34,
0x2c,0x30,0x2c,0x32,0x2c,0x30,0x2e,0x38,0x2c,0x32,0x2c,0x32,0x76,0x31,0x2e,0x36,
0x68,0x2d,0x32,0x56,0x35,0x31,0x68,0x2d,0x34,0x56,0x35,0x32,0x2e,0x31,0x7a,0x22,
0x2f,0x3e,0x0d,0x0a,0x3c,0x2f,0x67,0x3e,0x0d,0x0a,0x3c,0x2f,0x73,0x76,0x67,0x3e,
0x0d,0x0a,};

static const unsigned int dummy_align__styles_css = 2;
static const unsigned char data__styles_css[] = {
/* /styles.css (12 chars) */
0x2f,0x73,0x74,0x79,0x6c,0x65,0x73,0x2e,0x63,0x73,0x73,0x00,

/* HTTP header */
/* "HTTP/1.0 200 OK
" (17 bytes) */
0x48,0x54,0x54,0x50,0x2f,0x31,0x2e,0x30,0x20,0x32,0x30,0x30,0x20,0x4f,0x4b,0x0d,
0x0a,
/* "Server: lwIP/1.3.1 (http://savannah.nongnu.org/projects/lwip)
" (63 bytes) */
0x53,0x65,0x72,0x76,0x65,0x72,0x3a,0x20,0x6c,0x77,0x49,0x50,0x2f,0x31,0x2e,0x33,
0x2e,0x31,0x20,0x28,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x73,0x61,0x76,0x61,0x6e,
0x6e,0x61,0x68,0x2e,0x6e,0x6f,0x6e,0x67,0x6e,0x75,0x2e,0x6f,0x72,0x67,0x2f,0x70,
0x72,0x6f,0x6a,0x65,0x63,0x74,0x73,0x2f,0x6c,0x77,0x69,0x70,0x29,0x0d,0x0a,
/* "Content-type: text/css

" (26 bytes) */
0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x74,0x79,0x70,0x65,0x3a,0x20,0x74,0x65,
0x78,0x74,0x2f,0x63,0x73,0x73,0x0d,0x0a,0x0d,0x0a,
/* raw file data (1594 bytes) */
0x68,0x74,0x6d,0x6c,0x7b,0x66,0x6f,0x6e,0x74,0x2d,0x66,0x61,0x6d,0x69,0x6c,0x79,
0x3a,0x73,0x61,0x6e,0x73,0x2d,0x73,0x65,0x72,0x69,0x66,0x3b,0x2d,0x6d,0x73,0x2d,
0x74,0x65,0x78,0x74,0x2d,0x73,0x69,0x7a,0x65,0x2d,0x61,0x64,0x6a,0x75,0x73,0x74,
0x3a,0x31,0x30,0x30,0x25,0x3b,0x2d,0x77,0x65,0x62,0x6b,0x69,0x74,0x2d,0x74,0x65,
0x78,0x74,0x2d,0x73,0x69,0x7a,0x65,0x2d,0x61,0x64,0x6a,0x75,0x73,0x74,0x3a,0x31,
0x30,0x30,0x25,0x7d,0x62,0x6f,0x64,0x79,0x7b,0x6d,0x61,0x72,0x67,0x69,0x6e,0x3a,
0x30,0x7d,0x68,0x65,0x61,0x64,0x65,0x72,0x7b,0x64,0x69,0x73,0x70,0x6c,0x61,0x79,
0x3a,0x62,0x6c,0x6f,0x63,0x6b,0x7d,0x61,0x7b,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,
0x75,0x6e,0x64,0x2d,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x74,0x72,0x61,0x6e,0x73,0x70,
0x61,0x72,0x65,0x6e,0x74,0x7d,0x61,0x3a,0x61,0x63,0x74,0x69,0x76,0x65,0x2c,0x61,
0x3a,0x68,0x6f,0x76,0x65,0x72,0x7b,0x6f,0x75,0x74,0x6c,0x69,0x6e,0x65,0x3a,0x30,
0x7d,0x68,0x31,0x7b,0x6d,0x61,0x72,0x67,0x69,0x6e,0x3a,0x2e,0x36,0x37,0x65,0x6d,
0x20,0x30,0x7d,0x69,0x6d,0x67,0x7b,0x62,0x6f,0x72,0x64,0x65,0x72,0x3a,0x30,0x7d,
0x62,0x75,0x74,0x74,0x6f,0x6e,0x3a,0x3a,0x2d,0x6d,0x6f,0x7a,0x2d,0x66,0x6f,0x63,
0x75,0x73,0x2d,0x69,0x6e,0x6e,0x65,0x72,0x2c,0x69,0x6e,0x70,0x75,0x74,0x3a,0x3a,
0x2d,0x6d,0x6f,0x7a,0x2d,0x66,0x6f,0x63,0x75,0x73,0x2d,0x69,0x6e,0x6e,0x65,0x72,
0x7b,0x62,0x6f,0x72,0x64,0x65,0x72,0x3a,0x30,0x3b,0x70,0x61,0x64,0x64,0x69,0x6e,
0x67,0x3a,0x30,0x7d,0x68,0x31,0x7b,0x66,0x6f,0x6e,0x74,0x2d,0x66,0x61,0x6d,0x69,
0x6c,0x79,0x3a,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x3b,0x66,0x6f,0x6e,0x74,0x2d,
0x77,0x65,0x69,0x67,0x68,0x74,0x3a,0x35,0x30,0x30,0x3b,0x6c,0x69,0x6e,0x65,0x2d,
0x68,0x65,0x69,0x67,0x68,0x74,0x3a,0x31,0x2e,0x31,0x3b,0x63,0x6f,0x6c,0x6f,0x72,
0x3a,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x3b,0x6d,0x61,0x72,0x67,0x69,0x6e,0x2d,
0x74,0x6f,0x70,0x3a,0x32,0x30,0x70,0x78,0x3b,0x6d,0x61,0x72,0x67,0x69,0x6e,0x2d,
0x62,0x6f,0x74,0x74,0x6f,0x6d,0x3a,0x31,0x30,0x70,0x78,0x3b,0x66,0x6f,0x6e,0x74,
0x2d,0x73,0x69,0x7a,0x65,0x3a,0x33,0x36,0x70,0x78,0x7d,0x70,0x7b,0x6d,0x61,0x72,
0x67,0x69,0x6e,0x3a,0x30,0x20,0x30,0x20,0x31,0x30,0x70,0x78,0x7d,0x2e,0x6c,0x65,
0x61,0x64,0x7b,0x6d,0x61,0x72,0x67,0x69,0x6e,0x2d,0x62,0x6f,0x74,0x74,0x6f,0x6d,
0x3a,0x32,0x30,0x70,0x78,0x3b,0x66,0x6f,0x6e,0x74,0x2d,0x73,0x69,0x7a,0x65,0x3a,
0x31,0x36,0x70,0x78,0x3b,0x66,0x6f,0x6e,0x74,0x2d,0x77,0x65,0x69,0x67,0x68,0x74,
0x3a,0x33,0x30,0x30,0x3b,0x6c,0x69,0x6e,0x65,0x2d,0x68,0x65,0x69,0x67,0x68,0x74,
0x3a,0x31,0x2e,0x34,0x7d,0x40,0x6d,0x65,0x64,0x69,0x61,0x20,0x28,0x6d,0x69,0x6e,
0x2d,0x77,0x69,0x64,0x74,0x68,0x3a,0x37,0x36,0x38,0x70,0x78,0x29,0x7b,0x2e,0x6c,
0x65,0x61,0x64,0x7b,0x66,0x6f,0x6e,0x74,0x2d,0x73,0x69,0x7a,0x65,0x3a,0x32,0x31,
0x70,0x78,0x7d,0x7d,0x2e,0x74,0x65,0x78,0x74,0x2d,0x63,0x65,0x6e,0x74,0x65,0x72,
0x2c,0x68,0x65,0x61,0x64,0x65,0x72,0x2c,0x2e,0x62,0x74,0x6e,0x7b,0x74,0x65,0x78,
0x74,0x2d,0x61,0x6c,0x69,0x67,0x6e,0x3a,0x63,0x65,0x6e,0x74,0x65,0x72,0x7d,0x2e,
0x62,0x74,0x6e,0x7b,0x64,0x69,0x73,0x70,0x6c,0x61,0x79,0x3a,0x69,0x6e,0x6c,0x69,
0x6e,0x65,0x2d,0x62,0x6c,0x6f,0x63,0x6b,0x3b,0x6d,0x61,0x72,0x67,0x69,0x6e,0x2d,
0x62,0x6f,0x74,0x74,0x6f,0x6d,0x3a,0x30,0x3b,0x66,0x6f,0x6e,0x74,0x2d,0x77,0x65,
0x69,0x67,0x68,0x74,0x3a,0x34,0x30,0x30,0x3b,0x76,0x65,0x72,0x74,0x69,0x63,0x61,
0x6c,0x2d,0x61,0x6c,0x69,0x67,0x6e,0x3a,0x6d,0x69,0x64,0x64,0x6c,0x65,0x3b,0x74,
0x6f,0x75,0x63,0x68,0x2d,0x61,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x6d,0x61,0x6e,0x69,
0x70,0x75,0x6c,0x61,0x74,0x69,0x6f,0x6e,0x3b,0x63,0x75,0x72,0x73,0x6f,0x72,0x3a,
0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x3b,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,
0x6e,0x64,0x2d,0x69,0x6d,0x61,0x67,0x65,0x3a,0x6e,0x6f,0x6e,0x65,0x3b,0x62,0x6f,
0x72,0x64,0x65,0x72,0x3a,0x31,0x70,0x78,0x20,0x73,0x6f,0x6c,0x69,0x64,0x20,0x74,
0x72,0x61,0x6e,0x73,0x70,0x61,0x72,0x65,0x6e,0x74,0x3b,0x77,0x68,0x69,0x74,0x65,
0x2d,0x73,0x70,0x61,0x63,0x65,0x3a,0x6e,0x6f,0x77,0x72,0x61,0x70,0x3b,0x70,0x61,
0x64,0x64,0x69,0x6e,0x67,0x3a,0x36,0x70,0x78,0x20,0x31,0x32,0x70,0x78,0x3b,0x66,
0x6f,0x6e,0x74,0x2d,0x73,0x69,0x7a,0x65,0x3a,0x31,0x34,0x70,0x78,0x3b,0x6c,0x69,
0x6e,0x65,0x2d,0x68,0x65,0x69,0x67,0x68,0x74,0x3a,0x31,0x2e,0x34,0x32,0x38,0x35,
0x37,0x3b,0x62,0x6f,0x72,0x64,0x65,0x72,0x2d,0x72,0x61,0x64,0x69,0x75,0x73,0x3a,
0x34,0x70,0x78,0x3b,0x2d,0x77,0x65,0x62,0x6b,0x69,0x74,0x2d,0x75,0x73,0x65,0x72,
0x2d,0x73,0x65,0x6c,0x65,0x63,0x74,0x3a,0x6e,0x6f,0x6e,0x65,0x3b,0x2d,0x6d,0x6f,
0x7a,0x2d,0x75,0x73,0x65,0x72,0x2d,0x73,0x65,0x6c,0x65,0x63,0x74,0x3a,0x6e,0x6f,
0x6e,0x65,0x3b,0x2d,0x6d,0x73,0x2d,0x75,0x73,0x65,0x72,0x2d,0x73,0x65,0x6c,0x65,
0x63,0x74,0x3a,0x6e,0x6f,0x6e,0x65,0x3b,0x75,0x73,0x65,0x72,0x2d,0x73,0x65,0x6c,
0x65,0x63,0x74,0x3a,0x6e,0x6f,0x6e,0x65,0x7d,0x2e,0x62,0x74,0x6e,0x3a,0x66,0x6f,
0x63,0x75,0x73,0x2c,0x2e,0x62,0x74,0x6e,0x3a,0x61,0x63,0x74,0x69,0x76,0x65,0x3a,
0x66,0x6f,0x63,0x75,0x73,0x7b,0x6f,0x75,0x74,0x6c,0x69,0x6e,0x65,0x3a,0x74,0x68,
0x69,0x6e,0x20,0x64,0x6f,0x74,0x74,0x65,0x64,0x3b,0x6f,0x75,0x74,0x6c,0x69,0x6e,
0x65,0x3a,0x35,0x70,0x78,0x20,0x61,0x75,0x74,0x6f,0x20,0x2d,0x77,0x65,0x62,0x6b,
0x69,0x74,0x2d,0x66,0x6f,0x63,0x75,0x73,0x2d,0x72,0x69,0x6e,0x67,0x2d,0x63,0x6f,
0x6c,0x6f,0x72,0x3b,0x6f,0x75,0x74,0x6c,0x69,0x6e,0x65,0x2d,0x6f,0x66,0x66,0x73,
0x65,0x74,0x3a,0x2d,0x32,0x70,0x78,0x7d,0x2e,0x62,0x74,0x6e,0x3a,0x68,0x6f,0x76,
0x65,0x72,0x2c,0x2e,0x62,0x74,0x6e,0x3a,0x66,0x6f,0x63,0x75,0x73,0x7b,0x63,0x6f,
0x6c,0x6f,0x72,0x3a,0x23,0x33,0x33,0x33,0x3b,0x74,0x65,0x78,0x74,0x2d,0x64,0x65,
0x63,0x6f,0x72,0x61,0x74,0x69,0x6f,0x6e,0x3a,0x6e,0x6f,0x6e,0x65,0x7d,0x2e,0x62,
0x74,0x6e,0x3a,0x61,0x63,0x74,0x69,0x76,0x65,0x7b,0x6f,0x75,0x74,0x6c,0x69,0x6e,
0x65,0x3a,0x30,0x3b,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x2d,0x69,
0x6d,0x61,0x67,0x65,0x3a,0x6e,0x6f,0x6e,0x65,0x3b,0x2d,0x77,0x65,0x62,0x6b,0x69,
0x74,0x2d,0x62,0x6f,0x78,0x2d,0x73,0x68,0x61,0x64,0x6f,0x77,0x3a,0x69,0x6e,0x73,
0x65,0x74,0x20,0x30,0x20,0x33,0x70,0x78,0x20,0x35,0x70,0x78,0x20,0x72,0x67,0x62,
0x61,0x28,0x30,0x2c,0x30,0x2c,0x30,0x2c,0x2e,0x31,0x32,0x35,0x29,0x3b,0x62,0x6f,
0x78,0x2d,0x73,0x68,0x61,0x64,0x6f,0x77,0x3a,0x69,0x6e,0x73,0x65,0x74,0x20,0x30,
0x20,0x33,0x70,0x78,0x20,0x35,0x70,0x78,0x20,0x72,0x67,0x62,0x61,0x28,0x30,0x2c,
0x30,0x2c,0x30,0x2c,0x2e,0x31,0x32,0x35,0x29,0x7d,0x68,0x65,0x61,0x64,0x65,0x72,
0x7b,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3a,0x36,0x30,0x70,0x78,0x20,0x30,0x7d,
0x2e,0x6c,0x6f,0x67,0x6f,0x20,0x69,0x6d,0x67,0x7b,0x77,0x69,0x64,0x74,0x68,0x3a,
0x32,0x30,0x30,0x70,0x78,0x7d,0x2e,0x69,0x6e,0x74,0x72,0x6f,0x7b,0x70,0x61,0x64,
0x64,0x69,0x6e,0x67,0x3a,0x36,0x30,0x70,0x78,0x20,0x30,0x3b,0x62,0x61,0x63,0x6b,
0x67,0x72,0x6f,0x75,0x6e,0x64,0x2d,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x64,0x39,
0x31,0x65,0x32,0x61,0x3b,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x66,0x66,0x66,0x7d,
0x2e,0x69,0x6e,0x74,0x72,0x6f,0x20,0x61,0x3a,0x6e,0x6f,0x74,0x28,0x2e,0x62,0x74,
0x6e,0x29,0x7b,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x72,0x67,0x62,0x61,0x28,0x32,0x35,
0x35,0x2c,0x32,0x35,0x35,0x2c,0x32,0x35,0x35,0x2c,0x2e,0x37,0x29,0x7d,0x2e,0x62,
0x74,0x6e,0x2d,0x77,0x68,0x69,0x74,0x65,0x7b,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,
0x61,0x63,0x31,0x38,0x32,0x31,0x3b,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,
0x64,0x2d,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x66,0x66,0x66,0x3b,0x62,0x6f,0x72,
0x64,0x65,0x72,0x2d,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x61,0x63,0x31,0x38,0x32,
0x31,0x7d,0x2e,0x62,0x74,0x6e,0x2d,0x77,0x68,0x69,0x74,0x65,0x3a,0x68,0x6f,0x76,
0x65,0x72,0x2c,0x2e,0x62,0x74,0x6e,0x2d,0x77,0x68,0x69,0x74,0x65,0x3a,0x66,0x6f,
0x63,0x75,0x73,0x2c,0x2e,0x62,0x74,0x6e,0x2d,0x77,0x68,0x69,0x74,0x65,0x3a,0x61,
0x63,0x74,0x69,0x76,0x65,0x7b,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x61,0x63,0x31,
0x38,0x32,0x31,0x3b,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x2d,0x63,
0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x65,0x36,0x65,0x36,0x65,0x36,0x3b,0x62,0x6f,0x72,
0x64,0x65,0x72,0x2d,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x37,0x36,0x31,0x30,0x31,
0x37,0x7d,0x2e,0x62,0x74,0x6e,0x2d,0x77,0x68,0x69,0x74,0x65,0x3a,0x61,0x63,0x74,
0x69,0x76,0x65,0x7b,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x2d,0x69,
0x6d,0x61,0x67,0x65,0x3a,0x6e,0x6f,0x6e,0x65,0x7d,};



const struct fsdata_file file__index_html[] = { {
file_NULL,
data__index_html,
data__index_html + 12,
sizeof(data__index_html) - 12,
1,
}};

const struct fsdata_file file__silabs_logo_svg[] = { {
file__index_html,
data__silabs_logo_svg,
data__silabs_logo_svg + 20,
sizeof(data__silabs_logo_svg) - 20,
1,
}};

const struct fsdata_file file__styles_css[] = { {
file__silabs_logo_svg,
data__styles_css,
data__styles_css + 12,
sizeof(data__styles_css) - 12,
1,
}};

#define FS_ROOT file__styles_css
#define FS_NUMFILES 3
