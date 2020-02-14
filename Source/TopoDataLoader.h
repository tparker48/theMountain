// Reads CSV file and outputs a 2D integer array
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

struct TopoData 
{
    std::vector<std::vector<int>> data;
    int width, height;
};

class TopoDataLoader
{
public:

    TopoDataLoader(std::string csvName);

    TopoData getData();
private:
    TopoData td;
};