#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid (List[List[int]]): A rectangular grid representing the island.

    Returns:
    - int: The perimeter of the island.

    Constraints:
    - Each cell in the grid is either 0 (water) or 1 (land).
    - Grid cells are connected horizontally/vertically, not diagonally.
    - The grid is rectangular, with width and height not exceeding 100.
    - The grid is completely surrounded by water, and there is either
    one island or nothing.
    - The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
    """
    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
