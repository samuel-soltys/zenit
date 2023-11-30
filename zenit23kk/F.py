# create tree class with nodes, there can be multiple children not just 2. the node has just its ID number and children

class Node:
    def __init__(self, id):
        self.id = id
        self.children = []
        
    def add_child(self, child):
        self.children.append(child)


number_of_nodes = int(input())

nodes = []
for i in range(number_of_nodes):
    nodes.append(Node(i))

# connect the nodes to each other
for parent in range(number_of_nodes):
    
    children = [int(i) for i in input().split()]
    number_of_children = children[0]

    for child in range(number_of_children):
        nodes[parent].add_child(nodes[children[child + 1]])

# now pass the nodes to the function that will determine if the tree is symetrical (mirrored) or not
# the function will return if the tree is symetrical or not

def is_symetrical(nodes):
    for i, node in enumerate(nodes):
        children_len = len(node.children)
        if children_len % 2 == 0:
            first_middle_index = children_len // 2 - 1
            second_middle_index = children_len // 2
            # compare the number of children of the nodes from first one to the first middle index with the nodes from the last one to the second middle index
            for j in range(first_middle_index + 1):
                if len(node.children[j].children) != len(node.children[children_len - j - 1].children):
                    return False
        else:
            middle_index = children_len // 2

    return True

is_symetrical(nodes)