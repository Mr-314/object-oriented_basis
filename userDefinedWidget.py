import tkinter as tk
from tkinter import ttk

class Thread(ttk.Frame):

    def __init__(self,root):
        super().__init__(root, relief='ridge', padding=10)

        self.labelText=tk.StringVar()
        label=ttk.Label(self, textvariable=self.labelText,
                        width=40, wraplength=350)
        label.grid(column=0,row=1)

        button=ttk.Button(self, text="Quit", command=root.destroy)
        button.grid(column=1,row=1)

    def setText(self, inputText):
        self.labelText.set(inputText.get())

if __name__ == '__main__' :

    root = tk.Tk()

    thre=Thread(root)
    inputText=tk.StringVar()
    inputText.set('こんにちは')
    thre.setText(inputText)
    thre.pack()
    
    root.mainloop()
