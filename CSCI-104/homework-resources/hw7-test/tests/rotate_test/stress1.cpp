#include "rotate_gtest_class.h"

TEST_F(RotateTest, Stress1_LeftRotate) 
{
	InsertFull(mBST1, 14);
	InsertFull(mBST2, 15);
	InsertFull(mBST3, 16);

	std::clock_t t1 = std::clock();

	mBST1.exposedLeftRotate(mBST1.getRoot());
	std::clock_t t2 = std::clock();

	mBST2.exposedLeftRotate(mBST2.getRoot());
	std::clock_t t3 = std::clock();

	mBST3.exposedLeftRotate(mBST3.getRoot());
	std::clock_t t4 = std::clock();

	std::clock_t times[] = {t1, t2, t3, t4};
	CheckRuntime(times, 5, 1.2);
}