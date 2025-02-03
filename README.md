# RetroSteam

```
__________        __                    _________ __                         
\______   \ _____/  |________  ____    /   _____//  |_  ____ _____    _____  
 |       _// __ \   __\_  __ \/  _ \   \_____  \\   __\/ __ \\__  \  /     \ 
 |    |   \  ___/|  |  |  | \(  <_> )  /        \|  | \  ___/ / __ \|  Y Y  \
 |____|_  /\___  >__|  |__|   \____/  /_______  /|__|  \___  >____  /__|_|  /
        \/     \/                             \/           \/     \/      \/ 
```

RetroSteam is a text-based game store simulation inspired by Steam, built in C++. It provides users with a nostalgic command-line interface where they can browse, purchase, and manage their game collection. The project replicates the essence of early digital game distribution platforms, offering a structured shopping experience entirely through text-based commands and ASCII visuals.

Users can log in, purchase games, buy gift cards, subscribe to services, and enjoy an interactive ASCII-art outro. RetroSteam is a lightweight alternative to modern game stores, perfect for those who appreciate retro-style interfaces.

## 🚀 How to Run

### 1️⃣ Clone the repository
```sh
git clone https://github.com/BliriBerisha/retrosteam-project.git
cd retrosteam-project-main
```

### 2️⃣ Compile the project
```sh
g++ -o RetroSteam.exe RetroSteam.cpp LogIn/login.cpp shop/shop.cpp outro/outro.cpp
```

### 3️⃣ Run the executable
```sh
.\RetroSteam.exe
```

## 📂 Project Structure
```
retrosteam-project-main/
├── RetroSteam.cpp
├── RetroSteam.exe
├── LogIn/
│   ├── login.cpp
│   ├── login.h
├── shop/
│   ├── shop.cpp
│   ├── shop.h
├── outro/
│   ├── outro.cpp
│   ├── outro.h
├── README.md
```

## 🔧 Features
- User login system
- Game purchasing functionality
- Gift card purchase system
- Subscription system
- ASCII art display
- Outro ASCII art display
- Search feature for games
- Simple text-based interface
- Bank & Payment system

## Logging in (recommended)
- Users can log in with any username and password, provided that the **username** is at least **4 characters long** and the **password** is at least **9 characters long**.
- "Please use the username 'admin' and password 'admin' to log in and grant yourself **1,000,000 money** in the bank to check out the project." (optional)
- Normal users will be granted random amount of bank money (retro-money)

## 🛠 Requirements
- Use Visual Studio Code and execute through terminal (highly recommended)
- C++ Compiler (g++)
- Compatible terminal to run the executable
- Can run .exe file without compiling (maybe).

## 📜 License
This project is licensed under the MIT License. And is FREE to use or modify.

## 🤝 Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## 📧 Contact
For any inquiries, feel free to reach out to [Bliri Berisha](https://github.com/BliriBerisha).

