#include "pch.h"
#include "D:\study\sem3\PPOIS\TuringMachine\Carriage.cpp"
#include "D:\study\sem3\PPOIS\TuringMachine\Carriage.h"
#include "D:\study\sem3\PPOIS\TuringMachine\Tape.cpp"
#include "D:\study\sem3\PPOIS\TuringMachine\Tape.h"
#include "D:\study\sem3\PPOIS\TuringMachine\TuringMachine.cpp"
#include "D:\study\sem3\PPOIS\TuringMachine\TuringMachine.h"
#include "D:\study\sem3\PPOIS\TuringMachine\turing_machine.cpp"

TEST(TuringMachineTests, GetCarriageTest) {
	Carriage carriage1;
	EXPECT_EQ(carriage1.GetCarriage(), 0);
}

TEST(TuringMachineTests, RightTest) {
	string tape = { "abcda" };
	Carriage carriage2;
	carriage2.Right(tape);
	EXPECT_EQ(carriage2.GetCarriage(), 1);
}

TEST(TuringMachineTests, LeftTest) {
	string tape = { "abcda" };
	Carriage carriage3;
	carriage3.Left(tape);
	EXPECT_EQ(carriage3.GetCarriage(), 0);
}