#include <bits/stdc++.h>
using namespace std;

const int BOARD_SIZE = 3;

class TicTacToe
{
public:
    TicTacToe()
    {
        vector<char> helper;
        currentPlayer = 'X';
        int pos = 1;
        char ch;
        for (int row = 0; row < BOARD_SIZE; row++)
        {
            for (int col = 0; col < BOARD_SIZE; col++)
            {
                ch = pos + '0';
                helper.push_back(ch);
                mp[pos] = {row, col};
                pos++;
            }
            board.push_back(helper);
            helper.clear();
        }
    }
    void printBoard()
    {
        for (auto itr : board)
        {
            for (auto it : itr)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    bool makeMove(int row, int col, int position)
    {
        if (position < 1 || position > 9 || board[row][col] == 'X' || board[row][col] == 'O')
            return false;
        board[row][col] = currentPlayer;
        return true;
    }
    bool checkWin(char player)
    {
        for (int i = 0; i < BOARD_SIZE; i++)
        {
            bool rowWin = true;
            bool colWin = true;
            for (int j = 0; j < BOARD_SIZE; j++)
            {
                if (board[i][j] != player)
                {
                    rowWin = false;
                }
                if (board[j][i] != player)
                {
                    colWin = false;
                }
            }
            if (rowWin || colWin)
            {
                return true;
            }
        }
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        {
            return true;
        }
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        {
            return true;
        }
        return false;
    }
    bool isBoardFull()
    {
        for (int row = 0; row < BOARD_SIZE; row++)
        {
            for (int col = 0; col < BOARD_SIZE; col++)
            {
                if (board[row][col] != 'X' && board[row][col] != 'O')
                    return false;
            }
        }
        return true;
    }
    void play()
    {
        while (true)
        {
            printBoard();
            int row, col, position;
            cout << "Player " << (currentPlayer == 'X' ? 'X' : 'O') << ", enter the position: ";
            cin >> position;
            row = mp[position].first;
            col = mp[position].second;

            if (makeMove(row, col, position))
            {
                if (checkWin(currentPlayer))
                {
                    printBoard();
                    cout << "Player " << (currentPlayer == 'X' ? 'X' : 'O') << " wins!" << endl;
                    break;
                }
                else if (isBoardFull())
                {
                    printBoard();
                    cout << "It's a draw!" << endl;
                    break;
                }
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
            else
            {
                cout << "Invalid move. Try again." << endl;
            }
        }
    }

private:
    vector<vector<char>> board;
    unordered_map<int, pair<int, int>> mp;
    char currentPlayer;
};

int main()
{
    TicTacToe game;
    game.play();

    return 0;
}