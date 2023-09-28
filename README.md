# BST ASCII Visualization

** For COP3530 AVL Trees:
1. These files are dependent on naming conventions and assume that:
- Your tree class is named MyAVLTree
- Your node class is named TreeNode
- Your node's right and left pointers are named "right" and "left"
(For this to work correctly, do a search and replace on these files to make the names consistent with your tree class)
2. You must add a public get method to the MyAVLTree class that returns your tree's root
```cpp
public:
TreeNode *getRoot(){return this->root;}
```

How to use the visualizer:
```cpp
TEST_CASE("BST Visualize", "[flag]"){
	MyAVLTree tree;
	tree.insert(3, "a");
	tree.insert(2, "b");
	tree.insert(1, "c");

	const visualizer<int> v(tree);
	cout << endl << endl;
	v.visualize();
	cout << endl << endl;
}

```

This program helps to Visualize [**Binary Search Trees**](https://en.wikipedia.org/wiki/Binary_search_tree) using **ASCII** characters with the [**Adaptive Node Length with Fixed Space Length Algorithm**](https://github.com/YoussefRaafatNasry/bst-ascii-visualization/blob/master/STUDY_CASE.md#iii-adaptive-node-length-with-fixed-space-length-algorithm) — _see my [**Study Case**](https://github.com/YoussefRaafatNasry/bst-ascii-visualization/blob/master/STUDY_CASE.md) for more info_.

![SCREENSHOT](https://user-images.githubusercontent.com/41103290/61507272-54fd4480-a9e5-11e9-90dd-3b7a20df2194.png)
