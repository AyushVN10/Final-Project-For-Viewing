// Question 4.4.1: Sudoku Solver Extravaganza:

#include <iostream>
#include <vector>

bool isValid(std::vector<std::vector<int>>& board, int row, int col, int num) {
    for (int i = 0; i < 9; ++i) {
        if (board[row][i] == num || board[i][col] == num || board[row - row % 3 + i / 3][col - col % 3 + i % 3] == num) {
            return false;
        }
    }
    return true;
}

bool solveSudoku(std::vector<std::vector<int>>& board) {
    for (int row = 0; row < 9; ++row) {
        for (int col = 0; col < 9; ++col) {
            if (board[row][col] == 0) {
                for (int num = 1; num <= 9; ++num) {
                    if (isValid(board, row, col, num)) {
                        board[row][col] = num;
                        if (solveSudoku(board)) {
                            return true;
                        }
                        board[row][col] = 0; 
                    }
                }
                return false;  
            }
        }
    }
    return true; 
}

int main() {
  // Example usage
    std::vector<std::vector<int>> sudokuBoard = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(sudokuBoard)) {rd
        for (const auto& row : sudokuBoard) {
            for (int num : row) {
                std::cout << num << " ";
            }
            std::cout << "\n";
        }
    } else {
        std::cout << "No solution exists.\n";
    }

    return 0;
}



// Question 4.4.2: Pixel Power-Up Challenge:

#include <iostream>
#include <vector>

void applyConvolutionFilter(std::vector<std::vector<int>>& image) {
    std::vector<std::vector<int>> filter = {{-1, -1, -1}, {-1, 8, -1}, {-1, -1, -1}};

    int imageSize = image.size();

    for (int i = 1; i < imageSize - 1; ++i) {
        for (int j = 1; j < imageSize - 1; ++j) {
            int sum = 0;
            for (int x = 0; x < 3; ++x) {
                for (int y = 0; y < 3; ++y) {
                    sum += image[i - 1 + x][j - 1 + y] * filter[x][y];
                }
            }
            image[i][j] = std::max(0, std::min(255, sum));  
        }
    }
}

int main() {
    // Example usage
    std::vector<std::vector<int>> grayscaleImage = {
        {10, 20, 30, 40, 50},
        {60, 70, 80, 90, 100},
        {110, 120, 130, 140, 150},
        {160, 170, 180, 190, 200},
        {210, 220, 230, 240, 250}
    };

    applyConvolutionFilter(grayscaleImage);

    for (const auto& row : grayscaleImage) {
        for (int pixel : row) {
            std::cout << pixel << " ";
        }
        std::cout << "\n";
    }

    return 0;
}



// Question 4.4.3: The Maze Navigator:

#include <iostream>

const int ROWS = 3;
const int COLS = 4;

bool navigateMaze(char maze[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (maze[i][j] == '#') {
                std::cout << "Encountered a wall at (" << i << ", " << j << "). Cannot navigate.\n";
                return false;
            }

            if (i == ROWS - 1 && j == COLS - 1) {
                std::cout << "Successfully reached the destination!\n";
                return true;
            }
        }
    }

    std::cout << "Could not reach the destination.\n";
    return false;
}

int main() {
    // Example usage with the provided maze
    char sampleMaze[ROWS][COLS] = {
        {'O', 'O', '#', 'O'},
        {'#', 'O', 'O', 'O'},
        {'O', '#', '#', 'O'}
    };

    navigateMaze(sampleMaze);

    return 0;
}
