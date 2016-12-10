// 深度优先搜索的头文件

/* dfs.h */

#ifndef DFS_H
#define DFS_H

/* Define a structure for vertices in a depth-first graph. */
typedef struct DfsVertex_
{
    void *data;
    VertexColor color;
} DfsVertex;

/* Public Interface */
int dfs(Graph *graph, List *ordered);

#endif // DFS_H
