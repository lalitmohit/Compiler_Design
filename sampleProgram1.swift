// Swift program to illustrate Function With 
// parameter and return value
import Swift

// Creating a function with parameter
// and return value
func geeksforgeeks(bonus: Int) -> Int{
	let empsalary = bonus + 20000
	return empsalary
}

// Calling the function 
var updatedData = geeksforgeeks(bonus: 1000)

// Display the updated salary
print("New salary: ", updatedData)

