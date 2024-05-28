# Graph Theory

## Types of Graphs

### Undirected Graphs
- Edges have no direction.
- **Example**: A friendship network where a connection means mutual friendship.

### Directed Graphs (Digraphs)
- Edges have a direction (one-way).
- **Example**: Twitter follow network, where one user follows another.

### Weighted Graphs
- Edges have weights or costs.
- **Example**: A road map where edges represent roads and weights represent distances.

### Unweighted Graphs
- Edges have no weights.
- **Example**: A simple network where connections are just links without any specific value.

## Graph Terminology

### Vertices (Nodes)
- Points in the graph.
- **Example**: In a social network, each person is a vertex.

### Edges (Links)
- Connections between vertices.
- **Example**: In a social network, a friendship is an edge.

### Adjacency
- Two vertices are adjacent if they are connected by an edge.
- **Example**: If Alice and Bob are friends, they are adjacent.

### Degree
- Number of edges connected to a vertex.
- In directed graphs:
  - **In-degree**: Number of incoming edges.
  - **Out-degree**: Number of outgoing edges.
- **Example**: A person with 10 friends has a degree of 10.

## Special Graphs

### Complete Graph
- Every pair of vertices is connected by an edge.
- **Example**: A small group where everyone knows everyone else.

### Bipartite Graph
- Vertices can be divided into two sets with edges only between sets.
- **Example**: Job matching where one set is people and the other set is jobs.

### Tree
- A connected graph with no cycles.
- **Example**: Organizational hierarchy or family tree.

### Cycle
- A path that starts and ends at the same vertex with no repeated edges or vertices (except the starting/ending vertex).
- **Example**: A closed loop route.

## Graph Representations

### Adjacency Matrix
- A 2D array to represent edges.
- Rows and columns represent vertices; matrix[i][j] is 1 (or weight) if there is an edge from vertex i to vertex j, 0 otherwise.

### Adjacency List
- Lists of adjacent vertices for each vertex.
- More space-efficient for sparse graphs (few edges).

## Graph Traversal Algorithms

### Breadth-First Search (BFS)
- Explores vertices level by level.
- Uses a queue.
- **Example**: Finding the shortest path in an unweighted graph.

### Depth-First Search (DFS)
- Explores as far as possible along each branch before backtracking.
- Uses a stack (or recursion).
- **Example**: Detecting cycles in a graph.

## Shortest Path Algorithms

### Dijkstra’s Algorithm
- For shortest paths in weighted graphs without negative weights.
- Uses a priority queue to find the shortest path from a source to all other vertices.

### Bellman-Ford Algorithm
- For graphs with negative weights.
- Can handle negative weight edges and detects negative weight cycles.

### Floyd-Warshall Algorithm
- Computes shortest paths between all pairs of vertices.
- Uses dynamic programming, suitable for dense graphs.

## Minimum Spanning Tree (MST)

### Kruskal’s Algorithm
- Adds edges in order of increasing weight, avoiding cycles.
- Uses a disjoint-set (union-find) to manage sets of vertices.

### Prim’s Algorithm
- Builds the MST by expanding the tree one vertex at a time.
- Uses a priority queue to select the next edge with the smallest weight.

## Graph Coloring

- Assigning colors to vertices so that no two adjacent vertices share the same color.
- **Example**: Scheduling problems where adjacent tasks cannot be done at the same time.

## Network Flow

### Max-Flow Min-Cut Theorem
- Describes the maximum flow in a network and the minimum capacity that, when removed, separates the source from the sink.

### Ford-Fulkerson Algorithm
- Finds the maximum flow in a flow network.
- Uses augmenting paths to increase flow until no more can be found.

## Applications of Graphs

### Social Networks
- Modeling connections between individuals.

### Computer Networks
- Routing and connectivity.

### Biology
- Analyzing molecular structures and interactions.

### Transport Networks
- Planning routes and optimizing traffic.

These concepts form the foundation for understanding graphs, which are used in various fields to model relationships and solve complex problems.
