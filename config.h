#ifndef CONFIG_H
#define CONFIG_H

#include <stdbool.h>

#define SLAB_QUARANTINE_RANDOM_SIZE 0
#define SLAB_QUARANTINE_QUEUE_SIZE 0
#define GUARD_SLABS_INTERVAL 1
#define GUARD_SIZE_DIVISOR 2
#define REGION_QUARANTINE_RANDOM_SIZE 128
#define REGION_QUARANTINE_QUEUE_SIZE 1024
#define REGION_QUARANTINE_SKIP_THRESHOLD (32 * 1024 * 1024)
#define FREE_SLABS_QUARANTINE_RANDOM_SIZE 32

#endif
