#pragma once

#include <gtest/gtest.h>
#include "MagneticField.h"

TEST(MagneticFieldTest, GetIndexTest) {
    MagneticField magneticField(7.5);
    EXPECT_EQ(magneticField.getIndex(), 7.5);
}

TEST(MagneticFieldTest, GetMagneticFieldDescriptionTest) {
    MagneticField magneticField1(8.0);
    EXPECT_EQ(magneticField1.getMagneticFieldDescription(), "An extremely strong storm");

    MagneticField magneticField2(7.0);
    EXPECT_EQ(magneticField2.getMagneticFieldDescription(), "A very strong storm");

    MagneticField magneticField3(6.0);
    EXPECT_EQ(magneticField3.getMagneticFieldDescription(), "A strong storm");

    MagneticField magneticField4(5.0);
    EXPECT_EQ(magneticField4.getMagneticFieldDescription(), "A moderate storm");

    MagneticField magneticField5(4.0);
    EXPECT_EQ(magneticField5.getMagneticFieldDescription(), "A weak storm");

    MagneticField magneticField6(3.0);
    EXPECT_EQ(magneticField6.getMagneticFieldDescription(), "Calm");
}

TEST(MagneticFieldTest, DisplayMagneticFieldTest) {
    MagneticField magneticField(6.5);
    testing::internal::CaptureStdout();
    magneticField.displayMagneticField();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Index: 6.5\nDescription of the magnetic field: A strong storm\n");
}