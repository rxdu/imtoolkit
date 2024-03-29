# Immediate-Mode Toolkit (imtoolkit)

![GitHub Workflow Status](https://github.com/rxdu/imtoolkit/workflows/CMake/badge.svg)

This repository constains a set of packages built on top of the [imgui](https://github.com/ocornut/imgui) library. The targeted use case is creating data visualization and basic UI for assisting development and debugging of robotics software. This toolkit is designed to be very lightweight (minimal dependent libraries required, easy to be integrated and built), which differentiates it from other more feature-rich but much heavier libraries (such as OpenCV, VTK, ROS/RViz). It's expected that this toolkit is integrated into an existing project and used to build application-specific visualization tools, rather than used as a standalone and general-purpose visualization application.

Currently the following features are supported:

* Data Plot: ImGui + ImPlot
* Cairo Canvas: ImGui + Cairo 2D graphics library

## Build 

The code in this repository should build on any recent linux distributions with a compiler supporting C++11/14.

**Setup toolchain**

```
$ sudo apt install build-essential cmake
```

If the version of cmake bundled with your system is too low, you can install a newer version from [kitware ppa](https://apt.kitware.com/) or build and install from [source](https://cmake.org/download/). 

**Install dependencies**

```
$ sudo apt-get install libgl1-mesa-dev libglfw3-dev libcairo2-dev
```

**Download code**

```
$ git clone --recursive https://github.com/rxdu/imtoolkit.git
```

Or you can clone and then update the submodules manually

```
$ git clone https://github.com/rxdu/imtoolkit.git
$ cd imtoolkit
$ git submodule update --init --recursive
```

**Configure and compile**

```
$ cd imtoolkit
$ mkdir build && cd build
$ cmake ..
$ make -j8
```

## Use the toolkit

This toolkit offers a number of convenience wrappers/helper functions to allow you create more specialized visualization/UI tools for your project easily. Initially it helps you put all pieces together and get started quickly, but eventually you would probably need to get familar with the underlying building blocks in order to create tools that fits your hand most.

* imgui demo: src/imcore/imgui/imgui_demo.cpp
* implot demo: src/imcore/implot/implot_demo.cpp
* cairo docs: https://cairographics.org/documentation/

Online demo

* [imgui demo](https://greggman.github.io/doodles/glfw-imgui/out/glfw-imgui.html)  
* [implot demo](https://traineq.org/implot_demo/src/implot_demo.html)
