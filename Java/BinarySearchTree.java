class BinarySearchTree { 
    class Node 
    { 
        int key; 
        Node left, right; 

        public Node(int item) 
        { 
            key = item; 
            left = right = null; 
        } 
    } 

    Node root; 
    BinarySearchTree() 
    { 
        root = null; 
    } 

    void insert(int key) 
    { 
        root = insertRec(root, key); 
    }

    Node insertRec(Node root, int key) 
    {
        if (root == null) 
        { 
            root = new Node(key); 
            return root; 
        }
        if (key < root.key) 
            root.left = insertRec(root.left, key); 
        else if (key > root.key) 
            root.right = insertRec(root.right, key);
        return root; 
    } 

    void print(Node root, int key)
    { 
        if(root==null)
            return;
        if(key>root.key)
        {
            root=root.right;
            print(root,key);
        }
        else
        {
            System.out.println(root.key);
            inorderRec(root.right);
            root=root.left;
            print(root,key);
        }
    }

    void inorder() 
    { 
        inorderRec(root); 
    }

    void inorderRec(Node root) 
    { 
        if (root != null) { 
            inorderRec(root.left); 
            System.out.println(root.key); 
            inorderRec(root.right); 
        } 
    } 
}
