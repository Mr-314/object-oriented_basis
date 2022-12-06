import tkinter as tk
from tkinter import ttk
import datetime

def setTime():
    try:
        dt = datetime.datetime.now()
        if opt.get() == 0 :
            time.set(dt)
        elif opt.get() == 1 :
            time.set(dt.strftime('%Y年%m月%d日 %H:%M:%S'))
        else:
            time.set(dt.strftime('%b %d, %Y% %  %H:%M:%S'))
    except ValueError:
        pass
    
root = tk.Tk()
root.title("What time is it now?")

frame = ttk.Frame(root, padding="200 200 200 200")
frame.grid(column=0,row=0)
labelTitle=ttk.Label(frame, text="今何時？",font=("MSゴシック", "20", "bold"))
labelTitle.grid(column=0,row=0)


time=tk.StringVar()
labelTime=ttk.Label(frame, textvariable=time, padding=20, width=25,relief="ridge")
labelTime.grid(column=0,columnspan=4,row=1)
labelTime['font']=("TkDefaultFont","30")
labelTime['anchor']=tk.CENTER

opt=tk.IntVar()
fine=ttk.Radiobutton(frame,text="精密",variable=opt,value=0)
jpn=ttk.Radiobutton(frame,text="日本語表示",variable=opt,value=1)
eng=ttk.Radiobutton(frame,text="英語表示",variable=opt,value=2)
fine.grid(column=0,row=2)
jpn.grid(column=1,row=2)
eng.grid(column=2,row=2)

buttonUpdate=ttk.Button(frame, text="Update", command=setTime)
buttonUpdate.grid(column=3,row=0)

buttonQuit=ttk.Button(frame, text="Quit",command=root.destroy)
buttonQuit.grid(column=3,row=2)






root.mainloop()

