number_of_pizzas = eval(input("How many pizzas do you want? "))
cost_per_pizza = eval(input("How much does each pizza cost? "))
subtotal = number_of_pizzas * cost_per_pizza
tax_rate = 0.08
sales_tax = subtotal * tax_rate
total = subtotal + sales_tax
print("The total cost is $", total)
print("This includes $", subtotal, "for the pizza and $", sales_tax, "in sales taxes")