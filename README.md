# 0x1D. C - Binary trees

## What is a binary tree
* Binary Tree is a special datastructure used for data storage purposes.
  A binary tree has a special condition
  that each node can have a maximum of two children
## What is the difference between a binary tree and a Binary Search Tree
   A binary tree can take many forms, a BST, the left tree is less than root
   while the right is often greater than the root node.
## What is the possible gain in terms of time complexity compared to linked lists
   BSTs have time complexity of O(logn) while linked lists have at least O(n).
## What are the depth, the height, the size of a binary tree
   * depth - total number of edges from root node to target node.
   * size - this is the number of nodes
   * height - is the largest number of edges in a path
     from leaf node to target node. Also length of longest path.
   * NB: depth of BT is equal to height of the tree
## What are the different traversal methods to go through a binary tree
   * Inorder
   * preorder
   * Postorder
## What is a complete, a full, a perfect, a balanced binary tree
   * Complete - a binary tree that alllevels are filled,
   	    all nodes are as far left as possible
   * Full - all nodes have 0 or two child nodes
   * Perfect -all interior nodes have two children all leaves have same depth
   * Balanced - Left and right subtrees differ by either height 0 or 1