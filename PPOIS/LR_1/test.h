#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Carriage.cpp"
#include "Tape.cpp"
#include "TuringMachine.cpp"

int Carriage::carriage_ = 0;


TEST(CarriageTests, GetCarriageTest) {
	Carriage carriage1;
	EXPECT_EQ(carriage1.GetCarriage(), 0);
}

TEST(CarriageTests, RightTest) {
	string tape = { "abcda" };
	Carriage carriage2;
	carriage2.Right(tape);
	EXPECT_EQ(carriage2.GetCarriage(), 1);
}

TEST(CarriageTests, LeftTest) {
	string tape = { "abcda" };
	Carriage carriage3;
	carriage3.Left(tape);
	EXPECT_EQ(carriage3.GetCarriage(), 0);
}


TEST(TapeTest, GetGuideTest) {
    Tape tape;
    const char* argv[] = {"program", "TestForMT.txt"};
    tape.ReadTask(argv);

    const vector<char*>& guide = tape.GetGuide();
    ASSERT_EQ(guide.size(), 9);
   
    EXPECT_STREQ(guide[1], "011r0"); 
}

TEST(TapeTest, GetQTest) {
    Tape tape;
    const char* argv[] = {"program", "TestForMT.txt"};
    tape.ReadTask(argv);

    EXPECT_EQ(tape.GetQ(), '0');
}

TEST(TapeTest, GetTapeTest) {
    Tape tape;
    const char* argv[] = {"program", "TestForMT.txt"};
    tape.ReadTask(argv);

    EXPECT_EQ(tape.GetTape(), "1011");
    }

TEST(TuringMachineTest, SolverTest) {
    TuringMachine tm;
    char q = '0';
    string tape = "1101";
    vector<char*> guide = {new char[5]{'0', '1', '0', 'r', '1'}, new char[5]{'1', '0', '1', 'l', '0'}};
    int carriage = 0;

    tm.Solver(q, tape, guide, carriage);

    EXPECT_EQ(q, '1');
    EXPECT_EQ(tape, "0101");
}

TEST(TuringMachineTest, TMTest) {
    TuringMachine tm;
    Tape tape;
    const char* argv[] = {"program", "TestForMT.txt"};
    tape.ReadTask(argv);

    testing::internal::CaptureStdout();
    tm.TM(tape.GetQ(), tape.GetTape(), tape.GetGuide(), argv);
    string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Start tape: 1011"), string::npos);
    EXPECT_NE(output.find("Finish tape: @1100@"), string::npos);
}

TEST(TuringMachineTest, DeleteGuideTest) {
    TuringMachine tm;
    Tape tape;
    const char* argv[] = {"program", "TestForMT.txt"};
    tape.ReadTask(argv);

    tm.DeleteGuide(tape.GetGuide());

    EXPECT_FALSE(tape.GetGuide().empty());
}