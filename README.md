# C++ Programs Collection

A collection of C++ programs demonstrating various algorithms, data structures, and system utilities.

## 📁 Repository Structure

- `src/` – Source code for individual programs
- `include/` – Header files (if any)
- `build/` – Build output (ignored in version control)
- `tests/` – Unit tests (if applicable)
- `CMakeLists.txt` / `Makefile` – Build configuration

## 🛠 Requirements

- C++17 or later compatible compiler (e.g., `g++`, `clang++`, MSVC)
- CMake 3.16+ (if using CMake)
- Optional: `clang-format`, `clang-tidy` for code style and linting

## 🚀 Building

### Using CMake

```bash
mkdir build && cd build
cmake ..
cmake --build .
```

### Using Make (if provided)

```bash
make
```

## ▶️ Running Programs

Each program is built as a separate executable. Run them from the `build/` directory:

```bash
./program_name [arguments]
```

Example:

```bash
./sorting_demo
./graph_algorithms --input data/graph.txt
```

## 🧪 Testing

If tests are included:

```bash
cd build
ctest
```

Or run the test executable directly:

```bash
./tests_runner
```

## 🧩 Example Programs

- `sorting_demo.cpp` – Demonstrates quicksort, mergesort, and heapsort
- `graph_algorithms.cpp` – BFS, DFS, Dijkstra’s algorithm
- `matrix_ops.cpp` – Matrix multiplication, transpose, and inversion utilities

## 📝 Code Style

- Follows [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
- Formatted with `clang-format` (see `.clang-format`)
- Use `clang-tidy` for static analysis:

```bash
clang-tidy src/*.cpp -- -std=c++17
```

## 🤝 Contributing

Contributions are welcome! Please:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/your-feature`)
3. Commit your changes
4. Push and open a Pull Request

## 📄 License

This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.

## 📬 Contact

For questions or suggestions, open an issue or contact the maintainer at [your-email@example.com].