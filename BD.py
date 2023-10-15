import turtle

sania = turtle.Screen()
sania.bgcolor("black")
ismail_the_lover_boy = turtle.Turtle()
ismail_the_lover_boy.width(7)
colors = ["#f5ac2f", "#279cf5", "#d820f5", "#a2f52f", "#f527c1"]


def draw_sania(i, x, y):
    ismail_the_lover_boy.pencolor("linen")
    ismail_the_lover_boy.color(colors[i % 7])
    ismail_the_lover_boy.lt(70)
    ismail_the_lover_boy.penup()
    ismail_the_lover_boy.goto(x, y)
    ismail_the_lover_boy.pendown()
    ismail_the_lover_boy.circle(22)
    ismail_the_lover_boy.end_fill()


def ballon(x, y):
    ismail_the_lover_boy.pensize(4)
    for i in range(5):
        draw_sania(i, x, y)


def f1():
    for i in range(7):
        ismail_the_lover_boy.pensize(5)
        ismail_the_lover_boy.pencolor('light blue')
        ismail_the_lover_boy.color(colors[i % 19])
        ismail_the_lover_boy.begin_fill()
        ismail_the_lover_boy.left(330)
        ismail_the_lover_boy.forward(55)
        ismail_the_lover_boy.begin_fill()
        ismail_the_lover_boy.rt(110)
        ismail_the_lover_boy.circle(33)
        ismail_the_lover_boy.end_fill()
        ismail_the_lover_boy.rt(11)
        ismail_the_lover_boy.backward(33)
        ismail_the_lover_boy.end_fill()


def cake(x, y):
    ismail_the_lover_boy.fd(x)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(y)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(x)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(y)


def move(x, y):
    ismail_the_lover_boy.up()
    ismail_the_lover_boy.setposition(0, 0)
    ismail_the_lover_boy.setheading(90)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(x)
    ismail_the_lover_boy.lt(90)
    ismail_the_lover_boy.fd(y)
    ismail_the_lover_boy.pendown()


def mov(x, y):
    ismail_the_lover_boy.up()
    ismail_the_lover_boy.setposition(0, 0)
    ismail_the_lover_boy.setheading(90)
    ismail_the_lover_boy.lt(90)
    ismail_the_lover_boy.fd(x)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(y)
    ismail_the_lover_boy.pendown()


def A(size):
    ismail_the_lover_boy.rt(19)
    ismail_the_lover_boy.forward(size)
    ismail_the_lover_boy.rt(141)
    ismail_the_lover_boy.fd(size)
    ismail_the_lover_boy.backward(size / 2)
    ismail_the_lover_boy.rt(105)
    ismail_the_lover_boy.fd(int(size / 3))


def B(size):
    ismail_the_lover_boy.forward(size)
    ismail_the_lover_boy.rt(90)
    for i in range(18):
        ismail_the_lover_boy.rt(9)
        ismail_the_lover_boy.fd(size // 20)
    for i in range(18):
        ismail_the_lover_boy.rt(size // 5)
        ismail_the_lover_boy.backward(size // 20)


def D(size):
    ismail_the_lover_boy.fd(size)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(size // 10)
    for i in range(13):
        ismail_the_lover_boy.rt(13)
        ismail_the_lover_boy.fd(size // 8)


def E(size):
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(int(size / 3))
    ismail_the_lover_boy.back(int(size / 3))
    ismail_the_lover_boy.left(90)
    ismail_the_lover_boy.fd(size / 2)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(int(size / 3))
    ismail_the_lover_boy.back(int(size / 3))
    ismail_the_lover_boy.lt(90)
    ismail_the_lover_boy.fd(size / 2)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(int(size / 3))


def H(size):
    ismail_the_lover_boy.fd(size)
    ismail_the_lover_boy.backward(size // 2)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(size // 2)
    ismail_the_lover_boy.lt(90)
    ismail_the_lover_boy.fd(size // 2)
    ismail_the_lover_boy.backward(size)


def I(size):
    ismail_the_lover_boy.fd(size)
    ismail_the_lover_boy.rt(90)
    # ismail_the_lover_boy.circle(size // 8)

def L(size):
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(int(size / 2))
    ismail_the_lover_boy.back(int(size / 2))
    ismail_the_lover_boy.lt(90)
    ismail_the_lover_boy.fd(size)

def N(size):
    ismail_the_lover_boy.fd(size)
    ismail_the_lover_boy.rt(150)
    ismail_the_lover_boy.fd(size + int(size / 6))
    ismail_the_lover_boy.lt(150)
    ismail_the_lover_boy.fd(size)


def P(size):
    ismail_the_lover_boy.fd(size)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(size // 8)
    for i in range(8):
        ismail_the_lover_boy.rt(20)
        ismail_the_lover_boy.fd(size // 9)

def R():
    ismail_the_lover_boy.fd(60)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(7)
    for i in range(15):
        ismail_the_lover_boy.rt(12)
        ismail_the_lover_boy.fd(3)
    ismail_the_lover_boy.lt(120)
    ismail_the_lover_boy.fd(40)


def S(size):
    ismail_the_lover_boy.rt(90)
    for i in range(0, 5):
        if i < 3:
            ismail_the_lover_boy.fd(size / 2)
            ismail_the_lover_boy.lt(90)
            if i == 2:
                ismail_the_lover_boy.rt(90)
        else:
            ismail_the_lover_boy.right(90)
            ismail_the_lover_boy.fd(size / 2)


def T(size):
    ismail_the_lover_boy.fd(size)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(size // 2)
    ismail_the_lover_boy.backward(size // 2)


def Y(size):
    ismail_the_lover_boy.fd(size)
    ismail_the_lover_boy.left(60)
    ismail_the_lover_boy.fd(size // 2)
    ismail_the_lover_boy.backward(size // 2)
    ismail_the_lover_boy.rt(90)
    ismail_the_lover_boy.fd(size // 1.5)

ismail_the_lover_boy.speed(13)


mov(120, 30)
ismail_the_lover_boy.color("#f7b543")
# ismail_the_lover_boy.color(colors[8 % 5])
ismail_the_lover_boy.begin_fill()
cake(40, 180)
ismail_the_lover_boy.end_fill()
mov(110, 75)
ismail_the_lover_boy.color("#d152f7")
ismail_the_lover_boy.begin_fill()
cake(40, 160)
ismail_the_lover_boy.end_fill()
mov(100, 120)
ismail_the_lover_boy.color("#f54eb8")
ismail_the_lover_boy.begin_fill()
cake(40, 140)
ismail_the_lover_boy.end_fill()
mov(30, 170)
ismail_the_lover_boy.width(11)
ismail_the_lover_boy.pencolor("red")
ismail_the_lover_boy.circle(7)
move(180, 307)
mov(0, 0)
ballon(-490, 200)
ballon(490, 200)
ballon(183, -150)
ballon(-133, -150)

ismail_the_lover_boy.speed(3)
ismail_the_lover_boy.width(9)
ismail_the_lover_boy.pencolor("#319df5")
mov(240, 205)
S(size=70)

ismail_the_lover_boy.width(11)
mov(170, 205)
A(70)
mov(80, 205)
N(size=70)
mov(-10, 205)
I(size=70)
mov(-50, 205)
A(size=70)
# mov(30, 205)
# H(size=70)
# mov(-30, 205)
ismail_the_lover_boy.pencolor("#95ed28")
style = ('Arial', 50, 'italic')
# ismail_the_lover_boy.write("(DADA)", font=style)

ismail_the_lover_boy.pencolor("cyan")
ismail_the_lover_boy.width(13)
mov(260, -80)
H(100)
ismail_the_lover_boy.width(7)
mov(190, -80)
A(65)
mov(135, -80)
P(60)
mov(100, -80)
P(60)
mov(52, -80)
Y(60)
mov(28, -80)
B(60)
move(12, -80)
I(60)
move(36, -80)
R()
move(80, -80)
T(100)
move(102, -80)
H(60)
move(150, -80)
ismail_the_lover_boy.pencolor('hotpink')
D(200)
move(160, -80)
A(60)
move(220, -80)
Y(60)
sania.exitonclick()