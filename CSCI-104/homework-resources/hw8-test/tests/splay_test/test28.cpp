#include "splay_gtest_header.h"

TEST_F(SplayTest, Test28_RemoveMinLeafNotMin)
{
	using Key = int;
	using Value = double;
	InsSeq<Key, Value> ins{
		std::make_pair(6, 6.0),
		std::make_pair(3, 3.0),
		std::make_pair(1, 1.0),
		std::make_pair(5, 5.0),
	};

	NodeSeq<Key, Value> seq{
		NodeValidation<Key, Value>{1, 1.0, false, true},
		NodeValidation<Key, Value>{5, 5.0, false, true},
		NodeValidation<Key, Value>{6, 6.0, false, false},
	};

	InheritedSplay<Key, Value> bst;
	InsertInTree(bst, ins);
	bst.deleteMinLeaf();
	TreeStructureCheck(bst.getRoot(), seq);
}