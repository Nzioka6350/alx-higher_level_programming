#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    # Create a new matrix to store the squared values
    squared_matrix = []

    # Iterate over the rows of the input matrix
    for row in matrix:
        # Create a new row for the squared values
        squared_row = []

        # Iterate over the elements in the current row and square each element
        for element in row:
            squared_element = element ** 2
            squared_row.append(squared_element)

        # Append the squared row to the squared matrix
        squared_matrix.append(squared_row)

    return squared_matrix
