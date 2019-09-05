class Solution {
    func intToRoman(_ num: Int) -> String {
        var result: String = ""

        if num >= 1000 {
            result += "M" + intToRoman(num - 1000)
        } else if num >= 900 {
            result += "CM" + intToRoman(num - 900)
        } else if num >= 500 {
            result += "D" + intToRoman(num - 500)
        } else if num >= 400 {
            result += "CD" + intToRoman(num - 400)
        } else if num >= 100 {
            result += "C" + intToRoman(num - 100)
        } else if num >= 90 {
            result += "XC" + intToRoman(num - 90)
        } else if num >= 50 {
            result += "L" + intToRoman(num - 50)
        } else if num >= 40 {
            result += "XL" + intToRoman(num - 40)
        } else if num >= 10 {
            result += "X" + intToRoman(num - 10)
        } else if num >= 9 {
            result += "IX" + intToRoman(num - 9)
        } else if num >= 5 {
            result += "V" + intToRoman(num - 5)
        } else if num >= 4 {
            result += "IV" + intToRoman(num - 4)
        } else if num >= 1 {
            result += "I" + intToRoman(num - 1)
        }

        return result
    }
}  
