import turtle

# Set up the turtle window
turtle.setup(width=600, height=600)
turtle.speed('fastest')

# Define the function to draw a single letter
def draw_letter(letter, size):
    turtle.pendown()
    turtle.write(letter, align='center', font=('Arial', int(70*size), 'bold'))
    turtle.penup()
    turtle.forward(100*size)

# Draw the first word "Eid"
turtle.goto(-200, 0)
draw_letter('E', 1.2)
draw_letter('i', 1.2)
draw_letter('d', 1.2)

# Draw the second word "Mubarak"
turtle.goto(-200, -150)
draw_letter('M', 1.2)
draw_letter('u', 1.2)
draw_letter('b', 1.2)
draw_letter('a', 1.2)
draw_letter('r', 1.2)
draw_letter('a', 1.2)
draw_letter('k', 1.2)

# Hide the turtle when finished
turtle.hideturtle()

# Keep the turtle window open until the user closes it
turtle.done()
