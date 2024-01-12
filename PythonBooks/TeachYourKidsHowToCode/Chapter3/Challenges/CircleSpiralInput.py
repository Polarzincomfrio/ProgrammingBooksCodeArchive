import turtle
t=turtle.Pen()
turtle.bgcolor('black')
colors=['red', 'yellow', 'blue', 'green',
        'orange', 'purple', 'white', 'gray']
sides = int(turtle.numinput("Number of circles", "How many circles do you want (1-8)?", 4, 1, 8))
for x in range(180):
    t.pencolor(colors[x % sides])
    t.circle(x)
    t.left(360 / sides + 1)
    t.width(x * sides / 200)