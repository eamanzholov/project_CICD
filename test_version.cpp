#include "lib.h"
#include <gtest/gtest.h>

TEST(VersionTest, ValidVersion) {
    EXPECT_GT(version(), 0); // Проверяем, что версия больше нуля
}