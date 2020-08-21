/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int R = matrix.size();
        if(R == 0) return;
        int C = matrix[0].size();

        int firstRow = false, firstCol = false;
        for(int i = 0; i < R; ++i){
            if(matrix[i][0] == 0){
                firstCol = true;
                break;
            }

        }
        for(int j = 0; j < C; ++j){
            if(matrix[0][j] == 0){
                firstRow = true;
                break;
            }
        }
        for(int i = 1 ; i < R; ++i){
            for(int j = 1; j < C; ++j){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < R; ++i){
            if(matrix[i][0] == 0){
                for(int j = 0; j <C; ++j){
                    matrix[i][j] =0;
                }
            }
        }
        for(int j = 1; j < C; ++j){
            if(matrix[0][j] == 0){
                for(int i = 0; i < R; ++i){
                    matrix[i][j] = 0;
                }
            }
        }
        if(firstRow){
            for(int j = 0; j <C; ++j){
                    matrix[0][j] =0;
                }
        }
        
        if(firstCol){
            for(int i = 0; i < R; ++i){
                    matrix[i][0] = 0;
                }
        }

    }
};
// @lc code=end

