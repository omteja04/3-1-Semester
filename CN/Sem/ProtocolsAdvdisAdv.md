### **Sliding Window Protocol Overview**

Sliding window protocols are methods for managing data transmission over a network. They ensure reliable delivery by using acknowledgments and retransmissions. These protocols are commonly used in the **Data Link Layer** and the **Transport Layer**.

---

### **Stop-and-Wait Protocol**

The simplest form of a sliding window protocol, where the sender sends one frame and waits for its acknowledgment before sending the next frame.

#### **Advantages**:

1. **Simplicity**: Easy to implement because only one frame is in transit at any time.
2. **Error Control**: Simple error-checking mechanism as there is only one frame to track.

#### **Disadvantages**:

1. **Inefficiency**: Wastes a lot of time waiting for acknowledgments, especially in high-latency networks (low utilization of bandwidth).
2. **Throughput**: Limited throughput as only one frame is transmitted at a time.

---

### **Sliding Window Protocols**

Sliding window protocols allow multiple frames to be sent before requiring acknowledgment. They use a **window size** to determine the maximum number of unacknowledged frames that can be in transit.

#### **1-Bit Sliding Window Protocol**

This is essentially a **Stop-and-Wait protocol** using a single acknowledgment bit to alternate between `0` and `1`.

- **Behavior**: Sender transmits one frame and waits for an acknowledgment with the expected bit value.
- **Use Case**: Suitable for low-latency, low-bandwidth networks.

#### **Advantages**:

- Simpler than Go-Back-N or Selective Repeat.
- Minimal overhead for tracking sequence numbers.

#### **Disadvantages**:

- Suffers from the same inefficiency as Stop-and-Wait.

---

### **Go-Back-N Protocol**

Allows the sender to send up to **N frames** before needing an acknowledgment. If an error occurs, the sender retransmits all frames starting from the last acknowledged frame.

#### **Mechanism**:

1. Sender maintains a **window** of N frames.
2. If a frame is lost or damaged, all frames starting from the erroneous frame are retransmitted.
3. Receiver discards frames received out of order.

#### **Advantages**:

1. **Higher Throughput**: Utilizes the network better than Stop-and-Wait.
2. **Simpler Receiver**: Receiver does not need to buffer out-of-order frames.

#### **Disadvantages**:

1. **Retransmission Overhead**: Resends many frames unnecessarily if errors occur, even if some frames after the error were correctly received.
2. **Inefficient for High Error Rates**: Performance drops in noisy networks.

---

### **Selective Repeat Protocol**

Instead of retransmitting all frames after an error (as in Go-Back-N), only the erroneous or lost frames are retransmitted.

#### **Mechanism**:

1. Both sender and receiver maintain their own sliding windows.
2. The receiver buffers out-of-order frames and sends acknowledgments for individual frames.
3. The sender retransmits only frames for which no acknowledgment has been received.

#### **Advantages**:

1. **Efficient Use of Bandwidth**: Only retransmits the frames that are lost or erroneous.
2. **Better for High Latency Networks**: Reduces retransmission overhead compared to Go-Back-N.

#### **Disadvantages**:

1. **Complexity**: More complex to implement due to the need for buffering at the receiver.
2. **Receiver Overhead**: Receiver must reorder frames before delivering them to the higher layer.

---

### **Comparison Table**

| **Protocol**             | **Efficiency** | **Error Handling**                | **Advantages**                                  | **Disadvantages**                                |
| ------------------------ | -------------- | --------------------------------- | ----------------------------------------------- | ------------------------------------------------ |
| **Stop-and-Wait**        | Low            | Retransmit one frame at a time    | Simple, minimal overhead                        | High latency, poor bandwidth utilization         |
| **1-Bit Sliding Window** | Low            | Retransmit one frame at a time    | Simpler than multi-bit windows                  | Similar inefficiency to Stop-and-Wait            |
| **Go-Back-N**            | Medium         | Retransmit all frames after error | High throughput compared to Stop-and-Wait       | Wastes bandwidth on unnecessary retransmissions  |
| **Selective Repeat**     | High           | Retransmit only erroneous frames  | Most efficient for noisy, high-latency networks | Complexity in implementation and receiver design |

---

### **Use Cases**

1. **Stop-and-Wait**: Small, simple networks with low latency and low error rates.
2. **Go-Back-N**: Networks with moderate error rates where retransmission overhead is acceptable.
3. **Selective Repeat**: High-performance or noisy networks where minimizing retransmissions is critical.
