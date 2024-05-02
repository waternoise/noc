#ifndef DB_MANAGER_H
#define DB_MANAGER_H

#include <sqlite3.h>

typedef struct {
    sqlite3 *db;
} DBManager;

// Function declarations
DBManager *db_open(const char *filename);
void db_close(DBManager *manager);
int db_reset(DBManager *manager);
// void db_initialize(DBManager *manager);


#endif
