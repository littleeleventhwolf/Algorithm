// 集合覆盖问题的头文件

/* cover.h */

#ifndef COVER_H
#define COVER_H

#include "set.h"

/* Define a structure for subsets idetified by a key. */
typedef struct KSet_
{
	void *key;
	Set set;
} KSet;

/* Public Interface */
int cover(Set *members, Set *subsets, Set *covering);

#endif // COVER_H