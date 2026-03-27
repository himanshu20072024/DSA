# using DFS
 for detecting using dfs we will be passing the starting node with his parent and adjacency list to dfs function then 
 the dfs will go for adjacent nodes one by one and if it is not visited then will call the dfs for that and if it is visited and not parent then it is cycle and will return true
 
# using bfs
 here we will use queue with node and its parent here we will pass the first node with its parent then we will take the first element and will go for each adjacent node then if it is not visited then we will put in queue with new parent and if it is visited and it is not the parent then we will say it has cycle !!!!!! # Why 
  
 why ans -> because we started traversing in 2 different direction and we are reaching at a node where both nodes are meeting means it is a cycle 
