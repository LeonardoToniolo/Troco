func change(possibleCoins: [Int], targetValue: Int) {
    var changeUnits = [Int]()
    var changeSum = 0
    var index = 0
    var tmp = 0

    while changeSum < targetValue && index < possibleCoins.count {
        tmp = possibleCoins[index]

        if (changeSum + tmp) <= targetValue {
            changeSum += tmp
            changeUnits.append(tmp)
        } else {
            index += 1
        }
    }

    if changeSum != targetValue {
        print("wasn't possible to extrapolate change from specified coin values.")
    } else {
        print("change found: ", changeUnits)
    }
}

change(possibleCoins: [100,50,25,10,5,2,1], targetValue: 19)