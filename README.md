#  Queue Implementation in C++

This project provides two fundamental implementations of the **Queue** data structure in C++: one using a **static array** and the other using a **linked list**. The queue operates on a First-In-First-Out (FIFO) basis, allowing insertion from the rear and deletion from the front.

##  File Structure

```

QueueImplementation/
├── queueImplementationUsingArray.cpp         # Queue using static array
└── queueImplementationUsingLinkedlist.cpp    # Queue using dynamic linked list

````

##  Features

- Enqueue (insertion) and Dequeue (deletion)
- Front element display
- Check if queue is full (array) or empty
- Dynamic memory allocation in linked list version
- Simple and readable code with comments

##  Technologies Used

- C++
- Arrays and Linked Lists
- Console-based input/output

##  How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/Vishnu-8349/QueueImplementation.git
   cd QueueImplementation
````

2. Compile and run the **array-based queue**:

   ```bash
   g++ queueImplementationUsingArray.cpp -o queue_array
   ./queue_array
   ```

3. Compile and run the **linked list-based queue**:

   ```bash
   g++ queueImplementationUsingLinkedlist.cpp -o queue_linkedlist
   ./queue_linkedlist
   ```

##  Learning Outcomes

* Understand the difference between static and dynamic queue implementations
* Learn how memory constraints affect data structure design
* Practice core C++ skills in structuring queue operations

##  License
