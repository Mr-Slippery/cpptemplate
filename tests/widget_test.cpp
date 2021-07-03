#include "gtest/gtest.h"

#include "widget.h"

TEST(check_const_widgets, const_widget_shown) {
    const widget w(8);
    auto res = w.draw();
    if (w.shown()) {
        EXPECT_EQ(res, 0);
    } else {
        EXPECT_EQ(res, 1);
    }
}
