class Solution {
    func setZeroes(_ matrix: inout [[Int]]) {
        let rows: Int = matrix.count
        if rows == 0 { return }
        let cols: Int = matrix[0].count

        var rowsToZero = Set<Int>()
        var colsToZero = Set<Int>()

        for row in 0..<rows {
            for col in 0..<cols {
                if matrix[row][col] == 0 {
                    rowsToZero.insert(row)
                    colsToZero.insert(col)
                }
            }
        }

        for row in rowsToZero {
            for col in 0..<cols {
                matrix[row][col] = 0
            }
        }

        for col in colsToZero {
            for row in 0..<rows {
                matrix[row][col] = 0
            }
        }
    }
}
