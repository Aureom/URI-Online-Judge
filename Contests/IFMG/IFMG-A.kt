import java.util.*

fun main(){
    var cases = readLine()!!.toInt()
    while (cases != 0) {
        cases--
        val line = readLine().toString()
        if(line.contains('a', true) && line.contains('j', true) && line.contains('k', true) && line.contains('q', true)) {
            println("Aaah muleke")
        }else{
            println("Ooo raca viu")
        }
    }
}