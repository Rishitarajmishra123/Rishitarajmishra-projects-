# Facial Feature Classifier (C Language)

This is a basic C language project that simulates an **AI-like facial feature analyzer** using **geometric input values** (jaw width, eye size, lip thickness). It predicts:

- ✅ Face Shape (Oval, Round, Square)
- ✅ Eye Type (Almond, Round)
- ✅ Lip Type (Full, Thin)

---

## 👩‍💻 Author

** Rishitarajmishra 👑**

---

## 🧠 Features

- Decision-based facial feature classification
- Input-driven logic using `if-else` conditions
- Beginner-friendly and easy to understand
- Great project for learning basic C programming logic and `functions`

---

## 🛠💻📊 Technologies Used

- Language: `C`
- Compiler: GCC / Visual studio code 
- OS: Window 10

---
## ▶️ How to Run

### 1. Compile
Using GCC in terminal:
```bash
gcc facial_feature_classifier.c -o analyzer

## sample input ⌨️

Enter jaw width (cm): 14
Enter face height (cm): 18
Enter eye width (cm): 2.8
Enter eye height (cm): 1.1
Enter upper lip thickness (cm): 1.5
Enter lower lip thickness (cm): 1.5

## sample output 


Face Shape : Oval
Eye Type   : Almond
Lip Type   : Full



## LOGIC BEHIND THE SCENE 📚


jaw width ÷ face height👧

> 1.4 → Round
< 1.1 → Oval
Else  → Square



👀eye width ÷ eye height

> 2.5 → Almond
Else → Round


upper lip + lower lip

> 3.0 → Full
Else → Thin