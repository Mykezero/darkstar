#include "../../src/map/ai/helpers/pathfind.h"

int main(int argc, char* argv[])
{
	CNavMesh navMesh{ 1 };
	navMesh.load("C:\\Users\\Mike\\Documents\\GitHub\\darkstar\\navmeshes\\West_Ronfaure.nav");
	position_t startPosition;


	CPathFind pathFind = CPathFind(&navMesh, &startPosition);

	position_t position_t;
	position_t.x = 1;
	position_t.y = 1;
	position_t.z = 1;
	bool result = pathFind.PathTo(position_t);

}
