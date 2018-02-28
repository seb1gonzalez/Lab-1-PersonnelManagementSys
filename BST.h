typedef struct Node {
  int value;
  struct Node *right;
  struct Node *left;
} Node;

//function to create a Node for the BST
struct Node* newNode(int newVal){
  Node *newNode= (Node*)malloc(sizeof(Node));
  newNode->value = newVal;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;

};
//print elements in tree from smallest to largest
void inOrder(struct Node* root){
  if(root != NULL){
    inOrder(root->left);
    printf("%d \n",root->value);
    inOrder(root->right);
  }
};

//iterative search function
void search(struct Node* root,int target){
  while(root != NULL){
    if (target == root->value) {
      printf("Value %i is in the tree \n", target);
      return;
    }
    if(target < root->value){
      root = root->left;
    }
    if(target > root->value){
      root = root->right;
    }
  }
  printf("Value %i not found\n",target);

};
// add an element to the Tree
struct Node* add (struct Node* root, int value){
  //check ifEmpty
  if (root == NULL){
    root = newNode(value);
  }

  //add left if less than
  else if(value < root->value){
    root->left = add(root->left,value);
  }

  //do nothing for duplicates
  else if(root->value == value){}

  //add right if greater
  else{
    root->right = add(root->right,value);
  }

  return root;
};
