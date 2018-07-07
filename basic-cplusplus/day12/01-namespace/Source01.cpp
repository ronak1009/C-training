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

int main() {
	_2dGraphs::Graph two_graph;
	_3DGraphs::Graph three_graph;
}
/*
namespace allows to create multiple object with the same class name using scope resolution
namespace allows usage of same symbol without issue of name conflict
as there is no physical grouping, namespace based grouping does not divide the mem or don;t occupy
memory for grouping symbol.

for ex.
here class 'Graph' is generic name for 2 different libraries. namespace _2DGraphs, _3DGraphs does not
occupy memory or grouping is not at mem level
but objects created using these classes have mem allocated to them.
*/