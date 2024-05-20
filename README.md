
# Queue Scheduling Application

## Overview

This project demonstrates the use of the Queue data structure in C++ to implement a scheduling system. The application creates three separate queues, enqueues several tasks with different burst times, and then performs scheduling based on the "First Come First Serve" (FCFS) algorithm.

## Features

- **Queue Operations:**
  - Create a queue.
  - Enqueue tasks with specific burst times and IDs.
  - Display the contents of the queue.

- **Scheduling Algorithms:**
  - First Come First Serve (FCFS) scheduling.
  - Custom scheduling across multiple queues.

## Implementation Details

### Code Explanation

The main file of the project (`main.cpp`) includes the `Queue.h` header file and demonstrates the following:

1. **Queue Creation:**
   - Three separate queues (`Q1`, `Q2`, `Q3`) are created using the `createQueue` function.

2. **Task Enqueueing:**
   - Tasks with various burst times and IDs are enqueued into each queue using the `enqueue` and `createElement` functions.

3. **Displaying Queues:**
   - The initial state of the queues is displayed using the `showQueue` function.

4. **First Come First Serve Scheduling:**
   - The FCFS scheduling algorithm is applied to `Q1` using the `firstComeFirstServe` function.

5. **Custom Scheduling:**
   - A custom scheduling algorithm is applied across all three queues using the `scheduling` function.

### Example Code

```cpp
#include "Queue.h"

int main() {
    // Queue 1
    Queue Q1;
    createQueue(Q1);

    infotype a;
    a.burstTime = 20;
    a.id = "A1";
    enqueue(Q1, createElement(a));

    a.burstTime = 40;
    a.id = "B1";
    enqueue(Q1, createElement(a));

    a.burstTime = 10;
    a.id = "C1";
    enqueue(Q1, createElement(a));

    a.burstTime = 50;
    a.id = "D1";
    enqueue(Q1, createElement(a));

    a.burstTime = 80;
    a.id = "E1";
    enqueue(Q1, createElement(a));

    // Queue 2
    Queue Q2;
    createQueue(Q2);

    a.burstTime = 20;
    a.id = "A2";
    enqueue(Q2, createElement(a));

    a.burstTime = 40;
    a.id = "B2";
    enqueue(Q2, createElement(a));

    a.burstTime = 10;
    a.id = "C2";
    enqueue(Q2, createElement(a));

    a.burstTime = 50;
    a.id = "D2";
    enqueue(Q2, createElement(a));

    a.burstTime = 80;
    a.id = "E2";
    enqueue(Q2, createElement(a));

    // Queue 3
    Queue Q3;
    createQueue(Q3);

    a.burstTime = 20;
    a.id = "A3";
    enqueue(Q3, createElement(a));

    a.burstTime = 40;
    a.id = "B3";
    enqueue(Q3, createElement(a));

    a.burstTime = 10;
    a.id = "C3";
    enqueue(Q3, createElement(a));

    a.burstTime = 50;
    a.id = "D3";
    enqueue(Q3, createElement(a));

    a.burstTime = 80;
    a.id = "E3";
    enqueue(Q3, createElement(a));

    // Display initial state
    cout << "========== Initial State ==========" << endl;
    cout << "Schedule Q1 :" << endl;
    showQueue(Q1);
    cout << "Schedule Q2 :" << endl;
    showQueue(Q2);
    cout << "Schedule Q3 :" << endl;
    showQueue(Q3);

    // Apply First Come First Serve scheduling to Q1
    cout << "========== First Come First Serve ==========" << endl;
    firstComeFirstServe(Q1);

    // Apply custom scheduling across all queues
    cout << "========== Custom Scheduling ==========" << endl;
    scheduling(Q1, Q2, Q3);

    // Display final state
    cout << "========== Q1 ==========" << endl;
    showQueue(Q1);
    cout << "========== Q2 ==========" << endl;
    showQueue(Q2);
    cout << "========== Q3 ==========" << endl;
    showQueue(Q3);

    return 0;
}
```

## Usage

### Compilation

To compile the program, use a C++ compiler like `g++`. Assuming your files are named `main.cpp` and `Queue.h`, you can compile it with:

```sh
g++ -o queue_scheduling main.cpp
```

### Execution

After compilation, you can run the program with:

```sh
./queue_scheduling
```

## Dependencies

- Ensure that you have a C++ compiler installed (e.g., `g++`).
- Include the `Queue.h` header file in the same directory as your `main.cpp` file.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

For any questions or suggestions, please contact:

- Christian Lukito Pangestu - chrislpangestu@gmail.com

---

Feel free to customize this README to better suit your project's specifics and requirements.
