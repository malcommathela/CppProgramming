# C++ Programs Collection

A structured collection of **C++ programs, algorithms, data structures, and problem-solving implementations**. This repository is intended for learning, practice, experimentation, and reference.

The programs are written using modern C++ and cover fundamental programming concepts as well as common algorithms and data structures.

---

## 📁 Repository Structure

```text
.
├── src/                    # C++ source files
├── include/                # Header files
├── tests/                  # Unit tests
├── data/                   # Input/sample data files
├── build/                  # Build output (ignored by Git)
├── CMakeLists.txt          # CMake build configuration
├── Makefile                # Make build configuration (if applicable)
├── .clang-format           # clang-format configuration
├── .gitignore
└── README.md
```

---

## 🧠 Topics Covered

The repository contains implementations and demonstrations covering areas such as:

### 🔢 Fundamentals

* Variables and data types
* Conditional statements
* Loops
* Functions
* Recursion
* Input validation
* Modular programming

### 📊 Data Structures

* Arrays
* Strings
* Linked Lists
* Stacks
* Queues
* Hash Tables
* Trees
* AVL Trees
* Graphs

### ⚡ Algorithms

* Searching algorithms
* Sorting algorithms
* Recursion and backtracking
* BFS and DFS
* Dijkstra's shortest-path algorithm
* Matrix operations
* Number-based algorithms

### 💻 Advanced Concepts

* Object-oriented programming
* Pointers and references
* Dynamic memory management
* STL containers and algorithms
* File handling
* Algorithm optimization

---

## 🧩 Example Programs

Some example programs include:

| Program                     | Description                                              |
| --------------------------- | -------------------------------------------------------- |
| `sorting_demo.cpp`          | Demonstrates Quick Sort, Merge Sort, and Heap Sort       |
| `graph_algorithms.cpp`      | Implements BFS, DFS, and Dijkstra's algorithm            |
| `matrix_ops.cpp`            | Matrix multiplication, transpose, and related operations |
| `number_system_toolkit.cpp` | Number-system conversions and number checks              |
| `linked_list.cpp`           | Linked-list operations                                   |
| `avl_tree.cpp`              | AVL tree insertion, deletion, and traversal              |

> The contents of this list may grow as new programs are added to the repository.

---

## 🛠 Requirements

To build and run the programs, you will need:

* **C++17 or later**
* A compatible compiler:

  * GCC / `g++`
  * Clang / `clang++`
  * Microsoft Visual C++ / MSVC
* **CMake 3.16+** if using CMake

Optional development tools:

* `clang-format` — code formatting
* `clang-tidy` — static analysis

---

## 🚀 Building

### Using CMake

From the repository root:

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

On Linux/macOS, you can also use:

```bash
cmake --build . -j
```

### Using Make

If a `Makefile` is provided:

```bash
make
```

To clean the build:

```bash
make clean
```

---

## ▶️ Running Programs

After building, executables can be run from the `build/` directory.

### Linux / macOS

```bash
./program_name
```

Example:

```bash
./sorting_demo
```

Programs that accept command-line arguments can be executed with:

```bash
./graph_algorithms --input data/graph.txt
```

### Windows

With MinGW:

```powershell
.\program_name.exe
```

With MSVC, run the generated executable from the appropriate build configuration directory.

---

## 🧪 Testing

If tests are configured with CMake, run:

```bash
cd build
ctest
```

For more detailed test output:

```bash
ctest --output-on-failure
```

Alternatively, run the test executable directly:

```bash
./tests_runner
```

---

## 🎨 Code Style

This project follows modern C++ practices and aims to maintain consistent, readable code.

### Formatting

Code can be formatted using `clang-format`:

```bash
clang-format -i src/*.cpp
```

The repository includes a `.clang-format` configuration where applicable.

### Static Analysis

Run `clang-tidy` with:

```bash
clang-tidy src/*.cpp -- -std=c++17
```

---

## 📚 Learning Goals

This repository is primarily focused on:

* Strengthening C++ programming fundamentals
* Understanding algorithms through implementation
* Practicing data structures
* Improving problem-solving skills
* Learning time and space complexity
* Experimenting with different approaches to solving problems
* Building a reusable collection of C++ implementations

---

## 🤝 Contributing

Contributions and improvements are welcome.

1. Fork the repository.
2. Create a feature branch:

```bash
git checkout -b feature/your-feature
```

3. Add or modify the required program.
4. Test your changes.
5. Commit your changes:

```bash
git commit -m "Add your feature"
```

6. Push the branch:

```bash
git push origin feature/your-feature
```

7. Open a Pull Request.

When contributing, keep programs focused, readable, and consistent with the existing project structure.

---

## 📌 Future Improvements

Planned additions may include:

* More data-structure implementations
* Additional sorting and searching algorithms
* Graph and dynamic-programming problems
* Automated unit testing
* Performance benchmarks
* Improved documentation for individual programs
* CI/CD-based build and test validation

---

## 📄 License

This project is licensed under the **MIT License**.

See the [`LICENSE`](LICENSE) file for the complete license text.

---

## 📬 Contact

For questions, suggestions, bug reports, or contributions, please open an **Issue** or **Pull Request** in this repository.
