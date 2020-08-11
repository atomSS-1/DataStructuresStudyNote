


class Graph:
    def __init__(self):
        self.vertices = {}


    def add_vertex(self, vertex):
        if isinstance(vertex, Vertex):
            self.vertices[vertex.name] = vertex.neighbors
            # to be continued

