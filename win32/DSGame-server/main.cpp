#include "../../src/map/ai/helpers/pathfind.h"

int main(int argc, char* argv[])
{
	CNavMesh navMesh { 107 };
	navMesh.load("C:\\Users\\Mike\\Documents\\GitHub\\darkstar\\navmeshes\\South_Gustaberg.nav");
	
	position_t start;
	start.rotation = 1.33492184;
	start.x = 540.5262;
	start.y = 3.02880979;
	start.z = -461.056641;

	position_t end;
	end.rotation = 1.65796828;
	end.x = 540.625244;
	end.y = 2.734441;
	end.z = -445.004822;

	auto route = navMesh.findPath(start, end);
	Assert(!route.empty());

	auto hit = navMesh.raycast(start, end);	
	Assert(hit);

	navMesh.unload();
}
