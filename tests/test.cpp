#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(RectangleTestSuite, TestConstructorDiffNumbers) {
    Rectangle r(2, 3);
    ASSERT_EQ(2, r.get_width());
    ASSERT_EQ(3, r.get_height());
}
TEST(RectangleTestSuite, TestConstructorSameNumbers) {
    Rectangle r(2, 2);
    ASSERT_EQ(2, r.get_width());
    ASSERT_EQ(2, r.get_height());
}
TEST(RectangleTestSuite, TestAreaDiffNumbers) {
    Rectangle r(5, 6);
    ASSERT_EQ(30, r.area());
}
TEST(RectangleTestSuite, TestAreaSameNumbers) {
    Rectangle r(5, 5);
    ASSERT_EQ(25, r.area());
}
TEST(RectangleTestSuite, TestPerimeterDifferentNumbers) {
    Rectangle r(1, 2);
    ASSERT_EQ(6, r.perimeter());
}
TEST(RectangleTestSuite, TestPerimeterSameNumbers) {
    Rectangle r(10, 10);
    ASSERT_EQ(40, r.perimeter());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}