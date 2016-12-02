#include <iostream>
#include <vector>

class vertex
{
public:
	int value;
	std::vector<vertex> edges;

	vertex(int v)
	{
		value = v;
	}

	int AddEdge(int m)
	{
		vertex(value).edges.push_back(vertex(m));
		vertex(m).edges.push_back(vertex(value));
		return 0;
	}
};

;
int DisplayGraph(std::vector<vertex>)
{
	for (int i = 1;i < 10;i++)
	{

		std::cout << "vertex:" << vertex(i).value << std::endl << "edges:"<< std::endl;
//		int edges = vertex(i).edges(0);
	//	for (int x = 0;x < vertex(i).edges.end(); x++)
	//		std::cout << vertex.edges[x].value << ' ';
		
	}
	return 0;
}

int main(int argc, char *argv[])
{
	std::vector<vertex> graph;
	for (int i = 1;i < 10;i++)
	{
		vertex tysam(i);
	}

	vertex(1).AddEdge(2);
	vertex(2).AddEdge(4);
	DisplayGraph(graph);



	while (true) {}
	return 0;
}