# disjoint set
 - here we are just at the end going to ask 2 different nodes if they belong to same component of graph ya we can do it by doing dfs or bfs on one component and see if there exists another component while doing dfs or bfs if yes then they belong to same component else no they do not belong to same component but it will take O(N) time but we want to do it in O(const) so here comes this algorithm 
 

# why connect smaller to larger
- consider you attack larger group to smaller one then to find ultimate parent it will require more time    

# time and space complexity
 - both union by rank and union by size have same time complexity which is O(4*alpha)