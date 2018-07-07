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
int main() {
	Graph two_graph;
	_3DGraphs::Graph three_graph;
}

/*
when we are using statement "using namespace ***" we are making the namespace *** to be used as normally.
in case of ambiguity or name conflict, need to define the scope of symbol using the full name of which name space it belongs
*/