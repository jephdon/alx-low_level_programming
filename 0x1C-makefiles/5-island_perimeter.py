#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
	"""
	Calculate the perimeter of the island described in the grid.

	Args:
		grid (list): A list of lists of integers where:
			- 0 represents water
			- 1 represenets land
		Each cell is a square with side length 1, connected horizontally or vertically.
		The grid is rectangular, surrounded by water, and contains one island.

	Returns:
		int: The perimeter of the island.
	"""
	if not grid or not grid[0]: # Check if grid is empty or no columns
		return (0)

	rows = len(grid) # Number of rows
	cols = len(grid[0]) # Number of columns
	perimeter = 0 # initialize perimeter

	i = 0
	while i < rows: # loop through each row
		j = 0
		while j < cols: # Loop through each column
			if grid[i][j] == 1: # if this cell is land
				perimeter += 4 # Add 4 sides for this land cell
				# Check cell above
				if i > 0 and grid[i - 1][j] == 1:
					perimeter -= 2 # Subtract 2 for shared side
				# Check cell to the left
				if j > 0 and grid[i][j - 1] == 1:
					perimeter -= 2 # Subtract 2 for shared side
			j += 1
		i += 1

	return perimeter
