fun main(){
    var cases = readLine()!!.toInt()
    while (cases != 0) {
        cases--
        val line = readLine().toString()
        var i = 0

        for (element in line) {
            if(element == 'Q' && i == 0) i++
            else if(element == 'J' && i == 1) i++
            else if(element == 'K' && i == 2) i++
            else if(element == 'A' && i == 3) i++
            else if (i == 4) break
            else continue;
        }

        if(i == 4) println("Agora vai")
        else println("Agora apertou sem abracar")
    }
}