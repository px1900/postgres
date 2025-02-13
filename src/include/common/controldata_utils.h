/*
 * controldata_utils.h
 *		Common code for pg_controldata output
 *
 *	Portions Copyright (c) 1996-2021, PostgreSQL Global Development Group
 *	Portions Copyright (c) 1994, Regents of the University of California
 *
 *	src/include/common/controldata_utils.h
 */
#ifndef COMMON_CONTROLDATA_UTILS_H
#define COMMON_CONTROLDATA_UTILS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "catalog/pg_control.h"

extern ControlFileData *get_controlfile(const char *DataDir, bool *crc_ok_p);
extern void update_controlfile(const char *DataDir,
							   ControlFileData *ControlFile, bool do_sync);

#ifdef __cplusplus
}
#endif

#endif							/* COMMON_CONTROLDATA_UTILS_H */
