class Node : 
    def __init__(self,data=None):
        self.data = data 
        self.left = None 
        self.right = None 
    
class Bst:
    def __init__(self):
        self.root = None 

    def ins(self,data) :
        if self.root is None :
            self.root = Node(data)
        else :
            self._insert(data,self.root)

    def _insert(self,data,curr_node) :
        if data < curr_node.data :
            if curr_node.left is None :
                curr_node.left = Node(data)
            else : 
                self._insert(data,curr_node.left)