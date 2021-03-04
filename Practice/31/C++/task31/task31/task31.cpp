#include <vector>
#include <fstream>

std::ostream& operator<<(std::ostream& stream, std::vector<int>& vector)
{
	stream << vector.size() << "\t|";

	for (auto& elem : vector)
	{
		stream << ' ' << &elem;
	}

	return stream;
}

int main()
{
	std::vector<int> vector;
	std::ofstream file("data.txt");


	for (int i = 0; i < 64; ++i)
	{
		vector.push_back(0);
		file << vector << std::endl;
	}

	file << std::endl;

	while (!vector.empty())
	{
		vector.pop_back();
		file << vector << std::endl;
	}

	file.close();
