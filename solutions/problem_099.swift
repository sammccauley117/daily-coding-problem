class Solution {
    func canVisitAllRooms(_ rooms: [[Int]]) -> Bool {
        var visited = Array<Bool>(repeating: false, count: rooms.count)
	    var toVisit = [0]
        visited[0] = true

	    while toVisit.count > 0 {
		    let current: Int = toVisit.removeFirst()
            visited[current] = true
            for room in rooms[current] {
                if !visited[room] {
                    toVisit.append(room)
                }
            }
	    }

        return !visited.contains(false)
    }
}
