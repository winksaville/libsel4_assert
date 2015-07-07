/*
 * copyright 2015, Wink Saville
 *
 * this software may be distributed and modified according to the terms of
 * the bsd 2-clause license. note that no warranty is provided.
 * see "license_bsd2.txt" for details.
 */

#include <sel4/stop.h>
#include <sel4/printf.h>

/**
 * Invoked by macro seL4_Assert in sel4/assert.h
 */
void __assert_fail(const char* assertion, const char* file, int line, const char* function) {
    seL4_Printf("Assert/Failure: '%s' at %s:%u in function %s\n",
       assertion, file, line, function);
    seL4_Stop();
}
