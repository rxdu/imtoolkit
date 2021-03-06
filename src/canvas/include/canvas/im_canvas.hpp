/*
 * im_canvas.hpp
 *
 * Created on: Dec 02, 2020 21:20
 * Description:
 *
 * Copyright (c) 2020 Ruixiang Du (rdu)
 */

#ifndef IM_CANVAS_HPP
#define IM_CANVAS_HPP

#include <stdio.h>

#include <cstdint>
#include <string>

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include "implot/implot.h"

#include <GL/gl3w.h>
#include <GLFW/glfw3.h>

namespace rdu {
class ImCanvas {
 public:
  struct Color {
    Color(double _r, double _g, double _b, double _a)
        : r(_r), g(_g), b(_b), a(_a) {}

    double r = 0.0;
    double g = 0.0;
    double b = 0.0;
    double a = 1.0;

    ImVec4 ToImVec4() { return ImVec4(r, g, b, a); }
  };

  enum WINDOW_HINT {
    WIN_FOCUSED = 0x00000001,
    WIN_RESIZABLE = 0x00000004,
    WIN_DECORATED = 0x00000010,
    WIN_AUTO_ICONIFY = 0x00000020,
    WIN_FLOATING = 0x00000040,
    WIN_MAXIMIZED = 0x00000080
  };

 public:
  ImCanvas(uint32_t width = 640, uint32_t height = 480,
           std::string title = "Canvas",
           uint32_t window_hints = WIN_RESIZABLE | WIN_DECORATED);
  virtual ~ImCanvas();

  // do not allow copy
  ImCanvas(const ImCanvas& other) = delete;
  ImCanvas& operator=(const ImCanvas& other) = delete;
  ImCanvas(const ImCanvas&& other) = delete;
  ImCanvas& operator=(const ImCanvas&& other) = delete;

  uint32_t GetWidth() const { return width_; }
  uint32_t GetHeight() const { return height_; }

  // customization
  void SetBackgroundColor(ImVec4 bk);
  ImVec4 GetBackgroundColor() const { return background_color_; }

  // draw on canvas
  virtual void Draw() = 0;
  void Show();

 protected:
  bool initialized_ = false;
  uint32_t width_ = 640;
  uint32_t height_ = 480;

  GLFWwindow* window_;
  ImVec4 background_color_;

  void ApplyWindowHints(uint32_t window_hints);
};
}  // namespace rdu

#endif /* IM_CANVAS_HPP */
