<!--
  Author: omteja04
  Created on: 02-11-2024 20:03:08
  Description: Mid-2

-->

- [Mid 2](#mid-2)
  - [Differentiate the Virtual Circuit and Datagram Networks.](#differentiate-the-virtual-circuit-and-datagram-networks)
  - [Discuss the different Congestion control policies.](#discuss-the-different-congestion-control-policies)
    - [1. Open Loop Congestion Control](#1-open-loop-congestion-control)
    - [2. Closed Loop Congestion Control](#2-closed-loop-congestion-control)
  - [Explain Leaky Bucket and Token Bucket algorithms.](#explain-leaky-bucket-and-token-bucket-algorithms)
    - [1. Leaky Bucket Algorithm](#1-leaky-bucket-algorithm)
      - [How it Works:](#how-it-works)
      - [Characteristics:](#characteristics)
      - [Applications:](#applications)
      - [Example:](#example)
    - [2. Token Bucket Algorithm](#2-token-bucket-algorithm)
      - [How it Works:](#how-it-works-1)
      - [Characteristics:](#characteristics-1)
      - [Applications:](#applications-1)
      - [Example:](#example-1)
    - [Comparison of Leaky Bucket and Token Bucket](#comparison-of-leaky-bucket-and-token-bucket)
    - [Key Takeaways](#key-takeaways)
  - [Explain the Hierarchical Routing algorithm and discuss its advantages and limitations.](#explain-the-hierarchical-routing-algorithm-and-discuss-its-advantages-and-limitations)
    - [How Hierarchical Routing Works](#how-hierarchical-routing-works)
    - [Advantages of Hierarchical Routing](#advantages-of-hierarchical-routing)
    - [Limitations of Hierarchical Routing](#limitations-of-hierarchical-routing)

# Mid 2

## Differentiate the Virtual Circuit and Datagram Networks.

Virtual circuit and datagram networks are two fundamental approaches to packet-switched networking, and they differ primarily in how they establish connections and handle data transmission.

| Feature                 | Virtual Circuit Network                                                                                  | Datagram Network                                                                                        |
| ----------------------- | -------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------- |
| **Connection Type**     | Connection-oriented                                                                                      | Connectionless                                                                                          |
| **Setup Phase**         | Required (establishes a route)                                                                           | Not required                                                                                            |
| **Path Consistency**    | Fixed path for all packets                                                                               | Variable paths per packet                                                                               |
| **Delay**               | **Lower delay** after setup, as the path is predefined                                                   | **Potentially higher delay** due to route calculation for each packet                                   |
| **Order**               | Maintains **packet order**, as all packets follow the same path                                          | **Packets may arrive out of order**, since they may follow different paths                              |
| **Cost**                | Typically **higher setup cost** due to connection establishment and resource reservation                 | **Lower cost** due to the absence of a connection setup phase                                           |
| **Packet Loss**         | **Less prone to packet loss** due to resource reservation and fixed path                                 | **Higher chance of packet loss**, as no resources are reserved                                          |
| **Overhead**            | **Higher overhead initially** due to setup requirements; once established, **lower per-packet overhead** | **Lower initial overhead** but **higher per-packet overhead** due to routing information in each packet |
| **Reliability**         | More reliable, suitable for applications requiring consistent data delivery                              | Less reliable, but scalable and suitable for dynamic data traffic                                       |
| **Resource Allocation** | Resources are reserved, which can ensure quality of service (QoS)                                        | No reserved resources; relies on best-effort delivery                                                   |
| **Example Protocols**   | ATM (Asynchronous Transfer Mode), MPLS, Frame Relay                                                      | IP, UDP                                                                                                 |

**Summary**:

- **Virtual Circuit Networks** excel in scenarios requiring **low delay** and **ordered delivery** but come at a **higher initial cost and setup overhead**.
- **Datagram Networks** provide a **flexible, low-cost solution** suited for less sensitive applications, with trade-offs in **delay, packet loss, and order**.

---

## Discuss the different Congestion control policies.

- **Congestion** in a network may occur when the load on the network (i.e. the number of packets sent to the network) is greater than the capacity of the network (i.e. the number of packets a network can handle.)

- The causes of congestion in a subnet include:

  - Input traffic rate exceeding the output line capacity.
  - Routers processing tasks (like queuing and updating tables) too slowly.
  - Limited buffer capacity in routers.
  - Slow CPU speed at routers, causing delays in routine tasks.

- Congestion Control refers to techniques and mechanisms that can either prevent congestion, before it happens, or remove congestion, after it has happened.
- Congestion control mechanisms are divided into two categories, one category prevents the congestion from happening and the other category removes congestion after it has taken place.
- These two categories are:
  1. Open loop
  2. Closed loop

![Congestion](https://media.geeksforgeeks.org/wp-content/uploads/congestion-control.jpg)

### 1. Open Loop Congestion Control

Open loop techniques focus on preventing congestion before it occurs. This is achieved through proactive policies that either the source or destination node manages.

1. **Retransmission Policy**:

   - If a packet is lost or damaged during transmission, the sender retransmits it. However, frequent retransmissions increase network load and can worsen congestion.
   - To optimize, **retransmission timers** are carefully adjusted to balance efficiency and network load, ensuring that packets are only resent when necessary, reducing chances of network congestion.

2. **Window Policy**:

   - The sender's **window size** affects how many packets can be sent before needing an acknowledgment.
   - In **Go-Back-N** protocols, lost packets cause the sender to resend multiple packets even if only one packet was lost. This redundancy can increase congestion.
   - **Selective Repeat** is preferred in open loop control, as it allows resending only specific lost packets, reducing unnecessary traffic.

3. **Discarding Policy**:

   - Routers can reduce congestion by selectively discarding less important packets. For example, if congestion arises during audio or video transmission, routers may drop less critical or lower-priority packets.
   - This allows more vital parts of the message to be transmitted with minimal quality impact, ensuring smoother delivery despite congestion.

4. **Acknowledgment Policy**:

   - Acknowledgments (ACKs) themselves add to network load. Instead of acknowledging each packet, the receiver can wait to acknowledge multiple packets at once, reducing traffic.
   - Alternatively, the receiver may delay acknowledgments and send them when needed or when other packets are due for transmission.

5. **Admission Policy**:
   - **Admission control** assesses new traffic before allowing it onto the network. If the network detects a risk of congestion, it may deny the new connection.
   - This policy is similar to a gatekeeping system, where a network resource check prevents overload by blocking excessive traffic from joining when congestion is imminent.

### 2. Closed Loop Congestion Control

Closed loop techniques respond to congestion once it has occurred, using various feedback mechanisms and adjustments to alleviate it.

1. **Backpressure**:

   - When a node becomes congested, it can temporarily stop accepting new packets from the upstream node, forcing data to "back up" in the network.
   - This feedback loop continues back through the nodes toward the source, alerting it to slow down.
   - **Backpressure** works best in **virtual circuit networks**, where nodes maintain information on connections and can control data flow at each point.

   ![BackPressure](https://media.geeksforgeeks.org/wp-content/uploads/data-flow-congestion.jpg)

   In above diagram the 3rd node is congested and stops receiving packets as a result 2nd node may be get congested due to slowing down of the output data flow. Similarly 1st node may get congested and inform the source to slow down.

2. **Choke Packet Technique**:
   - Here, a router experiencing high traffic sends a **choke packet** to the source, instructing it to reduce its sending rate.
   - This targeted approach directly informs the source without affecting intermediate nodes, making it suitable for both **virtual circuits** and **datagram networks**.

![Choke Packet](https://media.geeksforgeeks.org/wp-content/uploads/congestion-control-choke-packet.jpg)

3. **Implicit Signaling**:

   - In implicit signaling, the source detects possible congestion based on network performance, without direct communication from congested nodes.
   - For instance, if acknowledgments are delayed or missing, the source may assume congestion and reduce its transmission rate. This technique provides indirect congestion feedback, which is less immediate but effective.

4. **Explicit Signaling**:
   - Unlike implicit signaling, explicit signaling involves the congested node directly informing the source or destination about congestion within the data packets.
   - **Forward Signaling** warns the destination, allowing it to take measures to prevent further congestion.
   - **Backward Signaling** notifies the source, prompting it to slow down transmission to ease congestion.

---

## Explain Leaky Bucket and Token Bucket algorithms.

The **Leaky Bucket** and **Token Bucket** algorithms are two commonly used techniques for controlling network traffic to manage congestion, maintain data flow, and enforce rate limits.
![quq](https://miro.medium.com/v2/resize:fit:1100/format:webp/0*JZSfWyVXXnLncii9)

### 1. Leaky Bucket Algorithm

The **Leaky Bucket** algorithm controls data flow by sending data at a steady, fixed rate, even if data arrives in bursts.

![Leaky Bucket](https://media.geeksforgeeks.org/wp-content/uploads/leakyTap-1.png)

#### How it Works:

- Imagine a bucket with a small hole at the bottom. Water (data packets) is poured into the bucket, and it leaks out at a constant rate from the hole.
- When the bucket is full (the maximum buffer capacity), any additional incoming packets (water) will overflow and are discarded (dropped).
- The rate at which data leaves the bucket is constant, regardless of the incoming traffic rate.

#### Characteristics:

- **Constant Output Rate**: Data is sent out at a steady, predictable rate.
- **Smooths Traffic Bursts**: By controlling the outflow, it prevents bursty traffic from overwhelming the network.
- **Packet Loss on Overflow**: When the bucket (buffer) is full, excess packets are dropped, which could lead to data loss.

#### Applications:

- The Leaky Bucket algorithm is commonly used in applications where a steady flow of data is required, such as in **telecommunication networks** to ensure Quality of Service (QoS).
- It's also used in scenarios where preventing sudden traffic bursts is critical to avoid congestion.

#### Example:

If a network device has a bucket with a capacity of 10 packets and a constant leak rate of 1 packet per second, even if packets arrive at a bursty rate, they will only be forwarded at 1 packet per second, maintaining a constant data flow.

### 2. Token Bucket Algorithm

The **Token Bucket** algorithm is more flexible than the Leaky Bucket allows data to be sent in bursts, as long as there are enough tokens available. Tokens are added to the _bucket_ at a steady rate, and each packet of data uses one token.
![Token Bucket](<https://media.geeksforgeeks.org/wp-content/uploads/20240116162804/Blank-diagram-(7).png>)

#### How it Works:

- Tokens (representing permission to send packets) are added to a _bucket_ at a constant rate, up to a maximum bucket capacity.
- Each packet sent requires a token. If a token is available, it’s consumed, and the packet is sent.
- If no tokens are available, the packet is either queued until tokens are available or discarded if the bucket remains empty for too long.
- The token bucket allows short bursts of data to be sent as long as there are enough tokens in the bucket.

#### Characteristics:

- **Supports Bursts**: Unlike the Leaky Bucket, the Token Bucket can send packets in bursts if enough tokens are accumulated.
- **Flexible Rate Control**: It enforces an average rate limit while allowing for bursts of traffic, making it ideal for bursty data applications.
- **Tokens are Replenished**: Tokens are added at a regular rate, allowing for controlled burstiness within set limits.

#### Applications:

- The Token Bucket algorithm is often used in **network protocols** like **ATM (Asynchronous Transfer Mode)** and **Ethernet**, where some burstiness is allowed but still requires control.
- It’s also used in **QoS frameworks** where flexibility in data rate control is necessary.

#### Example:

If a network device has a token bucket with a capacity of 10 tokens, and tokens are added at 1 token per second:

- The device can send bursts of up to 10 packets instantly if tokens are available.
- Once the burst is used, it returns to sending 1 packet per second, matching the token replenishment rate.

> optional

### Comparison of Leaky Bucket and Token Bucket

| Feature             | Leaky Bucket                              | Token Bucket                                               |
| ------------------- | ----------------------------------------- | ---------------------------------------------------------- |
| **Traffic Rate**    | Constant, smooth rate                     | Allows bursty traffic with an average rate                 |
| **Handling Bursts** | Not allowed; excess packets are discarded | Burst allowed if tokens are available                      |
| **Main Use Case**   | Applications needing steady data flow     | Applications needing flexibility with bursts               |
| **Packet Loss**     | Discards packets if bucket is full        | Only discards if no tokens are available and queue is full |

### Key Takeaways

- **Leaky Bucket** is strict, maintaining a constant flow rate and discarding excess data.
- **Token Bucket** offers more flexibility, allowing for short bursts while enforcing an average rate, making it more suitable for applications where bursty traffic is acceptable.

---

## Explain the Hierarchical Routing algorithm and discuss its advantages and limitations.

The **Hierarchical Routing Algorithm** is a network routing strategy that organizes routers and networks into layers or levels, creating a hierarchy. Instead of each router in a large network maintaining a full routing table for the entire network, it maintains detailed information about its own local region and less detailed information about other regions. This is common in large-scale networks, like the Internet, where dividing the network into areas (such as regions or domains) makes routing more efficient.

![Heirarchical](https://www.researchgate.net/profile/Oscar-Samuel-Espin/publication/258108166/figure/fig3/AS:297592152969227@1447962906460/Hierarchical-routing-structure.png)
![Heirarchical](https://image2.slideserve.com/5357695/hierarchical-routing-n.jpg)

### How Hierarchical Routing Works

1. **Network Division**: The network is divided into multiple regions or areas.
2. **Local Routing Tables**: Each router in a region maintains a detailed routing table for nodes within its own region.
3. **Inter-region Routing**: Routers maintain a summarized or less detailed view of routes in other regions.
4. **Routing Across Regions**: For traffic between different regions, a router forwards packets to a regional gateway router, which then routes the packets based on higher-level routing tables.

For example, in a three-level hierarchy:

- **Level 1**: Routers handle local routing within a small group.
- **Level 2**: A higher-level router aggregates multiple Level 1 regions.
- **Level 3**: An even higher level could aggregate multiple Level 2 regions, handling long-distance traffic between regions.

### Advantages of Hierarchical Routing

1. **Scalability**: Hierarchical routing scales well in large networks by limiting the size of each router’s routing table and reducing the need for global updates across the entire network.
2. **Reduced Overhead**: By only needing detailed information for local regions, routers reduce memory and processing overhead.
3. **Improved Efficiency**: Packets traverse through hierarchical levels, allowing for efficient long-distance routing without needing every router to have a complete view of the network.
4. **Simplified Management**: Managing and troubleshooting network issues becomes easier, as the network is segmented into logical regions or areas.

### Limitations of Hierarchical Routing

1. **Suboptimal Paths**: Routing within a hierarchical structure can sometimes lead to less direct or suboptimal routes, as packets might need to go through designated gateways.
2. **Complexity in Setup**: Creating and maintaining a hierarchical structure can be complex, particularly as the network grows and regions change.
3. **Potential Bottlenecks**: If a higher-level router (gateway) in the hierarchy becomes congested or fails, it can impact traffic between entire regions, leading to network bottlenecks.
4. **Initial Cost**: Implementing a hierarchical routing system may require additional infrastructure and administrative setup, especially in very large networks.

---



<br>
<div align='center'>
  <a href='https://github.com/omteja04' target='_blank'>
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
