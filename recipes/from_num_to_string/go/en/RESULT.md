$ go run from_num_to_string.go
for int,     use Itoa: 100
for bool,    use FormatBool: true
for int64,   use FormatInt: 100
for float64, use FormatFloat: 1.00e+02
for FormatInt, we can specify base: 1100100
FormatUint also available: 100

If you don't know type of number, you can use fmt.Sprint()
Sprint with Integer: 100
Sprint with float:   100.1
