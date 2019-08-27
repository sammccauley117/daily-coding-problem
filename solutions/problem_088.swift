func numSteps(_ n: Int) -> Int {
    if n >= 3 {
        var total : Int = numSteps(n - 1)
        total += numSteps(n - 2)
        return total + numSteps(n - 3)
    } else if n == 2 {
        return 2
    } else {
        return 1
    }
}

print(numSteps(3))
