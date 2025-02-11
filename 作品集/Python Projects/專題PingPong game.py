from tkinter.constants import CENTER
import pygame
import turtle  # Turtle模組繪圖
import winsound  # 聲音
import tkinter as tk
import time


def mainwin():

    win = turtle.Screen()
    win.title("PONG")
    win.bgcolor("black")
    win.setup(width=800, height=600)
    win.tracer(0)  # 追蹤程式執行過程

    # 分數
    score_a = 0
    score_b = 0
    global score_end
    score_end =10
    
    # A球拍
    paddle_a = turtle.Turtle()
    paddle_a.speed(0)  # A球拍的動畫速度
    paddle_a.shape("square")  # 形狀
    paddle_a.color("white")  # 顏色
    paddle_a.shapesize(stretch_wid=5, stretch_len=1)  # 長，寬
    paddle_a.penup()  # 開始繪圖
    paddle_a.goto(-350, 0)  # 類似定位
    # B球拍
    paddle_b = turtle.Turtle()
    paddle_b.speed(0)  # B球拍的動畫速度
    paddle_b.shape("square")  # 形狀
    paddle_b.color("white")  # 顏色
    paddle_b.shapesize(stretch_wid=5, stretch_len=1)
    paddle_b.penup()  # 開始繪圖
    paddle_b.goto(350, 0)  # 類似定位

    # 球
    ball = turtle.Turtle()
    ball.speed(0)  # 球的動畫速度
    ball.shape("square")  # 形狀
    ball.color("white")  # 顏色
    ball.penup()  # 開始繪圖
    ball.goto(0, 0)  # 類似定位
    ball.dx = 2  # 每次球移動的像素(pixel)X
    ball.dy = 2  # 每次球移動的像素(pixel)Y

    # PEN
    pen = turtle.Turtle()
    pen.speed(0)
    pen.shape("square")
    pen.color("white")
    pen.penup()
    pen.hideturtle()
    pen.goto(0, 260)
    pen.write("PLAYER1: 0 PLAYER2: 0", align="center",
              font=("Courier", 24, "normal"))
    # 函式

    def paddle_a_up():
        y = paddle_a.ycor()  # 取得y座標
        y += 20  # 移動加20像素
        paddle_a.sety(y)  # 設置paddle_a為座標y

    def paddle_a_down():
        y = paddle_a.ycor()  # 取得y座標
        y -= 20  # 移動減20像素
        paddle_a.sety(y)  # 設置paddle_a為座標y

    def paddle_b_up():
        y = paddle_b.ycor()  # 取得y座標
        y += 20  # 移動加20像素
        paddle_b.sety(y)  # 設置paddle_b為座標y

    def paddle_b_down():
        y = paddle_b.ycor()  # 取得y座標
        y -= 20  # 移動減20像素
        paddle_b.sety(y)  # 設置paddle_b為座標y

    def quit():  # 關閉所有視窗
        global running
        running = False
        win.bye()
        tkwindow.destroy()
    # 鍵盤
    win.listen()
    win.onkeypress(paddle_a_up, "w")
    win.onkeypress(paddle_a_down, "s")
    win.onkeypress(paddle_b_up, "Up")
    win.onkeypress(paddle_b_down, "Down")
    win.onkeypress(quit, "q")
    # Main game
    running = True

    while running:

        win.update()  # 每次重跑update 1次

        # 移動球
        ball.setx(ball.xcor() + ball.dx)
        ball.sety(ball.ycor() + ball.dy)

        # 紀錄，計分
        if ball.ycor() > 290:  # 若球大於290則反彈(*-1)
            ball.sety(290)
            ball.dy *= -1
            winsound.PlaySound("bounce.mp3", winsound.SND_ASYNC)

        if ball.ycor() < -290:
            ball.sety(-290)
            ball.dy *= -1
            winsound.PlaySound("bounce.mp3", winsound.SND_ASYNC)

        if ball.xcor() > 350:
            score_a += 1  # A加分
            pen.clear()
            pen.write("PLAYER1: {} PLAYER2: {}".format(score_a, score_b),
                      align="center", font=("Courier", 24, "normal"))
            ball.goto(0, 0)
            ball.dx *= -1
            winsound.PlaySound("getscore.wav", winsound.SND_ASYNC)
            ball.dx = 2  # 重製速度

        if ball.xcor() < -350:
            score_b += 1  # B加分
            pen.clear()
            pen.write("PLAYER1: {} PLAYER2: {}".format(score_a, score_b),
                      align="center", font=("Courier", 24, "normal"))
            ball.goto(0, 0)
            ball.dx *= -1
            winsound.PlaySound("getscore.wav", winsound.SND_ASYNC)
            ball.dx = 2  # 重製速度
        # 球拍和球的碰撞
        #判定(若球X<-340和球Y小於球拍Y+50(判定是否反彈)接著球Y大於球拍Y-50(球拍長度))
        if ball.xcor() < -340 and ball.ycor() < paddle_a.ycor() + 50 and ball.ycor() > paddle_a.ycor() - 50: 
            ball.dx *= -1.5 # 球每次碰撞的加速度
            winsound.PlaySound("bounce.mp3", winsound.SND_ASYNC)
        elif ball.xcor() > 340 and ball.ycor() < paddle_b.ycor() + 50 and ball.ycor() > paddle_b.ycor() - 50:
            ball.dx *= -1.5 # 球每次碰撞的加速度
            winsound.PlaySound("bounce.mp3", winsound.SND_ASYNC)
        time.sleep(1/120)  # 延遲


def fend():#退出tkinter視窗
    res = tk.messagebox.askyesno("危險", "確定結束視窗?")
    if(res == True):
        tkwindow.destroy()

#TKINTER
tkwindow = tk.Tk()
tkwindow.geometry('600x800')
tkwindow.title("WINDOW")
lbl = tk.Label(tkwindow, text="PONG GAME", font=(
    'Arial', 20), padx=10, justify='center')
lbl.grid(column=0, row=0)
lbl.pack()
lblb = tk.Button(tkwindow, text="開始遊戲", font=(
    'Arial', 20), padx=10, command=mainwin)
tkend = tk.Button(tkwindow, text="退出視窗", font=(
    'Arial', 20), padx=10, command=fend)
end = tk.Label(tkwindow, text='按Q即可退出遊戲', font=(
    'Arial', 20), padx=10, justify='center')
#tkfram = tk.LabelFrame(tkwindow, text='選擇比分')

#tkscore = tk.Radiobutton(tkfram, text='5分', value=5).pack(side='left', padx=5)
#tkscore = tk.Radiobutton(
    #tkfram, text='10分', value=10).pack(side='left', padx=5)


lblb.pack()
tkend.pack()
#tkfram.pack()
end.pack()
tkwindow.mainloop()
