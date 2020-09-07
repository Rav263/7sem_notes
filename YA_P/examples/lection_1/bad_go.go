package main
import ("fmt"; "io/ioutil"; "os")
func main() {
	rdr := os.Stdin
	b, err := ioutil.ReadAll(rdr) 
	if err != nil {
		panic("bad input")
	}
	for i := len(b) - 1; i >= 0; i-- {
		fmt.Print(b[i])
	}
}
