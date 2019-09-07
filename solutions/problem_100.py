BOARD_SIZE = 8

def getQueens():
    # Initialize variables
    unused_cols = list(range(0, BOARD_SIZE))
    results = []
    board = []
    for i in range(BOARD_SIZE):
        board.append([0]*8)

    # Get all possibilities
    placeQueens(board, 0, unused_cols, results)

    return results

def placeQueens(board, row, unused_cols, results):
    for col in unused_cols:
        if isValid(board, row, col):
            next_board = [x[:] for x in board] # Prevents memory reference issue for copying matrices
            next_board[row][col] = 1 # Place the queen
            if row == BOARD_SIZE - 1: # Board is filled if it's the last row, append to results
                results.append(next_board)
            else: # Figure out placements for the next row
                next_cols = unused_cols.copy()
                next_cols.remove(col)
                placeQueens(next_board, row+1, next_cols, results)

def isValid(board, row, col):
    # Only need to check if it doesn't break the diagonal rule
    for r in range(0, row):
        for c in range(BOARD_SIZE):
            if board[r][c]:
                if abs(row - r) == abs(col - c): return False
    return True

results = getQueens()

# Print all possibilities
for board in results:
    for row in board:
        print(row)
    print()
