import tkinter as tk

def add_task():
    task = entry.get()
    if task:
        listbox.insert(tk.END, task)
        entry.delete(0, tk.END)

def delete_task():
    selected_task = listbox.curselection()
    if selected_task:
        listbox.delete(selected_task)

def clear_all():
    listbox.delete(0, tk.END)

root = tk.Tk()
root.title("To-Do List")

frame = tk.Frame(root)
frame.pack(pady=10)

entry = tk.Entry(frame, font=("Arial", 14))
entry.pack(side=tk.LEFT, padx=10)

add_button = tk.Button(frame, text="Add Task", command=add_task)
add_button.pack(side=tk.LEFT)

listbox = tk.Listbox(root, font=("Arial", 14), width=50, height=10)
listbox.pack(pady=20)

delete_button = tk.Button(root, text="Delete Task", command=delete_task)
delete_button.pack()

clear_button = tk.Button(root, text="Clear All", command=clear_all)
clear_button.pack(pady=10)

root.mainloop()