#pragma once
#include "Tree.h" // Change this to the file your tree class is in
#include <string>
#include <queue>
#include <cmath>
using namespace std;

template <class T>
class visualizer
{

	MyAVLTree tree_;
	TreeNode* tree_root_;
	int tree_height_;
	int tree_nodes_;
	string** values_;

	int node_length_;
	int node_type_;
	int node_shift_factor_;
	string empty_node_;

	int space_length_;
	int space_shift_factor_;

	queue<TreeNode*> breadth_first_search();
	int get_tree_height(TreeNode*) const;
	int get_nodes_count(int) const;
	int get_subtree_width(int) const;

public:

	explicit visualizer(MyAVLTree, int = -1, int = -1);
	~visualizer() = default;
	void visualize() const;

};