# 🎯 Projectile Motion Calculator

A C++ program that simulates **2D projectile motion** by calculating horizontal and vertical components of motion, final positions, and velocities. The program accepts user input for initial conditions and applies classical mechanics equations to output detailed motion characteristics.

---

## 🏫 Project Information

* **University:** Benha University, Faculty of Engineering (Shoubra)  
* **Department:** Communications and Computer Engineering  
* **Course:** Mechanics 2 / Physics Programming  
* **Supervisor:** Dr. Abdallah  

---

## 📌 Project Overview

This project is designed to:

* Compute projectile motion in 2D space.
* Use physics equations to determine horizontal and vertical displacements.
* Calculate initial and final velocity components.
* Allow user interaction via standard input/output.
* Visualize concepts covered in mechanics through computation.

---

## 🧠 System Features

* **Input Parameters:**
  - Initial velocity (m/s)
  - Launch angle (degrees)
  - Initial X and Y positions
  - Time of flight (s)

* **Output Results:**
  - Initial velocities (Vx, Vy)
  - Final X and Y positions
  - Final velocities on both axes

* **Physics Constants:**
  - Gravity: `g = 9.81 m/s²`
  - Pi: `π = 3.14159265`

---

## ⚙️ Motion Equations Used

| Motion Type | Formula |
|-------------|---------|
| Horizontal Position | `x = x₀ + vₓ * t` |
| Vertical Position   | `y = y₀ + vᵧ * t - 0.5 * g * t²` |
| Horizontal Velocity | `vₓ = v * cos(θ)` |
| Vertical Velocity   | `vᵧ = v * sin(θ)` |
| Final Vertical Velocity | `vᵧf = sqrt((vᵧ)² - 2 * g * (y - y₀))` |

---

## 🧾 How It Works

1. The user is prompted to enter:
   - Initial velocity
   - Launch angle
   - Initial positions (X, Y)
   - Time of flight

2. The program calculates:
   - Horizontal and vertical components of velocity
   - Final X and Y positions using motion formulas
   - Final vertical velocity using energy-based kinematic relation

3. The results are displayed clearly to the user.

---

## 📐 Example Input & Output

**Input:**

```

Initial velocity: 11.5
Angle of launch: 23.6
Initial X: 0
Initial Y: 0
Time: 0.47

```

**Output:**

```

The initial velocity on X-axis = 10.57 m/s
The initial velocity on Y-axis = 4.61 m/s
The final position on X-axis = 4.97
The final position on Y-axis = 1.07
The final velocity on X-axis = 10.57 m/s
The final velocity equals the initial velocity on X-axis
The final velocity on Y-axis = 4.59 m/s

```

---

## 🧪 Testing Results

| Test Case | Inputs Summary | Result Verified | Passed |
|-----------|----------------|-----------------|--------|
| Launch with 11.5 m/s @ 23.6° | Time: 0.47s, X₀=0, Y₀=0 | Positions and velocities match | ✅ |
| Launch with 20 m/s @ 45° | Time: 2s | Outputs match manual calc | ✅ |
| Edge case: 90° angle | Vertical motion only | Correct Y final, Vx=0 | ✅ |

---

## 💾 Source Files

* `Projectile Motion Calculator.cpp` – Main source code  
* `include.docx` – Code explanation  
* `CODE.pdf` – Code printout  
* `Projectile Motion Calculator.pptx` – Presentation slides

---

## 📷 Screenshots

* Console I/O of various test runs

  ![image](https://github.com/user-attachments/assets/e7bf66a7-c0ed-4805-8ad0-5cbc73e6859b)
* Diagrams from the presentation

  ![image](https://github.com/user-attachments/assets/660bfe35-ab90-4527-bc90-7cf3eb935682)

---

## 🛠 Tools Used

* **C++ (G++ / Dev-C++ / VS Code)** – Code implementation  
* **Microsoft PowerPoint** – Report slides  
* **Basic Console I/O** – User interface

