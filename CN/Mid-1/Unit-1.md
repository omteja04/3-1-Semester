<!--
  Author: omteja04
  Created on: 29-08-2024 21:54:05
  Description: Unit-1
-->

- [Unit - 1](#unit---1)
  - [Compare and contrast the OSI and TCP/IP reference models.](#compare-and-contrast-the-osi-and-tcpip-reference-models)
  - [Explain about Fiber optic cable? What are the types of Fiber optic cable.](#explain-about-fiber-optic-cable-what-are-the-types-of-fiber-optic-cable)
    - [Main Elements of Fiber Optics](#main-elements-of-fiber-optics)
    - [Types of Fiber Optics](#types-of-fiber-optics)
    - [Advantages of Fiber Optics](#advantages-of-fiber-optics)
    - [Disadvantages of Fiber Optics](#disadvantages-of-fiber-optics)
    - [Uses of Fiber Optics](#uses-of-fiber-optics)
  - [What is Network topology? List any 3 network topologies.](#what-is-network-topology-list-any-3-network-topologies)
    - [Three Common Network Topologies:](#three-common-network-topologies)

# Unit - 1

## Compare and contrast the OSI and TCP/IP reference models.

![OSI vs TCP/IP](https://media.geeksforgeeks.org/wp-content/uploads/20240701125905/OSI-vs-TCP.png)

| **Parameters**             | **OSI Model**                                                                                                                                    | **TCP/IP Model**                                  |
| -------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------- |
| **Full Form**              | Open Systems Interconnection                                                                                                                     | Transmission Control Protocol/Internet Protocol   |
| **Layers**                 | 7 layers (Physical, Data Link, Network, Transport, Session, Presentation, Application)                                                           | 4 layers (Link, Internet, Transport, Application) |
| **Usage**                  | Less commonly used                                                                                                                               | Widely used and implemented                       |
| **Approach**               | Vertically approached                                                                                                                            | Horizontally approached                           |
| **Delivery**               | Delivery of packages is guaranteed                                                                                                               | Delivery of packages is not guaranteed            |
| **Replacement**            | Tools and changes can be easily replaced                                                                                                         | Replacing tools is more complex                   |
| **Reliability**            | Less reliable compared to TCP/IP                                                                                                                 | More reliable compared to OSI                     |
| **Protocol Example**       | Not tied to specific protocols; examples include HTTP (Application), SSL/TLS (Presentation), TCP (Transport), IP (Network), Ethernet (Data Link) | HTTP, FTP, TCP, UDP, IP, Ethernet                 |
| **Error Handling**         | Built into Data Link and Transport layers                                                                                                        | Built into protocols like TCP                     |
| **Connection Orientation** | Covers both connection-oriented (TCP) and connection-less (UDP) protocols at the Transport layer                                                 | TCP (connection-oriented), UDP (connection-less)  |

## Explain about Fiber optic cable? What are the types of Fiber optic cable.

Fiber optic cable is a type of network cable that uses light to transmit data.

### Main Elements of Fiber Optics

- **Core:** The central part of the fiber, made from a transparent material, through which light travels. Its diameter ranges from about 5 to 100 micrometers (um).

- **Cladding:** The layer around the core with a lower refractive index. It helps keep the light inside the core by reflecting it back.

- **Buffer Coating:** A plastic layer that protects the fiber. After coating, the fiber's diameter is about 250 to 300 micrometers.

![elements](https://media.geeksforgeeks.org/wp-content/uploads/20200628185425/1406-7.png)

### Types of Fiber Optics

**Single-mode fiber:**

In single-mode fiber, only one type of ray of light can propagate through the fiber. This type of fiber has a small core diameter (5um) and high cladding diameter (70um) and the difference between the refractive index of core and cladding is very small. There is no dispersion i.e. no degradation of the signal during traveling through the fiber. The light is passed through it through a laser diode.

<!-- ![single-mode](https://media.geeksforgeeks.org/wp-content/uploads/20200628185455/223-1.png) -->

**Multi-mode fiber**
Multi-mode fiber allows many modes for the light rays traveling through it. The core diameter is generally (40um) and that of cladding is (70um). The relative refractive index difference is also greater than single-mode fiber. There is signal degradation due to multi-mode dispersion. It is not suitable for long-distance communication due to the large dispersion and attenuation of the signal. There are two categories based on Multi-mode fiber i.e. `Step Index Fiber` and `Graded Index Fiber`.

- **Step-index optical fiber**: The refractive index of the core is constant. The refractive index of the cladding is also continuous. The rays of light propagate through it in the form of meridional rays which cross the fiber axis during every reflection at the core-cladding boundary.
<!-- ![Step-index](https://media.geeksforgeeks.org/wp-content/uploads/20200628185634/3164-1.png) -->
- **Graded index optical fiber**: In this type of fiber, the core has a non-uniform refractive index that gradually decreases from the center towards the core-cladding interface. The cladding has a uniform refractive index. The light rays propagate through it in the form of skew rays or helical rays. it does not cross the fiber axis at any time.
<!-- ![Graded-index](https://media.geeksforgeeks.org/wp-content/uploads/20200628185715/4108-2.png) -->

![modes](https://th.bing.com/th/id/R.58a224218703d9f2e54c8883c530981e?rik=mNyAAhfiHa0MbA&riu=http%3a%2f%2fwww.fiberopticshare.com%2fwp-content%2fuploads%2f2016%2f09%2fsingle-mode-fiber-multimode-fiber-1.jpg&ehk=o%2fb00HRpSqtqzWw8bAAVLrckLhowYcFhZtqP6w9PQhA%3d&risl=&pid=ImgRaw&r=0)

### Advantages of Fiber Optics

- Fiber Optics supports bandwidth with higher capacities.
- Electromagnetic Interference is very little with Fiber Optics.
- Fiber Optics are stronger and lighter than copper cables.
- Very little Maintenance is required in Optical Fiber.

### Disadvantages of Fiber Optics

- Fiber Optics is more costly than Copper Wire.
- Huge manual work is required to install new cables.
- Some optical fibers like glass fiber require more protection.
- Fiber Optics are more fragile i.e., can be easily broken, or signals can be lost easily.

### Uses of Fiber Optics

- Fiber Optics can be used in Computer Broadcasting and Networking
- Fiber Optics are used on the Internet. They are also used in Television Cable.
- Fiber Optics are widely used in Military Activities. They are also used in Medical Purposes like for precise illumination.
- They can also be used in Underwater environments as they don’t require to be replaced frequently.

## What is Network topology? List any 3 network topologies.

**Network Topology** refers to the arrangement or layout of various elements (links, nodes, etc.) in a computer network. It defines how devices and network components are interconnected and how data flows through the network. Network topology impacts the performance, reliability, and scalability of a network.

### Three Common Network Topologies:

1. **Star Topology:**

   - **Structure:** All devices (nodes) are connected to a central hub or switch.
   - **Advantages:** Easy to install and manage. Failure of a single device does not affect others.
   - **Disadvantages:** If the central hub fails, the entire network is affected.

![star](https://www.cablify.ca/wp-content/uploads/2018/04/Star-Topology.jpg)

2. **Bus Topology:**

   - **Structure:** All devices are connected to a single central cable, called the bus. Devices communicate over this shared bus.
   - **Advantages:** Easy to implement and cost-effective for small networks.
   - **Disadvantages:** Performance issues with heavy traffic. Failure in the central bus can disrupt the entire network.

![bus](https://www.cablify.ca/wp-content/uploads/2018/04/bus-topology.jpg)

3. **Ring Topology:**
   - **Structure:** Devices are connected in a circular manner, with each device having exactly two neighbors. Data travels in one direction (or both in a dual-ring system) around the ring.
   - **Advantages:** Provides predictable data transfer times. Easy to identify faults.
   - **Disadvantages:** A failure in any single connection can disrupt the entire network. Troubleshooting can be challenging.

![ring](https://www.cablify.ca/wp-content/uploads/2018/04/Ring-Topology.jpg)



