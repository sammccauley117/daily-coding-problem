func removeDuplicates(_ array : [Int]) -> [Int] {
    return Array(Set(array))
}

var array : [Int] = [1,2,3,3,3,4,5,6,6,7,8,8,8,9,10]

print("Original array: \(array)")
print("Duplicates removed: \(removeDuplicates(array))")
