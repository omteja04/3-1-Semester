<!--
  Author: omteja04
  Created on: 01-09-2024 15:24:23
  Description: Unit-3
-->

- [1. Explain the various ALOHA protocols in detail.](#1-explain-the-various-aloha-protocols-in-detail)
  - [ALOHA Protocols](#aloha-protocols)
    - [1. Pure ALOHA](#1-pure-aloha)
    - [2. Slotted ALOHA](#2-slotted-aloha)
- [2. What is CSMA? Explain about CSMA/CD.](#2-what-is-csma-explain-about-csmacd)
  - [Carrier Sense Multiple Access (CSMA)](#carrier-sense-multiple-access-csma)
  - [CSMA Variants](#csma-variants)
  - [Carrier Sense Multiple Access with Collision Detection (CSMA/CD)](#carrier-sense-multiple-access-with-collision-detection-csmacd)
    - [How CSMA/CD Works:](#how-csmacd-works)
  - [CSMA/CD Process Diagram:](#csmacd-process-diagram)
  - [Key Characteristics of CSMA/CD:](#key-characteristics-of-csmacd)
  - [Advantages of CSMA/CD:](#advantages-of-csmacd)
  - [Disadvantages of CSMA/CD:](#disadvantages-of-csmacd)
- [3. What is CSMA? Explain about CSMA/CA.](#3-what-is-csma-explain-about-csmaca)
  - [Carrier Sense Multiple Access (CSMA)](#carrier-sense-multiple-access-csma-1)
  - [CSMA Variants](#csma-variants-1)
  - [Carrier Sense Multiple Access with Collision Avoidance (CSMA/CA)](#carrier-sense-multiple-access-with-collision-avoidance-csmaca)
  - [Why CSMA/CA is Needed in Wireless Networks:](#why-csmaca-is-needed-in-wireless-networks)
    - [Steps in CSMA/CA:](#steps-in-csmaca)
  - [CSMA/CA Process Diagram:](#csmaca-process-diagram)
  - [Key Characteristics of CSMA/CA:](#key-characteristics-of-csmaca)
  - [Advantages of CSMA/CA:](#advantages-of-csmaca)
  - [Disadvantages of CSMA/CA:](#disadvantages-of-csmaca)
- [4. Write and explain about various multiple access protocols.](#4-write-and-explain-about-various-multiple-access-protocols)
  - [Multiple Access Protocols](#multiple-access-protocols)
  - [Random Access Protocols](#random-access-protocols)
    - [1. ALOHA](#1-aloha)
    - [2. Carrier Sense Multiple Access (CSMA)](#2-carrier-sense-multiple-access-csma)
  - [Controlled Access Protocols](#controlled-access-protocols)
    - [1. Polling](#1-polling)
    - [2. Reservation](#2-reservation)
    - [3. Token Passing](#3-token-passing)
  - [Channelization Protocols](#channelization-protocols)
    - [1. Time Division Multiple Access (TDMA)](#1-time-division-multiple-access-tdma)
    - [2. Frequency Division Multiple Access (FDMA)](#2-frequency-division-multiple-access-fdma)
    - [3. Code Division Multiple Access (CDMA)](#3-code-division-multiple-access-cdma)

## 1. Explain the various ALOHA protocols in detail.

### ALOHA Protocols

- **ALOHA** is one of the earliest and simplest multiple access protocols, designed for wireless LAN (Local Area Network) but can also be used in a shared medium to transmit data. Using this method, any station can transmit data across a network simultaneously when a data frameset is available for transmission.
- Any station can transmit data to a channel at any time.
- It does not require any carrier sensing.
- Collision and data frames may be lost during the transmission of data through multiple stations.
- Acknowledgment of the frames exists in Aloha. Hence, there is no collision detection.
- It requires retransmission of data after some random amount of time.on.

There are two primary types of ALOHA protocols:

![Aloha](https://static.javatpoint.com/tutorial/computer-network/images/multiple-access-protocol-2.png)

1. [**Pure ALOHA**](#1-pure-aloha)
2. [**Slotted ALOHA**](#2-slotted-aloha)

#### 1. Pure ALOHA

**Overview**:

- In Pure ALOHA, whenever a device (or station) has data to send, it transmits the data immediately without checking whether the channel is free or busy.
- After sending the data, the device waits for an acknowledgment from the receiver. If the acknowledgment is not received within a specific time period (equal to the maximum round-trip time plus the time needed for acknowledgment), the device assumes that a collision has occurred, and it retransmits the data after waiting for a random amount of time (this is called a random backoff or backoff time (Tb)).

**Collision Handling**:

- Since multiple devices can transmit simultaneously in Pure ALOHA, there is a significant chance of collisions. A collision occurs when two or more devices transmit data at the same time, causing the data to become garbled and requiring retransmission.
- The key challenge with Pure ALOHA is that collisions can occur at any time, leading to a high likelihood of data corruption and subsequent retransmissions.

**Efficiency**:

- The efficiency of Pure ALOHA is relatively low because of the high probability of collisions.
- The theoretical maximum throughput (i.e., the proportion of successful transmissions) is about **18.4%**. This means that on average, only 18.4% of the time is used effectively for successful data transmission, while the rest is wasted due to collisions.

**Throughput Calculation**:

- Throughput \( S \) can be calculated using the formula:
  \[
  S = G \times e^{-2G}
  \]
  where \( G \) is the average number of transmission attempts per frame time.

  The maximum throughput is achieved when \( G = 0.5 \), and this gives:
  \[
  S = 0.5 \times e^{-1} \approx 0.184
  \]

![Pure Aloha](https://static.javatpoint.com/tutorial/computer-network/images/multiple-access-protocol-3.png)

**Summary**:

- **Pure ALOHA** is simple and easy to implement but is not efficient for networks with hi gh traffic loads. It is best suited for scenarios where the network traffic is low, and collisions are infrequent.

#### 2. Slotted ALOHA

**Overview**:

- Slotted ALOHA improves the efficiency of Pure ALOHA by dividing the time into discrete time slots. Each time slot is equal to the time required to send one frame of data.
- In Slotted ALOHA, a device is allowed to send data only at the beginning of a time slot. If a device has data to send, it must wait until the start of the next time slot to begin transmission.

**Collision Handling**:

- By synchronizing transmissions to time slots, Slotted ALOHA reduces the likelihood of collisions. Collisions can only occur if two or more devices attempt to transmit at the start of the same time slot.
- If a collision occurs, as in Pure ALOHA, the devices involved in the collision wait for a random backoff time before attempting to retransmit in subsequent slots.

**Efficiency**:

- The efficiency of Slotted ALOHA is higher than that of Pure ALOHA because collisions are reduced by restricting transmissions to the start of time slots.
- The theoretical maximum throughput of Slotted ALOHA is about **36.8%**. This means that on average, 36.8% of the time is used effectively for successful data transmission, while the rest is wasted due to collisions.

**Throughput Calculation**:

- Throughput \( S \) for Slotted ALOHA can be calculated using the formula:
  \[
  S = G \times e^{-G}
  \]
  where \( G \) is the average number of transmission attempts per time slot.

  The maximum throughput is achieved when \( G = 1 \), and this gives:
  \[
  S = 1 \times e^{-1} \approx 0.368
  \]

![Slotted Aloha](https://static.javatpoint.com/tutorial/computer-network/images/multiple-access-protocol-4.png)

**Summary**:

- **Slotted ALOHA** is more efficient than Pure ALOHA and is better suited for networks with moderate traffic loads. By synchronizing transmissions to time slots, it effectively reduces the probability of collisions and increases overall network efficiency.

## 2. What is CSMA? Explain about CSMA/CD.

### Carrier Sense Multiple Access (CSMA)

**Carrier Sense Multiple Access (CSMA)** is a network protocol that manages how devices share access to a shared communication medium (like a cable or wireless channel). CSMA ensures that only one device transmits data at a time, reducing the chances of data collisions (where two devices try to send data simultaneously).

In CSMA, before sending data, a device checks whether the communication medium is idle. If the medium is free, the device transmits; if the medium is busy, the device waits.

### CSMA Variants

> Just for understanding purpose

- **CSMA/0 (Non-persistent CSMA)**: Devices sense the medium, and if it's idle, they transmit immediately. If the medium is busy, the device waits for a random time before trying again, which helps reduce the chance of a collision.

- **CSMA/1 (1-persistent CSMA)**: Devices continuously sense the medium, and if it's idle, they transmit immediately with certainty (probability 1). If the medium is busy, the device waits until it becomes free, but this increases the likelihood of collisions when multiple devices are waiting to transmit.

- **CSMA/p (p-persistent CSMA)**: Devices sense the medium, and if it's idle, they transmit with a probability `p`. If the medium is busy, they wait and sense the medium again. The use of probability helps to minimize collisions by spreading out transmission attempts when multiple devices are ready to send data.

### Carrier Sense Multiple Access with Collision Detection (CSMA/CD)

**CSMA/CD (Carrier Sense Multiple Access with Collision Detection)** is a network protocol used in wired networks, such as **Ethernet**, to detect collisions during data transmission and take action to resolve them. It's designed to **detect** collisions after they occur and recover from them, ensuring efficient communication between multiple devices.

> Just for understanding the diagram

#### How CSMA/CD Works:

1. **Carrier Sensing**: Before transmitting data, a device listens to the communication medium (such as an Ethernet cable) to check if it's free. If the medium is idle, the device proceeds to send data.
2. **Transmission**: If the medium is free, the device starts transmitting the data.
3. **Collision Detection**: If two devices transmit simultaneously, a **collision** occurs. Each device detects this collision by monitoring voltage changes on the wire.
4. **Jamming Signal**: When a collision is detected, both devices stop transmitting and send a **jamming signal** to notify other devices of the collision.
5. **Random Backoff**: After the jamming signal, both devices wait for a random amount of time before trying to transmit again. The random backoff period helps to ensure that the devices don't collide again immediately.
6. **Retransmission**: After the backoff period, the devices try transmitting the data again, repeating the process if necessary.

### CSMA/CD Process Diagram:

![csma/cd](https://media.geeksforgeeks.org/wp-content/uploads/33-1-2.png)

> Based on the marks write accordingly

### Key Characteristics of CSMA/CD:

1. **Collision Detection**: Devices can detect collisions by monitoring the transmission medium for changes in signal (e.g., voltage changes in Ethernet cables).
2. **Random Backoff**: After detecting a collision, devices wait for a random period before retransmitting to reduce the likelihood of another collision.
3. **Efficiency in Wired Networks**: CSMA/CD is efficient in controlling access to the medium, especially in Ethernet networks where multiple devices share the same communication channel.

### Advantages of CSMA/CD:

- **Simple and Cost-Effective**: CSMA/CD is easy to implement and widely used in traditional Ethernet networks.
- **Collision Recovery**: It detects and resolves collisions efficiently, ensuring data is transmitted successfully.
- **Scalable**: Can support multiple devices on a shared network.

### Disadvantages of CSMA/CD:

- **Not Suitable for Wireless Networks**: CSMA/CD doesn't work well in wireless environments because it's difficult to detect collisions on shared wireless channels. This led to the development of **CSMA/CA** for wireless communication (e.g., Wi-Fi).
- **Decreased Efficiency with Network Congestion**: As more devices join the network and attempt to transmit, the likelihood of collisions increases, reducing network efficiency.
- **Limited to Half-Duplex Communication**: CSMA/CD is used in half-duplex communication, meaning a device can either transmit or receive data, but not both at the same time.

---

## 3. What is CSMA? Explain about CSMA/CA.

### Carrier Sense Multiple Access (CSMA)

**Carrier Sense Multiple Access (CSMA)** is a network protocol that manages how devices share access to a shared communication medium (like a cable or wireless channel). CSMA ensures that only one device transmits data at a time, reducing the chances of data collisions (where two devices try to send data simultaneously).

In CSMA, before sending data, a device checks whether the communication medium is idle. If the medium is free, the device transmits; if the medium is busy, the device waits.

### CSMA Variants

> Just for understanding purpose

- **CSMA/0 (Non-persistent CSMA)**: Devices sense the medium, and if it's idle, they transmit immediately. If the medium is busy, the device waits for a random time before trying again, which helps reduce the chance of a collision.

- **CSMA/1 (1-persistent CSMA)**: Devices continuously sense the medium, and if it's idle, they transmit immediately with certainty (probability 1). If the medium is busy, the device waits until it becomes free, but this increases the likelihood of collisions when multiple devices are waiting to transmit.

- **CSMA/p (p-persistent CSMA)**: Devices sense the medium, and if it's idle, they transmit with a probability `p`. If the medium is busy, they wait and sense the medium again. The use of probability helps to minimize collisions by spreading out transmission attempts when multiple devices are ready to send data.

### Carrier Sense Multiple Access with Collision Avoidance (CSMA/CA)

**CSMA/CA (Carrier Sense Multiple Access with Collision Avoidance)** is a network protocol primarily used in wireless communication systems (such as Wi-Fi) to minimize the chances of data collisions.

### Why CSMA/CA is Needed in Wireless Networks:

- **Hidden Node Problem**: In wireless networks, two devices that are out of range of each other might try to transmit simultaneously, causing a collision at the receiver. CSMA/CA helps prevent this by ensuring that the medium is sensed before transmission.
- **Collision Avoidance**: Unlike CSMA/CD, where the device detects collisions after they occur, CSMA/CA attempts to **avoid** collisions by introducing a random delay before transmission.

> Just for understanding diagram

#### Steps in CSMA/CA:

1. **Carrier Sensing**: The device listens to the communication medium (the wireless channel) to check if it is free. If the medium is busy, it waits for it to become idle.
2. **Random Backoff**: Once the medium is clear, the device does not transmit immediately. Instead, it waits for a random amount of time (backoff time) to reduce the chances of collision if multiple devices are waiting to transmit.
3. **Transmission**: After the random backoff period, if the medium is still clear, the device transmits the data.
4. **Acknowledgment (Optional)**: After receiving the data, the receiving device may send an acknowledgment (ACK) to the sender to confirm that the data was received correctly.

### CSMA/CA Process Diagram:

![csma/cd](https://media.geeksforgeeks.org/wp-content/uploads/20200420165042/article9.png)

> Based on the marks write accordingly

### Key Characteristics of CSMA/CA:

1. **Collision Avoidance**: Devices back off before transmitting to avoid collisions, unlike CSMA/CD, which detects collisions after they occur.
2. **Acknowledgment**: Receivers may send acknowledgment packets to confirm data reception, improving reliability.
3. **Random Backoff**: Introduces a random delay to ensure that multiple devices do not transmit simultaneously after sensing an idle channel.

### Advantages of CSMA/CA:

- **Minimizes collisions**: By avoiding collisions instead of detecting them, CSMA/CA ensures more reliable data transmission, especially in wireless networks.
- **Efficient in wireless communication**: As collisions are costly in terms of bandwidth in wireless networks, CSMA/CA helps optimize network performance.

### Disadvantages of CSMA/CA:

- **Overhead**: The random backoff and acknowledgment mechanism introduces additional delays, which may reduce the overall throughput of the network.
- **Not completely collision-free**: While CSMA/CA reduces the chances of collisions, they can still occur, especially in highly congested networks.

---

## 4. Write and explain about various multiple access protocols.

### Multiple Access Protocols

Multiple access protocols are techniques used to coordinate data transmission over a shared communication medium. These protocols ensure that multiple devices can send and receive data efficiently, minimizing collisions. Here are some common multiple access protocols:

![](https://javatpoint-images.s3.eu-north-1.amazonaws.com/tutorial/computer-network/images/multiple-access-protocol.png)

Following are the types of multiple access protocol that is subdivided into the different process as:

### Random Access Protocols

In this protocol, all the station has the equal priority to send the data over a channel.

#### 1. ALOHA

- **Pure ALOHA**: Devices send data whenever they have it, and if a collision occurs, they wait a random time before retransmitting.
- **Slotted ALOHA**: Time is divided into slots, and devices can only transmit at the start of a slot, reducing the likelihood of collisions.

#### 2. Carrier Sense Multiple Access (CSMA)

- **CSMA**: Devices first listen to the channel (carrier sense) before sending data. If the channel is busy, they wait; otherwise, they transmit.
- **CSMA/CD (Collision Detection)**: Detects collisions during transmission.
  - **Example**: _Wired Ethernet_
- **CSMA/CA (Collision Avoidance)**: Tries to prevent collisions by waiting before sending data.
  - **Example**: _Wi-Fi_

### Controlled Access Protocols

In the controlled access method, each station interacts and decides to send a data frame by a particular station approved by all other stations. It means that a single station cannot send the data frames unless all other stations are not approved.

#### 1. Polling

- A central controller (polling master) sequentially polls each device to check if it has data to send. This method ensures orderly access but can introduce delays due to the time taken to poll each device.

#### 2. Reservation

- Devices make reservations for transmission slots in advance. This method can be more efficient as it avoids collisions, but it requires mechanisms for devices to make and manage reservations.

#### 3. Token Passing

- A token (a special data packet) is passed around the network. Only the device holding the token can transmit, eliminating collisions.

### Channelization Protocols

It is a channelization protocol that allows the total usable bandwidth in a shared channel to be shared across multiple stations based on their time, distance and codes. It can access all the stations at the same time to send the data frames to the channel.

#### 1. Time Division Multiple Access (TDMA)

- Divides time into slots, with each device assigned a specific slot to transmit. This avoids collisions but requires precise synchronization.

#### 2. Frequency Division Multiple Access (FDMA)

- Divides the available bandwidth into frequency channels, and each device gets a unique frequency. Devices can transmit simultaneously but on different frequencies.
  - **Example**: _Analog FM radio_

#### 3. Code Division Multiple Access (CDMA)

- Devices transmit using unique codes. Multiple devices can transmit simultaneously, and receivers use these codes to decode specific transmissions.

---

<br>
<div align='center'>
  <a href='https://github.com/omteja04' target="_blank">
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
