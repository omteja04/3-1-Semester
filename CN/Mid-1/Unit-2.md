<!--
  Author: omteja04
  Created on: 01-09-2024 15:05:38
  Description: Unit-2
-->

- [1. Explain the working of unrestricted simplex protocol. What are the restrictions placed on other protocols?](#1-explain-the-working-of-unrestricted-simplex-protocol-what-are-the-restrictions-placed-on-other-protocols)
  - [Working of Unrestricted Simplex Protocol](#working-of-unrestricted-simplex-protocol)
    - [Working](#working)
    - [Characteristics](#characteristics)
    - [Design](#design)
    - [Algorithm of Simplex Protocol for Sender Site](#algorithm-of-simplex-protocol-for-sender-site)
    - [Algorithm of Simplex Protocol for Receiver Site](#algorithm-of-simplex-protocol-for-receiver-site)
    - [Flow Diagram](#flow-diagram)
  - [Restrictions on Other Protocols](#restrictions-on-other-protocols)
    - [1. Acknowledgment and Feedback](#1-acknowledgment-and-feedback)
    - [2. Error Detection and Correction](#2-error-detection-and-correction)
    - [3. Flow Control](#3-flow-control)
    - [4. Collision Avoidance and Handling](#4-collision-avoidance-and-handling)
    - [5. Two-Way Communication](#5-two-way-communication)
- [2. Discuss the working principle of a One-Bit Sliding Window Protocol with an example.](#2-discuss-the-working-principle-of-a-one-bit-sliding-window-protocol-with-an-example)
  - [One-Bit Sliding Window Protocol: Working Principle](#one-bit-sliding-window-protocol-working-principle)
    - [Working Principle](#working-principle)
    - [Example](#example)
  - [Pseudo-code](#pseudo-code)
    - [Sender Side Pseudo-code](#sender-side-pseudo-code)
    - [Receiver Side Pseudo-code](#receiver-side-pseudo-code)
- [3. What is meant by Error in the Data Link Layer? Discuss about Error Detection and Correction in Data Link Layer.](#3-what-is-meant-by-error-in-the-data-link-layer-discuss-about-error-detection-and-correction-in-data-link-layer)
  - [Error in the Data Link Layer](#error-in-the-data-link-layer)
  - [Types of Errors](#types-of-errors)
  - [Error Detection](#error-detection)
  - [Error Correction](#error-correction)
- [4. Elaborate on the design issues of the Data Link Layer.](#4-elaborate-on-the-design-issues-of-the-data-link-layer)
  - [1. Services Provided to the Network Layer](#1-services-provided-to-the-network-layer)
  - [2. Frame Synchronization](#2-frame-synchronization)
  - [3. Flow Control](#3-flow-control-1)
  - [4. Error Control](#4-error-control)
- [5. Explain Error Detection Techniques in the Data Link Layer](#5-explain-error-detection-techniques-in-the-data-link-layer)
  - [Errors](#errors)
  - [Types of Errors](#types-of-errors-1)
  - [1. Parity Check](#1-parity-check)
  - [2. Cyclic Redundancy Check (CRC)](#2-cyclic-redundancy-check-crc)
  - [3. Checksum](#3-checksum)
- [6. Compare and contrast the Go-Back-N ARQ Protocol with Selective-Repeat ARQ.](#6-compare-and-contrast-the-go-back-n-arq-protocol-with-selective-repeat-arq)
  - [Difference Between Go-Back-N and Selective Repeat Protocol](#difference-between-go-back-n-and-selective-repeat-protocol)
- [7. Draw the frame format of HDLC and explain its configuration and transfer modes.](#7-draw-the-frame-format-of-hdlc-and-explain-its-configuration-and-transfer-modes)
  - [HDLC Frame](#hdlc-frame)
  - [Transfer Modes](#transfer-modes)
  - [Types of HDLC Frames](#types-of-hdlc-frames)
- [8. Explain framing and transition phases of Point-to-Point Protocol.](#8-explain-framing-and-transition-phases-of-point-to-point-protocol)
  - [Point to Point Protocol Frame Format](#point-to-point-protocol-frame-format)
  - [Transition phases of Point to Point protocol](#transition-phases-of-point-to-point-protocol)
- [9. Write in detail about the CRC algorithm with an example.](#9-write-in-detail-about-the-crc-algorithm-with-an-example)
  - [Qualities of CRC](#qualities-of-crc)
  - [Process](#process)
  - [Example](#example-1)
- [10. Briefly explain about Flow Control Mechanism in the Data Link Layer.](#10-briefly-explain-about-flow-control-mechanism-in-the-data-link-layer)
  - [Flow Control Mechanism in the Data Link Layer](#flow-control-mechanism-in-the-data-link-layer)
  - [Approaches of Flow Control](#approaches-of-flow-control)
  - [Flow Control Techniques in Data Link Layer](#flow-control-techniques-in-data-link-layer)

## 1. Explain the working of unrestricted simplex protocol. What are the restrictions placed on other protocols?

### Working of Unrestricted Simplex Protocol

The Unrestricted Simplex Protocol (USP) is a straightforward communication protocol used for one-way data transmission. Here’s how it operates:

#### Working

1. **Sender Side**:

   - The sender prepares the data to be transmitted.
   - It then sends the data to the receiver without waiting for any acknowledgment or feedback.

2. **Receiver Side**:
   - The receiver continuously listens for incoming data.
   - Upon receiving data, it processes the data (e.g., stores it, displays it) and then waits for the next data transmission.

#### Characteristics

- **One-Way Communication**: Data flows in only one direction—from sender to receiver.
- **No Feedback Mechanism**: The sender does not receive any acknowledgment or error feedback from the receiver.
- **Simplicity**: The protocol is simple due to its lack of error checking, flow control, or acknowledgment mechanisms.

#### Design

![](https://www.tutorialspoint.com/assets/questions/media/17624/44_1.jpg)

#### Algorithm of Simplex Protocol for Sender Site

```cpp
while (true) {
    WaitForEvent(); // Wait for availability of packet
    if (EventFrameAvailable()) {
        GetDataFromNetworkLayer();
        MakeFrame();
        SendFrameToPhysicalLayer();
    }
}
```

#### Algorithm of Simplex Protocol for Receiver Site

```cpp
while (true) {
  WaitForEvent(); // Wait for arrival of frame
  if (EventFrameArrival()) {
      ReceiveFrameFromPhysicalLayer();
      ExtractData();
      DeliverDataToNetworkLayer();
  }
}
```

#### Flow Diagram

![](https://www.tutorialspoint.com/assets/questions/media/17624/44_2.jpg)

### Restrictions on Other Protocols

Other communication protocols often address limitations and restrictions that are inherent in the Unrestricted Simplex Protocol:

#### 1. Acknowledgment and Feedback

- **Protocols**: e.g., Stop-and-Wait, Go-Back-N, Selective Repeat.
- **Restriction**: Unlike USP, these protocols include mechanisms for acknowledgment and feedback to ensure data integrity and successful delivery.

#### 2. Error Detection and Correction

- **Protocols**: e.g., Automatic Repeat reQuest (ARQ) protocols.
- **Restriction**: Protocols that include error detection and correction mechanisms to handle data corruption and retransmission.

#### 3. Flow Control

- **Protocols**: e.g., TCP (Transmission Control Protocol).
- **Restriction**: These protocols manage the rate of data transmission to prevent overwhelming the receiver and to handle varying network speeds.

#### 4. Collision Avoidance and Handling

- **Protocols**: e.g., CSMA/CD (Carrier Sense Multiple Access with Collision Detection), CSMA/CA (Carrier Sense Multiple Access with Collision Avoidance).
- **Restriction**: Protocols that handle situations where multiple devices might attempt to communicate simultaneously, thereby managing collisions and ensuring fair access to the channel.

#### 5. Two-Way Communication

- **Protocols**: e.g., TCP, HTTP.
- **Restriction**: Many protocols support bidirectional communication, where both the sender and receiver can exchange messages and acknowledgments.

---

## 2. Discuss the working principle of a One-Bit Sliding Window Protocol with an example.

### One-Bit Sliding Window Protocol: Working Principle

The One-Bit Sliding Window Protocol is a basic yet effective communication protocol used in networking to manage the flow of data between two devices (sender and receiver). It ensures reliable data transmission over an unreliable communication channel by incorporating error detection, acknowledgment, and retransmission mechanisms.

#### Working Principle

1. **Sliding Window Concept**:

   - The "sliding window" in this protocol has a size of 1 for both the sender and the receiver.
   - The sender can only send one frame at a time and must wait for an acknowledgment (ACK) from the receiver before sending the next frame.
   - The receiver expects frames in a specific order, starting with sequence number 0 and alternating between 0 and 1 for subsequent frames.

2. **Sequence Numbers**:

   - Since the window size is 1, only two sequence numbers are used: `0` and `1`. This is because the protocol alternates between sending frames with sequence numbers 0 and 1.

3. **Acknowledgment and Retransmission**:

   - After sending a frame, the sender waits for an ACK from the receiver.
   - If the correct ACK is received (matching the next expected sequence number), the sender sends the next frame.
   - If no ACK is received within a specified timeout period, the sender assumes the frame was lost or corrupted and retransmits the same frame.

4. **Error Handling**:
   - If the receiver detects an error (e.g., a frame is corrupted or out of order), it discards the frame and does not send an ACK.
   - The sender, upon not receiving an ACK within the timeout, will resend the frame until it receives the correct ACK.

#### Example

![](https://image1.slideserve.com/1718567/sliding-window-protocols1-n.jpg)

- **Handling a Lost Frame**:
  - Suppose `Frame 1` is lost during transmission. The sender waits for ACK `0` but does not receive it within the timeout period.
  - The sender retransmits `Frame 1`. The receiver, still expecting `Frame 1`, successfully receives it this time and sends ACK `0`.

### Pseudo-code

#### Sender Side Pseudo-code

```cpp
// Sender Side

int frame_number = 0;
bool ack_received = true;

while (data_to_send) {
    if (ack_received) {
        Frame frame = createFrame(frame_number);
        sendFrame(frame);
        ack_received = false;
        startTimer();
    }

    if (receiveAck(int ack_number)) {
        if (ack_number == (frame_number + 1) % 2) {
            ack_received = true;
            frame_number = (frame_number + 1) % 2;
        }
    } else if (timeoutOccurs()) {
        sendFrame(frame);
        startTimer();
    }
}

terminateSender();
```

#### Receiver Side Pseudo-code

```cpp
// Receiver Side

int expected_frame = 0;

while (receiving_frames) {
    Frame frame = receiveFrame();

    if (frame.sequence_number == expected_frame) {
        processFrame(frame);
        int ack_number = (expected_frame + 1) % 2;
        sendAck(ack_number);
        expected_frame = (expected_frame + 1) % 2;
    } else {
        sendAck(expected_frame);
    }
}

terminateReceiver();
```

---

## 3. What is meant by Error in the Data Link Layer? Discuss about Error Detection and Correction in Data Link Layer.

### Error in the Data Link Layer

Errors in the Data Link Layer refer to issues that occur during the transmission of data frames between devices over a network. These errors can arise due to various reasons such as signal degradation, interference, noise, or hardware malfunctions. The Data Link Layer is responsible for ensuring that data is transmitted reliably over the physical layer by detecting and correcting errors that may occur.

### Types of Errors

1. **Single-bit error**: Only one bit in the data unit changes (e.g., from 0 to 1 or vice versa).
2. **Burst error**: More than one bit in the data unit is changed. Burst errors usually happen when the transmission is disrupted for a short period.

### Error Detection

Error detection involves identifying if errors have occurred in transmitted data. The Data Link Layer uses several techniques for error detection:

1. **Parity Check**:

   - **Description**: Adds an extra bit to the data, called the parity bit. For even parity, the total number of 1s in the data plus the parity bit is even. For odd parity, it is odd.
   - **Usage**: Simple and used for detecting single-bit errors.
   - **Limitations**: Cannot detect all types of errors, such as two-bit errors.

2. **Checksums**:

   - **Description**: Calculates a checksum value from the data, and the sender includes this checksum with the data. The receiver calculates the checksum of the received data and compares it with the sent checksum.
   - **Usage**: Used in various protocols such as Ethernet and IP.
   - **Limitations**: More robust than parity but still not foolproof for all types of errors.

3. **Cyclic Redundancy Check (CRC)**:
   - **Description**: Uses polynomial division to generate a CRC value, which is appended to the data frame. The receiver performs the same division to check for errors.
   - **Usage**: Provides strong error detection capabilities and is widely used in networking protocols like Ethernet and Wi-Fi.
   - **Limitations**: Excellent at detecting errors but requires computation resources.

### Error Correction

Error correction involves not only detecting errors but also correcting them to ensure data integrity. The Data Link Layer uses several methods for error correction:

1. **Automatic Repeat reQuest (ARQ)**:

   - **Description**: A protocol where the sender retransmits the data if an error is detected by the receiver. There are different ARQ protocols:
     - **Stop-and-Wait ARQ**: Sender waits for an acknowledgment (ACK) for each frame before sending the next one.
     - **Go-Back-N ARQ**: Sender can send multiple frames before needing an acknowledgment but must retransmit all frames from the erroneous frame onwards if an error is detected.
     - **Selective Repeat ARQ**: Similar to Go-Back-N but only retransmits the specific erroneous frames.
   - **Usage**: Provides a reliable data transfer by ensuring retransmission of erroneous frames.
   - **Limitations**: Can lead to increased delays and reduced throughput due to retransmissions.

2. **Forward Error Correction (FEC)**:
   - **Description**: Adds redundant data to the original data so that errors can be corrected without needing retransmission. Examples include:
     - **Hamming Code**: Detects and corrects single-bit errors and detects two-bit errors.
     - **Reed-Solomon Code**: Used for correcting multiple errors in blocks of data.
   - **Usage**: Useful in scenarios where retransmission is not feasible, such as satellite communication.
   - **Limitations**: Increases the amount of data transmitted due to redundancy.

---

## 4. Elaborate on the design issues of the Data Link Layer.

The Data Link Layer, which is the second layer in the OSI (Open Systems Interconnection) model, is responsible for ensuring reliable data transfer between two physically connected devices. The design of the Data Link Layer involves addressing several key issues to ensure effective communication. Here are the main design issues:

### 1. Services Provided to the Network Layer

The data link layer acts as a service interface to the network layer. Its primary service is to transfer data from the network layer on the sending machine to the network layer on the destination machine, via the Data Link Layer (DLL).

It provides three types of services:

- **Unacknowledged and Connection-less Services**:
  - The sender machine sends independent frames without any acknowledgment from the receiver.
  - No logical connection is established.
- **Acknowledged and Connection-less Services**:

  - No logical connection is established between sender and receiver.
  - Each frame is acknowledged by the receiver.
  - If a frame doesn't reach the receiver within a specific time interval, it must be retransmitted.
  - Commonly used in wireless systems.

- **Acknowledged and Connection-Oriented Services**:
  - A logical connection is established between sender and receiver before data is transmitted.
  - Each frame is numbered so the receiver can ensure that all frames have arrived exactly once.

### 2. Frame Synchronization

The source machine sends data in the form of blocks called frames to the destination machine. It is crucial to identify the start and end of each frame so that the destination machine can recognize them.

### 3. Flow Control

Flow control ensures that the source machine does not send data frames faster than the destination machine can process them. This prevents overflow at the receiver end.

### 4. Error Control

Error control helps prevent duplication of frames. Errors introduced during transmission must be detected and corrected at the destination machine.

---

## 5. Explain Error Detection Techniques in the Data Link Layer

### Errors

When bits are transmitted over the computer network, they are subject to get corrupted due to interference and network problems. The corrupted bits leads to spurious data being received by the destination and are called errors.

### Types of Errors

**Single bit error** − In the received frame, only one bit has been corrupted, i.e. either changed from 0 to 1 or from 1 to 0.
![](https://www.tutorialspoint.com/assets/questions/media/15427/15_1.jpg)
**Multiple bits error** − In the received frame, more than one bits are corrupted.
![](https://www.tutorialspoint.com/assets/questions/media/15427/15_2.jpg)
**Burst error** − In the received frame, more than one consecutive bits are corrupted.
![](https://www.tutorialspoint.com/assets/questions/media/15427/15_3.jpg)
Error detection techniques in the Data Link Layer are used to identify errors that may occur during the transmission of data frames over a network. These techniques ensure data integrity by allowing the receiver to detect if any part of the data has been corrupted during transmission. Some common error detection techniques include:

### 1. Parity Check

A parity bit is added to the data frame to make the total number of 1s either even (even parity) or odd (odd parity).

- **Operation**:
  - Even Parity: If the number of 1s in the data is odd, a parity bit of 1 is added; if even, a parity bit of 0 is added.
  - Odd Parity: A parity bit is set to make the number of 1s odd.
- **Limitation**: It can only detect odd numbers of bit errors but cannot detect even numbers of errors.

### 2. Cyclic Redundancy Check (CRC)

CRC is a more robust error detection technique that treats the data frame as a polynomial and divides it by a predefined generator polynomial.

- **Operation**:
  - A remainder is calculated by dividing the data frame (considered as binary numbers) by a generator polynomial.
  - The remainder (CRC code) is appended to the data frame.
  - At the receiving end, the receiver performs the same division and checks if the remainder matches. If it does not match, the frame is corrupted.
- **Advantage**: CRC can detect burst errors and is highly reliable for detecting various types of errors.

### 3. Checksum

A checksum is a value calculated based on the sum of the bits in the data frame.

- **Operation**:
  - The sender computes the sum of all data segments (often 16 or 32-bit blocks) and sends the result as a checksum.
  - The receiver performs the same calculation and compares the received checksum with its computed value. Any mismatch indicates an error.
- **Advantage**: Checksum is simple to implement but is less robust than CRC.
- **Limitation**: It may fail to detect some specific types of errors (e.g., if two bits are swapped).

---

## 6. Compare and contrast the Go-Back-N ARQ Protocol with Selective-Repeat ARQ.

Go-Back-N Protocol and Selective Repeat Protocol are the types of sliding window protocols. The main difference between these two protocols is that after finding the suspect or damage in sent frames go-back-n protocol re-transmits all the frames whereas the selective repeat protocol re-transmits only the frame which is damaged.

### Difference Between Go-Back-N and Selective Repeat Protocol

| **Go-Back-N Protocol**                                                                                            | **Selective Repeat Protocol**                                                                                                                                     |
| ----------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Retransmits all frames from the lost frame to the last transmitted frame.                                         | In Go-Back-N Protocol, if the sent frame are find suspected then all the frames are re-transmitted from the lost packet to the last packet transmitted.           |
| Sender window size of Go-Back-N Protocol is N.                                                                    | Sender window size of selective Repeat protocol is also N.                                                                                                        |
| Receiver window size of Go-Back-N Protocol is 1.                                                                  | Receiver window size of selective Repeat protocol is N.                                                                                                           |
| Go-Back-N Protocol is less complex.                                                                               | Selective Repeat protocol is more complex.                                                                                                                        |
| No sorting required in Go-Back-N Protocol                                                                         | Receiver must sort out-of-order frames                                                                                                                            |
| Type of Acknowledgement is cumulative.                                                                            | Type of Acknowledgement is individual.                                                                                                                            |
| In Go-Back-N Protocol, Out-of-Order packets are NOT Accepted (discarded) and the entire window is re-transmitted. | In selective Repeat protocol, Out-of-Order packets are Accepted.                                                                                                  |
| In Go-Back-N Protocol, if Receives a corrupt packet, then also, the entire window is re-transmitted.              | In selective Repeat protocol, if Receives a corrupt packet, it immediately sends a negative acknowledgement and hence only the selective packet is retransmitted. |
| Efficiency of Go-Back-N Protocol is \( \frac{N}{1 + 2a} \)                                                        | Efficiency of selective Repeat protocol is also \( \frac{N}{1 + 2a} \)                                                                                            |

---

## 7. Draw the frame format of HDLC and explain its configuration and transfer modes.

High-level Data Link Control (HDLC) is a group of communication protocols of the data link layer for transmitting data between network points or nodes. Since it is a data link protocol, data is organized into frames. A frame is transmitted via the network to the destination that verifies its successful arrival. It is a bit - oriented protocol that is applicable for both point - to - point and multipoint communications.

### HDLC Frame

HDLC is a bit - oriented protocol where each frame contains up to six fields. The structure varies according to the type of frame. The fields of a HDLC frame are:
![](https://www.tutorialspoint.com/assets/questions/media/15399/hdlc_frame.jpg)

- Flag − It is an 8-bit sequence that marks the beginning and the end of the frame. The bit pattern of the flag is 01111110.

- Address − It contains the address of the receiver. If the frame is sent by the primary station, it contains the address(es) of the secondary station(s). If it is sent by the secondary station, it contains the address of the primary station. The address field may be from 1 byte to several bytes.

- Control − It is 1 or 2 bytes containing flow and error control information.

- Payload − This carries the data from the network layer. Its length may vary from one network to another.

- FCS (Frame Check Sequence) − It is a 2 byte or 4 bytes frame check sequence for error detection. The standard code used is CRC (cyclic redundancy code)

### Transfer Modes

HDLC supports two types of transfer modes, normal response mode and asynchronous balanced mode.

**Normal Response Mode (NRM)** − Here, two types of stations are there, a primary station that send commands and secondary station that can respond to received commands. It is used for both point - to - point and multipoint communications.
![](https://www.tutorialspoint.com/assets/questions/media/15399/transfer_modes.jpg)
**Asynchronous Balanced Mode (ABM)** − Here, the configuration is balanced, i.e. each station can both send commands and respond to commands. It is used for only point - to - point communications.
![](https://www.tutorialspoint.com/assets/questions/media/15399/abm.jpg)

### Types of HDLC Frames

There are three types of HDLC frames. The type of frame is determined by the control field of the frame:
![](https://www.tutorialspoint.com/assets/questions/media/15399/hdlc_frame2.jpg)

- **I-frame** − I-frames or Information frames carry user data from the network layer. They also include flow and error control information that is piggybacked on user data. The first bit of control field of I-frame is 0.

- **S-frame** − S-frames or Supervisory frames do not contain information field. They are used for flow and error control when piggybacking is not required. The first two bits of control field of S-frame is 10.

- **U-frame** − U-frames or Un-numbered frames are used for myriad miscellaneous functions, like link management. It may contain an information field, if required. The first two bits of control field of U-frame is 11.

---

## 8. Explain framing and transition phases of Point-to-Point Protocol.

Point to Point Protocol is one of the communication protocols of the Data Link Layer which transmits multi-protocol data between two directly connected computers. It is a byte-oriented protocol that is widely employed in broadband communications having quite heavy loads and high speeds. The data is communicated in frames.

### Point to Point Protocol Frame Format

![](https://files.codingninjas.in/article_images/point-to-point-protocol-2-1655034312.webp)
The fields of the Pint to Point Protocol Frame are as follows:

**Flag Field**: The Flag Field marks the starting and the ending of the frame. The flag field has a size of 1-byte. It is somehow similar to the HDLC flag.

**Address Field**: The Address field is basically a broadcast address. It has a size of 1-byte and stores a constant value that is, 11111111. These eight 1s represent a broadcast message.

**Control Field**: The control field is a compulsory field where protocol supports flow and error control mechanisms. This field basically uses the format of U-frame i.e., Unnumbered frame in HDLC. In Point to Point Protocol, this field is set to 1 byte i.e., 00000011 binary value.

**Protocol Field**: It defines what is to be carried out in the data field. This field basically identifies the network protocol of the datagram. It usually identifies the sort of packet in the data field i.e., what exactly is being carried in the data field. This field has a size of 1 or 2 bytes.

**Data Field**: It usually stores the upper layer datagram. The Network layer datagram is particularly encapsulated in this field for regular PPP data frames. The length of this field varies.

**FCS Field(Frame Check Sequence)**: This field usually stores the checksum simply for the identification of errors. It can be either 2 or 4 bytes in size. It is also calculated with address, control, protocol, and even information fields. Characters are added to the frame for control and handling of errors.

### Transition phases of Point to Point protocol

![](https://media.geeksforgeeks.org/wp-content/uploads/20200810233625/TTTTERR.png)

1. **Dead**:

   - The link is inactive. Carrier detection signals, when the physical layer is ready. If the connection ends, it returns to this phase.

2. **Establish**:

   - The link is initiated once a peer is detected. LCP frames negotiate configuration parameters. If successful, the connection moves to the next phase.

3. **Authenticate** (optional):

   - Authentication happens if configured, using protocols like PAP or CHAP. If authentication is successful, the link moves forward.

4. **Network**:

   - NCP packets configure network-layer protocols (like IP). Network layer agreements are established to allow data exchange.

5. **Open**:

   - Data transfer occurs. The connection stays in this phase until either endpoint wants to terminate.

6. **Terminate**:
   - Either endpoint can request to close the link by exchanging LCP terminate packets.

---

## 9. Write in detail about the CRC algorithm with an example.

The Cyclic Redundancy Checks (CRC) is the most powerful method for Error-Detection and Correction. It is given as a `k`bit message and the transmitter creates an `(n – k)` bit sequence called frame check sequence. The out coming frame, including `n` bits, is precisely divisible by some fixed number.

### Qualities of CRC

- It should have accurately one less bit than the divisor.

- Joining it to the end of the data unit should create the resulting bit sequence precisely divisible by the divisor.
  ![](https://www.tutorialspoint.com/assets/questions/media/51913/Page-39-Image-65.jpg)

### Process

- A string of n 0s is added to the data unit. The number n is one smaller than the number of bits in the fixed divisor.

- The new data unit is divided by a divisor utilizing a procedure known as binary division; the remainder appearing from the division is CRC.

- The CRC of n bits interpreted in phase 2 restores the added 0s at the end of the data unit.

### Example

The message \( D = 1010001101 \) (10 bits)  
The predetermined polynomial \( P = 110101 \) (6 bits)  
The Frame Check Sequence (FCS) \( R \) is to be calculated and is 5 bits.  
Thus, \( n = 15 \), \( k = 10 \), and \( (n - k) = 5 \).

To generate the message, append 5 zeros (equal to the number of bits in \( R \)) to \( D \), making it:

\[
\text{Message to be transmitted} = D \times 2^{(n - k)} = 101000110100000
\]

Now divide this product by the predetermined polynomial \( P = 110101 \) to compute the remainder.

![](https://www.tutorialspoint.com/assets/questions/media/51913/Page-40-Image-67.jpg)
The remainder is inserted to \[D \times 2^{5}\] to provide \(T = 101000110101110\) that is sent.

Suppose that there are no errors, and the receiver gets \(T\) perfect. The received frame is divided by \(P\).

![](https://www.tutorialspoint.com/assets/questions/media/51913/Page-40-Image-68.jpg)
Because of no remainder, there are no errors.

---

## 10. Briefly explain about Flow Control Mechanism in the Data Link Layer.

### Flow Control Mechanism in the Data Link Layer

Flow control in the Data Link Layer refers to the process of managing the rate of data transmission between a sender and a receiver to ensure that the receiver is not overwhelmed with more data than it can process or store. Without proper flow control, the receiver’s buffer could overflow, leading to data loss. Flow control helps maintain a steady communication flow and ensures data integrity.

### Approaches of Flow Control

Flow control can be broadly classified into two categories
![](https://www.tutorialspoint.com/assets/questions/media/15421/flow_control.jpg)

- **Feedback based Flow Control**: In these protocols, the sender sends frames after it has received acknowledgments from the user. This is used in the data link layer.

- **Rate based Flow Control**: These protocols have built in mechanisms to restrict the rate of transmission of data without requiring acknowledgment from the receiver. This is used in the network layer and the transport layer.

### Flow Control Techniques in Data Link Layer

Data link layer uses feedback based flow control mechanisms. There are two main techniques
![](https://www.tutorialspoint.com/assets/questions/media/15421/data_link_layer.jpg)

**Stop-and-Wait Flow Control**:

In this method, the sender transmits one frame and waits for an acknowledgment (ACK) from the receiver before sending the next frame. This ensures that the receiver has received and processed the frame before the sender sends more data.

- **Advantages**:
  - Simple to implement.
  - Guarantees that the receiver is ready to receive the next frame.
- **Disadvantages**:

  - Inefficient for high-latency or high-bandwidth networks because the sender remains idle while waiting for the acknowledgment.

`Example:`

- The **Stop-and-Wait ARQ (Automatic Repeat Request)** protocol is an example of stop-and-wait flow control.

**Sliding Window Flow Control**:

In this method, the sender can send multiple frames before needing an acknowledgment. A "window" of frames is maintained, and the sender is allowed to transmit up to a certain number of frames within this window. After sending a frame, the sender moves the window forward, and the receiver sends acknowledgments as it processes frames. This approach makes more efficient use of the available bandwidth.

- **Advantages**:
  - More efficient than stop-and-wait because the sender doesn’t have to wait for an acknowledgment after every frame.
  - Allows continuous data transmission until the window is full.
- **Disadvantages**:
  - More complex to implement due to the management of the window.

`Example:`

- **Go-Back-N ARQ** and **Selective Repeat ARQ** are examples of protocols using sliding window flow control.

---

<br>
<div align='center'>
  <a href='https://github.com/omteja04'>
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
