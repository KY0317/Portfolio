from tkinter import Tk, Frame, StringVar
from tkinter import BOTH, LEFT, X
from tkinter.ttk import Label, Button
from datetime import datetime


class GUI(Frame):
    def __init__(self):
        super().__init__()

        self.nowTime = StringVar()
        self.nowTime.set(self.getNowTimeString())  #現在時間

        self.startTime = StringVar()
        self.startTime.set('b: 0000-00-00 00:00:00')  #初始的時間

        self.endTime = StringVar()
        self.endTime.set('e: 0000-00-00 00:00:00')  #結束的時間

        self.timeDelta = StringVar()
        self.timeDelta.set('Please start counting...')

        self.initUI()

    def initUI(self):  #製作時間標籤
        self.master.title('Timer')
        self.pack(fill=BOTH, expand=True)

        frame1 = Frame(self)
        frame1.pack(fill=X)

        self.lbl1 = Label(frame1, textvariable=self.nowTime)
        self.lbl1.pack(side=LEFT, padx=5, pady=5)
        self.lbl1.after(1000, self.updateTime)

        frame2 = Frame(self)
        frame2.pack(fill=X)

        self.lbl2 = Label(frame2, textvariable=self.startTime)
        self.lbl2.pack(side=LEFT, padx=5, pady=5)

        frame3 = Frame(self)
        frame3.pack(fill=X)

        self.lbl3 = Label(frame3, textvariable=self.endTime)
        self.lbl3.pack(side=LEFT, padx=5, pady=5)

        frame4 = Frame(self)
        frame4.pack(fill=X)

        self.lbl4 = Label(frame4, textvariable=self.timeDelta)
        self.lbl4.pack(side=LEFT, padx=5, pady=5)

        frame5 = Frame(self)
        frame5.pack(fill=X)

        button1 = Button(frame5, text="Start", command=self.onStart)
        button1.pack(side=LEFT, padx=5, pady=5)

        button2 = Button(frame5, text="Stop", command=self.onStop)
        button2.pack(side=LEFT, padx=5, pady=5)

    def updateTime(self):
        self.nowTime.set(self.getNowTimeString())
        self.lbl1.after(1000, self.updateTime)

    def onStart(self):
        self.endTime.set('e: 0000-00-00 00:00:00')
        self.timeDelta.set('Please start counting...')
        self.startTime.set('b: ' + self.getNowTimeString(mode='start'))

    def onStop(self):  #停止秒表
        self.endTime.set('e: ' + self.getNowTimeString(mode='stop'))
        timedelta = self.end - self.begin
        self.timeDelta.set('Difference between %s seconds' %
                           timedelta.seconds)

    def getNowTimeString(self, mode=None):
        now = datetime.now()
        if mode == 'start':
            self.begin = now
        elif mode == 'stop':
            self.end = now
        text = '%s-%s-%s %s:%s:%s' % \
               (now.year,
                '{:0>2d}'.format(now.month),
                '{:0>2d}'.format(now.day),
                '{:0>2d}'.format(now.hour),
                '{:0>2d}'.format(now.minute),
                '{:0>2d}'.format(now.second))  #將時間格式分為秒、分、小時、日、月   修改的地方
        return text


if __name__ == '__main__':
    root = Tk()
    root.geometry("250x170+300+300")
    app = GUI()
    root.mainloop()