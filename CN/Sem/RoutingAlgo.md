<!--
  Author: omteja04
  Created on: 18-11-2024 10:34:28
  Description: RoutingAlgo
-->

### Routing Algorithms and the Optimality Principle

Routing algorithms are techniques used by routers to determine the most efficient path for data packets to travel from a source to a destination in a network. The **optimality principle** forms the foundation for these algorithms. It states that if a router is on the optimal path from one node to another, then the subpath from the router to the destination is also optimal.

Let’s delve into key routing algorithms and concepts:

---

### 1. **Shortest Path Routing**

This algorithm focuses on finding the path with the minimum cost (or distance) between nodes in a network. Costs can represent metrics like hops, bandwidth, delay, or link reliability.

- **Algorithm Example**: **Dijkstra’s Algorithm**

  - Operates by expanding the least-cost paths one hop at a time.
  - Maintains a priority queue of nodes based on their tentative distances.
  - Produces a shortest-path tree rooted at the source node.

- **Characteristics**:
  - Guarantees optimality for shortest paths.
  - Computationally expensive for large networks.

---

### 2. **Flooding**

In flooding, every incoming packet is sent out on all outgoing links except the one it arrived on. This ensures that the packet eventually reaches its destination.

- **Advantages**:

  - Simple and robust.
  - Ensures packet delivery even in dynamic or faulty networks.

- **Disadvantages**:

  - Generates excessive redundant traffic, leading to congestion.
  - Inefficient for large networks.

- **Variants**:
  - **Selective Flooding**: Restricts flooding to specific directions likely to lead to the destination.
  - **Hop Count Limiting**: Stops flooding after a certain number of hops.

---

### 3. **Distance Vector Routing**

Distance Vector Routing is based on the **Bellman-Ford Algorithm**, where each router maintains a table (vector) with the distances (costs) to all other nodes and periodically shares this information with its neighbors.

- **Mechanism**:

  - Each router updates its table by considering its neighbors' tables and the cost to reach them.
  - Converges when all routers agree on the shortest paths.

- **Key Protocol**: **Routing Information Protocol (RIP)**

- **Advantages**:

  - Simple to implement.
  - Works well for small networks.

- **Disadvantages**:

  - Slow convergence, especially in large networks.
  - **Count-to-Infinity Problem**: Incorrect distance metrics propagate indefinitely.

- **Solutions**:
  - Split horizon, route poisoning, and hold-down timers.

---

### 4. **Link State Routing**

In Link State Routing, each router knows the entire network topology and uses this information to calculate the shortest paths.

- **Mechanism**:

  1. Each router discovers its neighbors and measures the cost to reach them.
  2. The router generates a **Link State Advertisement (LSA)** and floods it to all nodes.
  3. All routers build a complete map (graph) of the network.
  4. Shortest paths are computed using Dijkstra’s Algorithm.

- **Key Protocol**: **Open Shortest Path First (OSPF)**

- **Advantages**:

  - Faster convergence compared to Distance Vector Routing.
  - Avoids loops and count-to-infinity problems.

- **Disadvantages**:
  - Computational overhead for building and maintaining the network topology.
  - High initial flooding overhead.

---

### 5. **Hierarchical Routing**

Hierarchical routing divides the network into regions or domains to reduce complexity and improve scalability.

- **Mechanism**:

  - Routers are grouped into hierarchical levels.
  - Intra-domain routing occurs within a domain, while inter-domain routing handles communication between domains.

- **Examples**:

  - Autonomous Systems (AS) in the Internet.
  - **Border Gateway Protocol (BGP)** for inter-AS routing.

- **Advantages**:

  - Reduces the size of routing tables.
  - Limits the scope of topology changes.

- **Disadvantages**:
  - Suboptimal routes might be used due to abstraction.
  - Complexity in managing hierarchies.

---

### Summary Table

| **Algorithm**       | **Key Features**                              | **Advantages**                     | **Disadvantages**                    |
| ------------------- | --------------------------------------------- | ---------------------------------- | ------------------------------------ |
| **Shortest Path**   | Finds minimum-cost path using metrics.        | Guarantees optimal path.           | High computational cost.             |
| **Flooding**        | Sends packets on all links.                   | Reliable delivery.                 | Excessive traffic.                   |
| **Distance Vector** | Periodic table sharing with neighbors.        | Simple, works for small networks.  | Slow convergence, count-to-infinity. |
| **Link State**      | Global topology knowledge with LSAs.          | Fast convergence, loop-free paths. | Computational and flooding overhead. |
| **Hierarchical**    | Divides network into domains for scalability. | Reduces complexity, scalable.      | Suboptimal paths, management issues. |

Each algorithm has its own use case depending on the network size, topology, and performance requirements.
