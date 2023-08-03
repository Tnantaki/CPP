#include <iostream>

struct Node
{
	int		data;
	Node*	left;
	Node*	right;
};

Node*	create_node(int data)
{
	Node*	newnode = new Node();
	newnode->data = data;
	newnode->left = newnode->right = nullptr;
	return (newnode);
}

// preorder(Data, Left, Right)
void	preorder_agrt(Node* root)
{
	if (root == nullptr)
		return ;
	std::cout << root->data << ", ";
	preorder_agrt(root->left);
	preorder_agrt(root->right);
}

// inorder(Left, Data, Right)
void	inorder_agrt(Node* root)
{
	if (root == nullptr)
		return ;
	inorder_agrt(root->left);
	std::cout << root->data << ", ";
	inorder_agrt(root->right);
}

// postorder(Left, Right, Data)
void	postorder_agrt(Node* root)
{
	if (root == nullptr)
		return ;
	postorder_agrt(root->left);
	postorder_agrt(root->right);
	std::cout << root->data << ", ";
}

int	main(void)
{
	// Level 1
	Node*	root = create_node(1);
	// Level 2
	root->left = create_node(2);
	root->right = create_node(3);
	// Level 3
	root->left->left = create_node(4);
	root->left->right = create_node(5);
	root->right->left = create_node(6);
	root->right->right = create_node(7);
	// Level 4
	root->left->right->left = create_node(9);
	root->right->right->left = create_node(15);

	std::cout << "### Preorder ###" << std::endl;
	preorder_agrt(root);
	std::cout << std::endl;

	std::cout << "### Inorder ###" << std::endl;
	inorder_agrt(root);
	std::cout << std::endl;

	std::cout << "### Postorder ###" << std::endl;
	postorder_agrt(root);
	std::cout << std::endl;
}
