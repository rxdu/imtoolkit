/*
 * test_cairo_canvas.cpp
 *
 * Created on: Dec 03, 2020 21:27
 * Description:
 *
 * Copyright (c) 2020 Ruixiang Du (rdu)
 */

#include <memory>

#include "canvas/im_canvas.hpp"
#include "canvas/cairo_context.hpp"

using namespace rdu;

// struct DrawArc : public ImCanvas {
//   DrawArc(std::shared_ptr<CairoContext> ctx) : ctx_(ctx) {}
//   std::shared_ptr<CairoContext> ctx_;

//   void Draw() override {
//     // do nothing
//     // Paint(ctx_->GetObject());
//   }

//   void Paint(cairo_t* cr) {
//     // EraseAll();
//     cairo_set_source_rgba(cr, background_color_.x, background_color_.y,
//                           background_color_.z, background_color_.w);
//     cairo_paint(cr);

//     double x = 25.6, y = 128.0;
//     double x1 = 102.4, y1 = 230.4, x2 = 153.6, y2 = 25.6, x3 = 230.4,
//            y3 = 128.0;

//     cairo_set_source_rgba(cr, 0.2, 0.2, 0.2, 0.6);

//     cairo_move_to(cr, x, y);
//     cairo_curve_to(cr, x1, y1, x2, y2, x3, y3);

//     cairo_set_line_width(cr, 10.0);
//     cairo_stroke(cr);

//     cairo_set_source_rgba(cr, 1, 0.2, 0.2, 0.6);
//     cairo_set_line_width(cr, 6.0);
//     cairo_move_to(cr, x, y);
//     cairo_line_to(cr, x1, y1);
//     cairo_move_to(cr, x2, y2);
//     cairo_line_to(cr, x3, y3);
//     cairo_stroke(cr);
//   }
// };

int main(int argc, const char* argv[]) {
  //   std::shared_ptr<CairoContext> ctx = std::make_shared<CairoContext>(640,
  //   480); if (!ctx->Initialized()) return -1;
  CairoContext ctx(640, 480);

  //   DrawArc cc(ctx);

  //   //   cc.SetBackgroundColor({0.5, 0.5, 0.5, 0.5});
  //   cc.Show();
  return 0;
}