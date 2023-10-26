#!/usr/bin/python3
""" This module calculates the perimeter of an island in grid """

    def num_water_neighbours(grid, b, k):
        """Return num of water neighbors a cell has in a grid """

        num = 0

        if b <= 0 or not grid[b - 1][k]:
            num += 1
        if k <= 0 or not grid[b][k - 1]:
            num += 1
        if k >= len(grid[b]) - 1 or not grid[b][k + 1]:
            num += 1
        if b >= len(grid) - or not grid[b + 1][k]:
            num += 1

        return num


    def island_perimeter(grid):
        """To return the perim of the island in a grid """

        perimeter = 0
        for b in range(len(grid)):
            for k in range(len(grid[b])):
                if grid[b][k]:
                    perimeter += num_water_neighbors(grid, b, k)

        return perimeter
