[English](README.md) · **简体中文**

> 英文版是规范版本。本页与 [README.md](README.md) 不一致时，以英文版为准。

<!-- translation-of: README.md sha256:a4ab726605771e69 -->

<!-- Source: Best-README-Template BLANK_README (Unlicense) — https://github.com/othneildrew/Best-README-Template -->
<a id="readme-top"></a>

# DK Student Manage

一个 C++/CMake 学生管理系统原型：以结构体建模专业、课程、班级、成绩和学生，并通过手写的数组与链表映射容器操作它们；JSON 持久化已经搭好骨架，但从未被入口函数调用过。

[![CI](https://github.com/DK-PRG-TEAM/DK_student_manage/actions/workflows/ci.yml/badge.svg)](https://github.com/DK-PRG-TEAM/DK_student_manage/actions/workflows/ci.yml)
[![License](https://img.shields.io/github/license/DK-PRG-TEAM/DK_student_manage)](LICENSE)

[报告问题](https://github.com/DK-PRG-TEAM/DK_student_manage/issues/new?template=bug_report.yml) · [提出需求](https://github.com/DK-PRG-TEAM/DK_student_manage/issues/new?template=feature_request.yml)

<details>
  <summary>目录</summary>
  <ol>
    <li><a href="#about-the-project">关于本项目</a></li>
    <li><a href="#getting-started">开始使用</a></li>
    <li><a href="#usage">用法</a></li>
    <li><a href="#contributing">参与贡献</a></li>
    <li><a href="#license">许可证</a></li>
    <li><a href="#contact">联系方式</a></li>
  </ol>
</details>

## 关于本项目

`src/Structs/include/struct.h` 用纯结构体定义了整个业务领域：专业、课程、班级（"clbum"）、成绩、学生和教师。`src/MyArray/include/Array.h` 是一个手写的动态数组，`src/MyLinkedMap/include/MyLinkedListMap.h` 是一个手写的链表映射，两者都是为了按整数 id 存放这些结构体而写的，没有使用 `std::vector` 或 `std::map`。

`src/FileLoader/include/FileLoader.h` 以及内置的 `src/3rd/include/json.hpp`（nlohmann/json）是为了把数据读写为 JSON 文件而存在的，`src/MyLinkedMap/include/ThisAppLinkedListMap.h` 也勾勒出了一个把该映射与 JSON 文件结合起来的 `MajorMap`。但这些都还没有真正接通：`src/Main/src/main.cpp` 只是在内存里构造了几条示例专业、课程、班级和学生数据，它的 `main()` 什么都不打印、不保存，直接就返回了。

计划中的功能与已知问题，见 [open issues](https://github.com/DK-PRG-TEAM/DK_student_manage/issues)。

## 开始使用

### 环境要求

- CMake 3.17 或更高版本，即 `CMakeLists.txt` 声明的下限
- 一个支持 C++20 的编译器，因为 `CMakeLists.txt` 设置了 `CMAKE_CXX_STANDARD 20`

### 安装

```sh
git clone https://github.com/DK-PRG-TEAM/DK_student_manage.git
cd DK_student_manage
cmake -S . -B build
cmake --build build
```

## 用法

构建会从 `src/Main/src/main.cpp` 生成唯一的可执行文件：

```sh
./build/src/Main/DK_student_manage
```

目前的 `main()` 只是在内存中构造 `src/Main/src/main.cpp` 开头声明的那些示例专业、
课程、班级和学生记录；它不接受任何参数，也不打印或保存数据，因此运行它会立刻
退出，且没有任何可见输出。

## 参与贡献

欢迎参与。[CONTRIBUTING.md](CONTRIBUTING.md) 说明如何提交 issue 或 pull request，[CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) 说明对所有参与者的行为要求。

请不要在公开的 issue 或 pull request 中报告安全问题。[SECURITY.md](SECURITY.md) 说明了私下报告的方式。

## 许可证

以 MIT 许可证分发。详见 [LICENSE](LICENSE)。

## 联系方式

项目地址：[https://github.com/DK-PRG-TEAM/DK_student_manage](https://github.com/DK-PRG-TEAM/DK_student_manage)

<p align="right">(<a href="#readme-top">back to top</a>)</p>
