class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None

class Linked_list:
    def __init__(self):
        self.head = None

    def insert(self, data):
        if not self.head:
            self.head = Node(data)
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = Node(data)

    def print_list(self):
        current = self.head
        while current:
            print(current.data)
            current = current.next

ll = Linked_list()
ll.insert('lets')
ll.insert('all')
ll.insert('meet')
ll.insert('in')
ll.insert('Moria')

ll.print_list()
