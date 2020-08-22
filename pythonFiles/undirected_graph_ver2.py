# copy and pratice code from geek for geeks
# dictionary form
graph_form = [

        #instance
        #instance

        ]


print(graph_form['a'][0])

class AdjNode:
    def __init__(self, data):
        self.vertex = data
        self.next = None


class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.graph = [None] * self.V


    def add_edge(self, src, dest):
            node = AdjNode(dest)
            node.next = self.graph[src]
            self.graph[src] = node


            node = AdjNode(src)
            node.next = self.graph[dest]
            self.graph[dest] = node


    def print_graph(self):
        for i in range(self.V):
            temp = self.graph[i]
            while temp:
                print("->{}}".format(temp.vertex), end="")
                temp = temp.next

                print("\n")
        



class AdjNode:
   def  __init__(self,data):
        self.vertex = data
        self.next = None



class Graph:
    def __init(self, vertices 
