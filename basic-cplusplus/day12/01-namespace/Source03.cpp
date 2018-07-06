namespace _2dGraphs {
	class Graph {
		char* xLabel;
		char* yLabel;
		int *xData;
		int *yData;
	public:
		int xProjection(int y);
		int yProjection(int x);
	};
}

namespace _3DGraphs {
	class Graph {
		char* xLabel;
		char* yLabel;
		char* zLabel;
		int *xData;
		int *yData;
		int *zData;
	public:
		int xProjection(int y, int z);
		int yProjection(int x, int z);
		int zProjection(int x, int y);
	};
}
using namespace _2dGraphs;
using _3DGraph=_3DGraphs::Graph;
int main() {
	Graph two_graph;
	_3DGraph three_graph;
}

/*
type name alias can be shortened using a new type_name and providing the new name as shown here
*/