func isPrime(_ n : Int) -> Bool {
    for x in 2..<n {
        if n % x == 0 { return false }
    }
    return true
}

func prime(_ n : Int) -> Int {
    if n < 1 { return 0 }
    else if n == 1 { return 2 }

    var count : Int = 1
    var potential : Int = 1

    while count < n {
        potential += 2
        if isPrime(potential) {
            count += 1
        }
    }

    return potential
}

let n : Int = 15
print("Prime #\(n) is \(prime(n))")
