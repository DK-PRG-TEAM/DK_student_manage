<!-- Source: Best-README-Template BLANK_README (Unlicense) — https://github.com/othneildrew/Best-README-Template -->
<a id="readme-top"></a>

# DK Student Manage

A C++/CMake student-management prototype that models majors, courses, classes, grades and students as structs manipulated through hand-written array and linked-map containers, with JSON persistence scaffolded but never called from its entry point.

**English** · [简体中文](README.zh-CN.md)

[![CI](https://github.com/DK-PRG-TEAM/DK_student_manage/actions/workflows/ci.yml/badge.svg)](https://github.com/DK-PRG-TEAM/DK_student_manage/actions/workflows/ci.yml)
[![License](https://img.shields.io/github/license/DK-PRG-TEAM/DK_student_manage)](LICENSE)

[Report a bug](https://github.com/DK-PRG-TEAM/DK_student_manage/issues/new?template=bug_report.yml) · [Request a feature](https://github.com/DK-PRG-TEAM/DK_student_manage/issues/new?template=feature_request.yml)

<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#about-the-project">About The Project</a></li>
    <li><a href="#getting-started">Getting Started</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>

## About The Project

`src/Structs/include/struct.h` defines the whole domain as plain structs: majors, courses, classes ("clbum"), grades, students and teachers. `src/MyArray/include/Array.h` is a hand-written dynamic array and `src/MyLinkedMap/include/MyLinkedListMap.h` a hand-written linked-list map, both built to hold those structs by an integer id instead of reaching for `std::vector` or `std::map`.

`src/FileLoader/include/FileLoader.h` and the vendored `src/3rd/include/json.hpp` (nlohmann/json) exist so that data can be loaded from and saved to JSON files, and `src/MyLinkedMap/include/ThisAppLinkedListMap.h` sketches a `MajorMap` that combines the map with a JSON-backed file. None of that is wired up yet: `src/Main/src/main.cpp` only builds a handful of sample majors, courses, classes and students in memory, and its `main()` returns immediately without printing or saving anything.

See the [open issues](https://github.com/DK-PRG-TEAM/DK_student_manage/issues) for planned features and known issues.

## Getting Started

### Prerequisites

- CMake 3.17 or newer, the floor `CMakeLists.txt` declares
- A C++20 compiler, since `CMakeLists.txt` sets `CMAKE_CXX_STANDARD 20`

### Installation

```sh
git clone https://github.com/DK-PRG-TEAM/DK_student_manage.git
cd DK_student_manage
cmake -S . -B build
cmake --build build
```

## Usage

The build produces a single executable from `src/Main/src/main.cpp`:

```sh
./build/src/Main/DK_student_manage
```

`main()` currently only constructs the sample majors, courses, classes and
student records declared at the top of `src/Main/src/main.cpp` in memory; it
does not take arguments, print anything or persist the data, so running it
exits immediately with no visible output.

## Contributing

Contributions are welcome. Read [CONTRIBUTING.md](CONTRIBUTING.md) for how to open an issue or a pull request, and [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) for the standards expected of everyone taking part.

Please do not report security issues in public issues or pull requests. [SECURITY.md](SECURITY.md) explains how to report them privately.

## License

Distributed under the MIT License. See [LICENSE](LICENSE) for details.

## Contact

Project link: [https://github.com/DK-PRG-TEAM/DK_student_manage](https://github.com/DK-PRG-TEAM/DK_student_manage)

<p align="right">(<a href="#readme-top">back to top</a>)</p>
