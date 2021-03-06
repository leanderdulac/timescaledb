/*
 * Copyright (c) 2016-2018  Timescale, Inc. All Rights Reserved.
 *
 * This file is licensed under the Apache License,
 * see LICENSE-APACHE at the top level directory.
 */
#ifndef TIMESCALEDB_HYPERTABLE_CACHE_H
#define TIMESCALEDB_HYPERTABLE_CACHE_H

#include <postgres.h>
#include "cache.h"
#include "hypertable.h"

extern Hypertable *ts_hypertable_cache_get_entry(Cache *cache, Oid relid);
extern Hypertable *ts_hypertable_cache_get_entry_rv(Cache *cache, RangeVar *rv);
extern Hypertable *ts_hypertable_cache_get_entry_with_table(Cache *cache, Oid relid, const char *schema, const char *table);
extern Hypertable *ts_hypertable_cache_get_entry_by_id(Cache *cache, int32 hypertable_id);

extern void ts_hypertable_cache_invalidate_callback(void);

extern Cache *ts_hypertable_cache_pin(void);

extern void _hypertable_cache_init(void);
extern void _hypertable_cache_fini(void);

#endif							/* TIMESCALEDB_HYPERTABLE_CACHE_H */
