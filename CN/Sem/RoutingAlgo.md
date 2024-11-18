<!--
  Author: omteja04
  Created on: 18-11-2024 10:34:28
  Description: RoutingAlgo
-->

Let's expand on the routing algorithms and concepts in detail, diving into their mechanisms, advantages, disadvantages, and practical applications.

---

### **1. Shortest Path Routing**

**Overview**:  
Shortest Path Routing ensures that data packets traverse the minimum-cost path between a source and a destination. The "cost" can be defined in terms of hop count, latency, bandwidth, or other metrics.

- **Key Algorithm: Dijkstra’s Algorithm**:
  - Maintains a set of nodes whose shortest distances from the source are known.
  - Iteratively finds the next closest node and updates the distances for its neighbors.
  - Results in a shortest-path tree with the source node as the root.

  **Steps**:
  1. Initialize the source node’s distance to 0 and all others to infinity.
  2. Choose the unvisited node with the smallest distance.
  3. Update the distances of its neighbors.
  4. Repeat until all nodes are visited.

  **Example**:  
  - Source node: **A**  
  - Graph:  
    ```
    A -1- B -2- C
    A -4- D -1- C
    ```
    Shortest path from A to C is A → B → C (cost = 3).

**Applications**:
- Routing in small networks with static topologies.
- Used in **OSPF** (Open Shortest Path First) protocol for intra-domain routing.

**Advantages**:
- Guarantees the shortest path.
- Efficient in static or slowly changing networks.

**Disadvantages**:
- High computational cost (`O(V^2)` or `O(V + E log V)` with priority queues).
- Requires complete knowledge of the network topology.

---

### **2. Flooding**

**Overview**:  
Flooding involves sending a packet through all possible outgoing links (except the incoming link). Every node receiving the packet forwards it until it reaches the destination.

**Mechanism**:
1. A node receives a packet and forwards it to all its neighbors.
2. To prevent infinite loops, mechanisms like hop count or sequence numbers are used.

**Variants**:
- **Selective Flooding**: Packets are forwarded only in directions that lead closer to the destination.
- **Hop Count Limiting**: Flooding is limited to a fixed number of hops.
- **Sequence Numbers**: Ensures each packet is processed only once.

**Applications**:
- Network discovery (e.g., ARP in Ethernet networks).
- Emergency broadcasts in dynamic networks.

**Advantages**:
- Reliable delivery as packets traverse all possible paths.
- Simple implementation.
- Suitable for highly dynamic networks like ad hoc or sensor networks.

**Disadvantages**:
- Excessive redundancy leads to bandwidth wastage.
- Risk of broadcast storms in dense networks.

---

### **3. Distance Vector Routing**

**Overview**:  
Each router maintains a **distance vector**: a table showing the cost to reach every other router. Routers exchange their distance vectors with neighbors periodically, updating their own based on received information.

**Key Algorithm: Bellman-Ford**:
- Each router uses the formula:  
  \[
  D(x, y) = \min \left[ C(x, v) + D(v, y) \right]
  \]  
  where \(D(x, y)\) is the cost from node \(x\) to \(y\), \(C(x, v)\) is the cost from \(x\) to neighbor \(v\), and \(D(v, y)\) is the cost from \(v\) to \(y\).

**Steps**:
1. Initialize the distance to self as 0 and others as infinity.
2. Update the table based on neighbors’ distances.
3. Repeat until no changes occur.

**Problems**:
- **Count-to-Infinity**: If a link fails, incorrect routes can propagate indefinitely.

  **Solution Techniques**:
  - **Split Horizon**: Do not advertise a route back to the node it came from.
  - **Route Poisoning**: Mark a route as unreachable with a cost of infinity.
  - **Hold-Down Timers**: Delay updates for unstable routes.

**Applications**:
- Used in **Routing Information Protocol (RIP)**.

**Advantages**:
- Simple to implement.
- Suitable for small to medium networks.

**Disadvantages**:
- Converges slowly in large networks.
- Count-to-infinity problems.

---

### **4. Link State Routing**

**Overview**:  
Each router maintains a global view of the network topology by exchanging **Link State Advertisements (LSAs)**. It uses this information to build a complete graph of the network and compute shortest paths.

**Mechanism**:
1. **Neighbor Discovery**: Each router identifies its neighbors and the cost to reach them.
2. **Flooding LSAs**: Routers broadcast LSAs containing the status of their links.
3. **Topology Database**: Routers compile LSAs to construct the network graph.
4. **Path Calculation**: Shortest paths are calculated using **Dijkstra’s Algorithm**.

**Applications**:
- Used in protocols like **OSPF** and **Intermediate System to Intermediate System (IS-IS)**.

**Advantages**:
- Faster convergence compared to distance vector routing.
- Avoids routing loops.
- Accurate and up-to-date information.

**Disadvantages**:
- Computationally expensive.
- High overhead due to LSA flooding.
- Requires more memory for topology storage.

---

### **5. Hierarchical Routing**

**Overview**:  
Hierarchical routing divides the network into regions or domains to improve scalability. Routers within a region manage detailed routes, while only aggregate information is shared across regions.

**Mechanism**:
- **Intra-domain Routing**: Routing within a domain using protocols like OSPF.
- **Inter-domain Routing**: Routing between domains using protocols like **Border Gateway Protocol (BGP)**.

**Examples**:
- Internet routing uses Autonomous Systems (AS).
- Hierarchical levels in enterprise networks.

**Applications**:
- Large-scale networks like the Internet.
- Corporate and academic networks.

**Advantages**:
- Reduces routing table size and computation.
- Limits the scope of topology changes to specific regions.

**Disadvantages**:
- Suboptimal paths may be chosen due to abstraction.
- More complex configuration and management.

---

### **Comparison of Routing Algorithms**

| **Feature**           | **Shortest Path**       | **Flooding**       | **Distance Vector**     | **Link State**          | **Hierarchical**       |
|------------------------|-------------------------|--------------------|-------------------------|-------------------------|------------------------|
| **Topology Knowledge** | Global                 | None               | Local                   | Global                 | Abstracted Hierarchical|
| **Convergence Speed**  | Moderate               | Immediate          | Slow                    | Fast                   | Moderate               |
| **Overhead**           | High                   | Very High          | Moderate                | High                   | Moderate               |
| **Scalability**        | Limited                | Poor               | Moderate                | Moderate               | Excellent              |
| **Complexity**         | High                   | Low                | Low                     | High                   | High                   |

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
