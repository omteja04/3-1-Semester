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
  - [Explain the functionality of each layer in OSI reference model.](#explain-the-functionality-of-each-layer-in-osi-reference-model)
    - [OSI Model](#osi-model)
    - [7 Layers of OSI Model](#7-layers-of-osi-model)
      - [1. Physical layer](#1-physical-layer)
      - [2. Data-Link Layer](#2-data-link-layer)
      - [3. Network Layer](#3-network-layer)
      - [4. Transport Layer](#4-transport-layer)
      - [5. Session Layer](#5-session-layer)
      - [6. Presentation Layer](#6-presentation-layer)
      - [7. Application Layer](#7-application-layer)
  - [Explain the layers of TCP/IP reference model.](#explain-the-layers-of-tcpip-reference-model)
    - [The TCP/IP Reference Model](#the-tcpip-reference-model)
      - [1. Network Access Layer](#1-network-access-layer)
      - [2. Internet Layer](#2-internet-layer)
      - [3. Transport Layer](#3-transport-layer)
      - [4. Application Layer](#4-application-layer)
  - [Explain about various transmission media in the physical layer with a neat sketch.](#explain-about-various-transmission-media-in-the-physical-layer-with-a-neat-sketch)
    - [Classification Of Transmission Media](#classification-of-transmission-media)
    - [1. Guided Media](#1-guided-media)
      - [a. Twisted Pair Cable](#a-twisted-pair-cable)
      - [b. Coaxial Cable](#b-coaxial-cable)
      - [c. Optical Fiber Cable](#c-optical-fiber-cable)
    - [2. Unguided Media](#2-unguided-media)
      - [a. Radio Waves](#a-radio-waves)
      - [b. Microwaves](#b-microwaves)
      - [c. Infrared](#c-infrared)

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

---

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

---

## What is Network topology? List any 3 network topologies.

**Network Topology** refers to the arrangement or layout of various elements (links, nodes, etc.) in a computer network. It defines how devices and network components are interconnected and how data flows through the network. Network topology impacts the performance, reliability, and scalability of a network.

### Three Common Network Topologies:

1. **Star Topology:**

   - **Structure:** All devices (nodes) are connected to a central hub or switch.
   - **Advantages:** Easy to install and manage. Failure of a single device does not affect others.
   - **Disadvantages:** If the central hub fails, the entire network is affected.

<img src="https://www.cablify.ca/wp-content/uploads/2018/04/Star-Topology.jpg" width="500" alt="Star Topology">

2. **Bus Topology:**

   - **Structure:** All devices are connected to a single central cable, called the bus. Devices communicate over this shared bus.
   - **Advantages:** Easy to implement and cost-effective for small networks.
   - **Disadvantages:** Performance issues with heavy traffic. Failure in the central bus can disrupt the entire network.

<img src="https://www.cablify.ca/wp-content/uploads/2018/04/bus-topology.jpg" width="500" alt="Bus Topology">

3. **Ring Topology:**
   - **Structure:** Devices are connected in a circular manner, with each device having exactly two neighbors. Data travels in one direction (or both in a dual-ring system) around the ring.
   - **Advantages:** Provides predictable data transfer times. Easy to identify faults.
   - **Disadvantages:** A failure in any single connection can disrupt the entire network. Troubleshooting can be challenging.

<img src="https://www.cablify.ca/wp-content/uploads/2018/04/Ring-Topology.jpg" width="500" alt="Ring Topology">

---

## Explain the functionality of each layer in OSI reference model.

### OSI Model

- OSI stands for Open System Interconnection is a reference model that describes how information from a software application in one computer moves through a physical medium to the software application in another computer.
- OSI consists of seven layers, and each layer performs a particular network function.
- OSI model was developed by the International Organization for Standardization (ISO) in 1984, and it is now considered as an architectural model for the inter-computer communications.
- OSI model divides the whole task into seven smaller and manageable tasks. Each layer is assigned a particular task.
- Each layer is self-contained, so that task assigned to each layer can be performed independently.

### 7 Layers of OSI Model

There are the seven OSI layers. Each layer has different functions. A list of seven layers are given below:

1. [Physical Layer](#1-physical-layer)
2. [Data-Link Layer](#2-data-link-layer)
3. [Network Layer](#3-network-layer)
4. [Transport Layer](#4-transport-layer)
5. [Session Layer](#5-session-layer)
6. [Presentation Layer](#6-presentation-layer)
7. [Application Layer](#7-application-layer)

![Responsibilities](https://media.geeksforgeeks.org/wp-content/uploads/20240712153238/OSI-Model.png)

#### 1. Physical layer

![Physical Layer](https://static.javatpoint.com/tutorial/computer-network/images/osi-model3.png)

- The main functionality of the physical layer is to transmit the individual bits from one node to another node.
- It is the lowest layer of the OSI model.
- It establishes, maintains and deactivates the physical connection.
- **Functions**: Data Transmission, Signals, Topology.

#### 2. Data-Link Layer

![Data-link](https://static.javatpoint.com/tutorial/computer-network/images/osi-model4.png)

- It is mainly responsible for the unique identification of each device that resides on a local network.
- This layer is also responsible for the error-free transfer of data frames.
- It provides a reliable and efficient communication between two or more devices.
- **Functions**: Physical addressing, Flow control, Error control, Access control.

#### 3. Network Layer

![network](https://static.javatpoint.com/tutorial/computer-network/images/osi-model6.png)

- The Data link layer is responsible for routing and forwarding the packets.
- It determines the best path to move data from source to the destination based on the network conditions, the priority of service, and other factors.
- The protocols used to route the network traffic are known as Network layer protocols. Examples of protocols are IPv4 and IPv6.
- **Functions**: Inter-networking, Addressing, Routing, Packetizing

#### 4. Transport Layer

![transport](https://static.javatpoint.com/tutorial/computer-network/images/osi-model7.png)

- The main responsibility of the transport layer is to transfer the data completely.
- It receives the data from the upper layer and converts them into smaller units known as segments.
- This layer can be termed as an end-to-end layer as it provides a point-to-point connection between source and destination to deliver the data reliably.
- **Functions**: Service-point addressing, Connection control, Flow control, Error control.

#### 5. Session Layer

![session](https://static.javatpoint.com/tutorial/computer-network/images/osi-model8.png)

- The Session layer is used to establish, maintain and synchronizes the interaction between communicating devices.
- Session layer allows the communication between two processes which can be either half-duplex or full-duplex.
- Session layer adds some checkpoints when transmitting the data in a sequence. If some error occurs in the middle of the transmission of data, then the transmission will take place again from the checkpoint. This process is known as Synchronization and recovery.
- **Functions**: Dialog Control, Synchronization.

#### 6. Presentation Layer

![presentation](https://static.javatpoint.com/tutorial/computer-network/images/osi-model9.png)

- A Presentation layer is mainly concerned with the syntax and semantics of the information exchanged between the two systems.
- It acts as a data translator for a network.
- **Functions**: Data encryption, Compression and Translation.

#### 7. Application Layer

![Application](https://static.javatpoint.com/tutorial/computer-network/images/osi-model10.png)

- An application layer serves as a window for users and application processes to access network service.
- This layer provides the network services to the end-users.
- **Functions**: File transfer, access, and management (FTAM), Mail services, Directory services.

---

## Explain the layers of TCP/IP reference model.

### The TCP/IP Reference Model

TCP/IP means Transmission Control Protocol and Internet Protocol. It is the network model used in the current Internet architecture as well.

The TCP/IP model consists of four layers: the application layer, transport layer, network layer, .

- [1. Network Access Layer(Physical Layer + Data-Link Layer)](#1-network-access-layer)
- [2. Internet Layer](#2-internet-layer)
- [3. Transport layer](#3-transport-layer)
- [4. Application Layer](#4-application-layer)
- ![tcp/ip](https://static.javatpoint.com/tutorial/computer-network/images/tcp-ip-model.png)

#### 1. Network Access Layer

- A network access layer is the lowest layer of the TCP/IP model.
- A network layer is the combination of the Physical layer and Data Link layer defined in the OSI reference model.
- This layer is mainly responsible for the transmission of the data between two devices on the same network.

#### 2. Internet Layer

- An internet layer is the second layer of the TCP/IP model.
- The main responsibility of the internet layer is to send the packets from any network, and they arrive at the destination irrespective of the route they take.
- IP (Internet Protocol) is used in this layer.
- The two protocols used in the transport layer
  - `Address Resolution Protocol (ARP): ` ARP is a network layer protocol which is used to find the physical address from the IP address.
  - `Internet Control Message Protocol (ICMP):`It is a mechanism used by the hosts or routers to send notifications regarding datagram problems back to the sender.
- **Functions**: Delivering IP packets, Performing routing, Avoiding congestion

#### 3. Transport Layer

- The transport layer is responsible for the reliability, flow control, and correction of data which is being sent over the network.
- The two protocols used in the transport layer:

  - `User Datagram protocol (UDP):` It provides connectionless service and end-to-end delivery of transmission.

  - `Transmission control protocol (TCP):`It provides a full transport layer services to applications.

- **Functions**: Multiplexing, Segmenting or Splitting.

#### 4. Application Layer

- An application layer is the topmost layer in the TCP/IP model.
- It is responsible for handling high-level protocols, issues of representation.
- This layer allows the user to interact with the application.

**Main Protocols used in Application Layer:**

- `HTTP`: HTTP stands for Hypertext transfer protocol. This protocol allows us to access the data over the world wide web. It transfers the data in the form of plain text, audio, video. It is known as a Hypertext transfer protocol as it has the efficiency to use in a hypertext environment where there are rapid jumps from one document to another.
- `SMTP`: SMTP stands for Simple mail transfer protocol. The TCP/IP protocol that supports the e-mail is known as a Simple mail transfer protocol. This protocol is used to send the data to another e-mail address.
- `DNS`: DNS stands for Domain Name System. An IP address is used to identify the connection of a host to the internet uniquely. But, people prefer to use the names instead of addresses. Therefore, the system that maps the name to the address is known as Domain Name System.
- `FTP`: FTP stands for File Transfer Protocol. FTP is a standard internet protocol used for transmitting the files from one computer to another computer.
- `TELNET`: It is an abbreviation for Terminal Network. It establishes the connection between the local computer and remote computer in such a way that the local terminal appears to be a terminal at the remote system.

## Explain about various transmission media in the physical layer with a neat sketch.

In the physical layer of network communication, transmission media are the physical paths that data travels over from one device to another. These media can be broadly classified into guided and unguided media.

### Classification Of Transmission Media

![Classification](https://static.javatpoint.com/tutorial/computer-network/images/classification-of-transmission-media.png)

### 1. Guided Media

**Guided media** refers to transmission media where the data is confined within a physical path or conduit. The primary types are:

#### a. Twisted Pair Cable

![twisted-pair](https://www.fiberopticshare.com/wp-content/uploads/2016/10/UTP-and-STP-cable.png)

- Consists of pairs of insulated copper wires twisted together.
- There are two types:
  - **Unshielded Twisted Pair (UTP)**: Common in Ethernet networks. Vulnerable to external noise.
  - **Shielded Twisted Pair (STP)**: Has an additional shielding to reduce interference.
- **Applications**: Telephone lines, Ethernet networks.

#### b. Coaxial Cable

![Co-axial](https://3.bp.blogspot.com/_y-V2fuxQGMI/TEhE7Z0HKrI/AAAAAAAAAA0/QmyvYGOVEMY/s400/coax.png)

- Contains a central conductor surrounded by insulation, a metallic shield, and an outer insulating layer. Provides better shielding from interference compared to twisted pair cables.
- Coaxial cable is of two types:
  - **Baseband transmission**: It is defined as the process of transmitting a single signal at high speed.
  - **Broadband transmission**: It is defined as the process of transmitting multiple signals simultaneously.
- **Applications**: Cable television, broadband internet.

#### c. Optical Fiber Cable

![elements](https://media.geeksforgeeks.org/wp-content/uploads/20200628185425/1406-7.png)

- Uses light to transmit data through glass or plastic fibers. It is immune to electromagnetic interference and offers high bandwidth over long distances.
- **Applications**: High-speed data networks, long-distance telecommunication.

### 2. Unguided Media

**Unguided media** refers to transmission media where data is transmitted over the air or space without physical conduits. The primary types are:

#### a. Radio Waves

- Electromagnetic waves that travel through the air. Used for wireless communications over various distances.
- **Applications**: Wi-Fi, Bluetooth, AM/FM radio.

#### b. Microwaves

- High-frequency radio waves used for point-to-point communication. They require line-of-sight between transmitting and receiving antennas.
- **Applications**: Satellite communications, microwave links.

#### c. Infrared

- Uses infrared light to transmit data over short distances. It requires line-of-sight and is commonly used in remote controls.
- **Applications**: Remote controls, short-range data transfer.

<br>
<div align='center'>
  <a href='https://github.com/omteja04'>
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
