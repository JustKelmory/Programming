#include <iostream>
#include <vector>    
#include <algorithm>  
#include <iterator>   
using namespace std;
using visits_t = vector<pair<int, int>>;
using exits_t = vector<char>;
const string maze[] =
{
	"####B######################",
	"# #       #   #      #    #",
	"# # # ###### #### ####### #",
	"# # # #       #   #       #",
	"#   # # ######### # ##### #",
	"# # # #   #       #     # #",
	"### ### ### ############# #",
	"# #   #     # #           #",
	"# # #   ####### ###########",
	"# # # #       # #         C",
	"# # ##### ### # # ####### #",
	"# # #     ### # #       # #",
	"#   ##### ### # ######### #",
	"######### ### #           #",
	"# ####### ### #############",
	"A           #   ###   #   #",
	"# ############# ### # # # #",
	"# ###       # # ### # # # #",
	"# ######### # # ### # # # F",
	"#       ### # #     # # # #",
	"# ######### # ##### # # # #",
	"# #######   #       #   # #",
	"# ####### ######### #######",
	"#         #########       #",
	"#######E############D######"
};
bool is_wall_or_bad_point(int x, int y)
{
	return x < 0 || x >= maze[0].length()
		|| y < 0 || y >= size(maze)
		|| maze[y][x] == '#';
}
void crawl_maze(visits_t& visited, exits_t& exits, int x, int y)
{
	if (is_wall_or_bad_point(x, y))
		return;
	if (find(visited.begin(), visited.end(), make_pair(x, y)) != visited.end())
		return;
	visited.push_back(make_pair(x, y));
	if (maze[y][x] != ' '
		&& find(exits.begin(), exits.end(), maze[y][x]) == exits.end())
	{
		exits.push_back(maze[y][x]);
	}
	crawl_maze(visited, exits, x + 1, y);
	crawl_maze(visited, exits, x - 1, y);
	crawl_maze(visited, exits, x, y + 1);
	crawl_maze(visited, exits, x, y - 1);
}
int main()
{
	setlocale(LC_ALL, "");
	visits_t visited;
	exits_t  exits;
	int x, y;
	cin >> x >> y;

	if (is_wall_or_bad_point(x, y))
		cout << "Неверные координаты" << endl;
	else
	{
		crawl_maze(visited, exits, x, y);

		for (char e : exits)
		{
			cout << e << " ";
		}   cout << endl;
	}
}