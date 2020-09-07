package main
import ("fmt"; "io/ioutil"; "os"; "strings")
func main() {
	rdr := os.Stdin
	b, err := ioutil.ReadAll(rdr) 
	if err != nil {
		panic("bad input")
	}
	s := strings.Split(string(b),"")
//	fmt.Print(s); fmt.Println()
	for i := len(b) - 1; i >= 0; i-- {
		fmt.Print(s[i])
	}
	fmt.Println();
	for i, j := 0, len(s)-1; i < j; i, j = i+1, j-1 {
        	s[i], s[j] = s[j], s[i]
    }	
	fmt.Println(strings.Join(s,""))
}

