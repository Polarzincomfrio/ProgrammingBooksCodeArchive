import turtle
t = turtle.Pen()
turtle.bgcolor("black")
colors = ["red", "yellow", "blue", "green", "orange", "purple", "white", "gray"]
your_name = turtle.textinput("Enter your name", "What is your name?")
sides = int(turtle.numinput("Number of sides", "How many sides do you want (1-8)?", 4, 1, 8))
for x in range(100):
    t.pencolor(colors[x%sides])
    t.penup()
    t.forward(x*2)
    t.pendown()
    t.write(your_name, font = ("Arial", int( (x + sides) / sides), "bold") )
    t.right(360/sides+2)