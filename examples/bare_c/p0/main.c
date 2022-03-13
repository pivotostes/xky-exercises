/* =======================================================================
 *  Copyright (C) GMVIS Skysoft S.A., 2011
 * ======================================================================= */
/**
 * @file
 * @author pfnf
 * @brief Hello! Is it me you're looking for?
 */

#include <xky.h>

char message[] = {
    0x48,0x65,0x6c,0x6c,0x6f,0x21,0x20,0x49,0x73,0x20,0x69,0x74,0x20,0x6d,0x65,
    0x20,0x79,0x6f,0x75,0x27,0x72,0x65,0x20,0x6c,0x6f,0x6f,0x6b,0x69,0x6e,0x67,
    0x20,0x66,0x6f,0x72,0x3f,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2e,0x37,0x37,0x6f,0x30,0x55,0x40,0x57,
    0x45,0x53,0x4e,0x57,0x40,0x6d,0x79,0x6f,0x5a,0x3b,0x2c,0x2e,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x3b,0x4e,0x40,0x57,0x40,0x40,
    0x40,0x57,0x40,0x57,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x57,0x40,0x57,0x40,
    0x57,0x40,0x57,0x40,0x40,0x57,0x2c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x40,0x57,0x40,0x57,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x40,0x40,0x40,0x40,
    0x57,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x57,0x40,0x40,0x40,0x57,0x40,0x4e,
    0x6f,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x41,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x40,0x40,
    0x57,0x40,0x40,0x40,0x57,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x57,0x40,0x57,
    0x40,0x57,0x40,0x57,0x40,0x40,0x40,0x40,0x6d,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x6d,0x40,0x57,0x40,
    0x57,0x40,0x57,0x40,0x57,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x57,0x40,0x57,
    0x40,0x57,0x40,0x57,0x40,0x57,0x40,0x57,0x40,0x57,0x40,0x40,0x40,0x57,0x40,
    0x40,0x40,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,
    0x20,0x3b,0x57,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x57,0x40,0x40,0x40,0x57,
    0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x40,0x40,0x40,0x40,0x57,0x40,0x57,0x40,
    0x57,0x40,0x40,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x3a,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x42,0x40,0x40,0x40,0x57,0x40,0x40,
    0x40,0x57,0x40,0x40,0x40,0x57,0x40,0x40,0x40,0x57,0x41,0x57,0x40,0x40,0x42,
    0x37,0x57,0x43,0x44,0x40,0x40,0x32,0x20,0x20,0x53,0x57,0x40,0x57,0x40,0x57,
    0x40,0x40,0x40,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,
    0x40,0x40,0x40,0x57,0x40,0x40,0x40,0x57,0x40,0x20,0x20,0x20,0x20,0x20,0x20,
    0x2e,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2c,0x20,0x20,
    0x20,0x20,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x47,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x0a,0x20,0x20,0x20,0x2c,0x57,0x40,0x57,0x40,0x40,0x40,0x40,0x40,
    0x57,0x3b,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x55,0x57,0x40,0x57,0x40,0x57,0x40,
    0x40,0x40,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x40,
    0x57,0x40,0x57,0x40,0x57,0x40,0x57,0x40,0x54,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x54,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x0a,0x20,0x20,0x20,0x2c,0x57,0x40,0x40,0x40,0x57,0x40,0x57,0x40,0x57,
    0x2c,0x20,0x32,0x47,0x70,0x3b,0x37,0x37,0x2c,0x20,0x20,0x20,0x20,0x20,0x20,
    0x2e,0x43,0x44,0x47,0x44,0x79,0x69,0x20,0x40,0x40,0x57,0x40,0x57,0x40,0x40,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x37,0x57,
    0x40,0x40,0x40,0x57,0x5a,0x4f,0x40,0x20,0x20,0x20,0x54,0x43,0x40,0x57,0x40,
    0x57,0x3a,0x2e,0x20,0x20,0x2e,0x2c,0x79,0x44,0x40,0x57,0x6f,0x4b,0x2e,0x20,
    0x69,0x37,0x63,0x57,0x40,0x40,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x0a,0x20,0x20,0x20,0x20,0x20,0x40,0x57,0x40,0x57,0x40,0x49,0x20,0x43,0x20,
    0x20,0x20,0x20,0x2c,0x37,0x37,0x20,0x2e,0x20,0x3a,0x20,0x20,0x37,0x2e,0x20,
    0x20,0x2e,0x2c,0x20,0x20,0x20,0x20,0x20,0x20,0x40,0x40,0x57,0x40,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x69,
    0x40,0x40,0x57,0x40,0x3b,0x20,0x2e,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x3b,0x2e,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x3a,
    0x4b,0x40,0x57,0x40,0x40,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x41,0x40,0x40,0x57,0x40,0x32,0x37,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2e,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x57,0x40,0x57,0x57,0x53,0x69,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x2e,0x57,
    0x40,0x57,0x40,0x57,0x40,0x47,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2c,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x3a,0x20,0x20,0x20,0x20,0x20,0x2e,0x40,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x79,0x57,0x40,0x40,0x40,0x57,0x40,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x37,0x40,0x40,0x40,0x40,0x57,0x40,0x4b,0x3a,0x20,
    0x20,0x20,0x20,0x20,0x47,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x41,0x40,0x57,0x40,0x57,0x40,0x20,0x20,0x20,0x20,0x32,0x40,0x57,0x40,0x40,
    0x47,0x4f,0x42,0x40,0x40,0x57,0x40,0x53,0x20,0x20,0x30,0x6f,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2e,0x20,0x3a,0x37,
    0x20,0x20,0x37,0x4e,0x3b,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x37,0x79,0x3a,
    0x44,0x69,0x2e,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x2e,0x63,0x2c,0x20,0x20,0x20,0x2e,0x20,0x20,
    0x20,0x20,0x2e,0x2e,0x20,0x20,0x2c,0x30,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x3b,0x37,0x20,0x20,0x20,0x20,0x2e,0x2e,0x20,0x20,0x20,0x20,0x3b,0x69,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x37,0x3b,0x2c,0x20,0x20,0x20,
    0x20,0x2e,0x3a,0x79,0x37,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x2e,0x2c,0x3a,0x3b,0x3a,0x3a,0x2c,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x00 };

/**
 * @brief Partition entry point
 */
void entry_point() {

    for (;;) {
        xky_syscall_printbuf(message, sizeof(message));
for (;;);
    }
	
}
