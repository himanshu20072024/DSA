Topological Sorting -> linear ordering of vertices such that if there is an edge between u and v then u appears before v in the ordering 

# using DFS
- intution -> for a DAG if for a particular node if DFS is complete then in the stack every node will be there whom particular node was pointing in a linear ordering

# using BFS (also known as Khans algo)
- inDegree -> number of incoming edges to that node;

at the starting we have to place all nodes whose inDegree is 0 to a  queue then iterate over the queue and pop out those elements and reduce all its adjacent nodes inDegree by 1 and if it becomes 0 place it in q;

at the end we will get out topo sort 

basically it looks like removing the links starting from the nodes which has no incoming links or for better understanding draw a directed graph and remove the links 