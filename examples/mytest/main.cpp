#include "Snap.h"

int main() {
	PNGraph Graph = TNGraph::New();
	Graph->AddNode(1);
	Graph->AddNode(5);
	Graph->AddEdge(1, 5);
	
	for (TNGraph::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++) printf("%d %d %d\n", NI.GetId(), NI.GetOutDeg(), NI.GetInDeg());
	return 0;
}