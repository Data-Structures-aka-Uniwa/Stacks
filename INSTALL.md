<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

<p align="center">
  <a href="https://www.uniwa.gr" target="_blank">University of West Attica</a> ·
  <a href="https://ice.uniwa.gr" target="_blank">Department of Computer Engineering and Informatics</a>
</p>

<hr/>

<p align="center">
  <strong>Data Structures</strong>
</p>

<h1 align="center" style="letter-spacing: 1px;">
  Stacks
</h1>

<p align="center">
  <strong>Vasileios Evangelos Athanasiou</strong><br>
  Student ID: 19390005
</p>

<p align="center">
  <a href="https://github.com/Ath21" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/vasilis-athanasiou-7036b53a4/" target="_blank">LinkedIn</a>
</p>

<hr>

<p align="center">
  <strong>Supervision</strong>
</p>

<p align="center">
  Supervisor: Georgios Bardis, Assistant Professor
</p>
<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-bardis/" target="_blank">UNIWA Profile</a>
</p>

<p align="center">
  Co-supervisor: Georgios Meletiou, Laboratory Teaching Staff<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a>
</p>

<p align="center">
  Co-supervisor: Georgios Tselikis, Postdoctoral Researcher
</p>
<p align="center">
  <a href="https://eee.uniwa.gr/el/25-viografiko/1139-giorgos-tselikis" target="_blank">UNIWA Profile</a> ·
  <a href="https://www.linkedin.com/in/george-tselikis-5a7ba84/" target="_blank">LinkedIn</a>
</p>

</hr>

---

<p align="center">
  Athens, December 2022
</p>

---

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250826120607519143/push232.jpg" width="250"/>
</p>

---

# INSTALL

## Stacks

This guide explains how to set up, build, and run the project on your local machine.

---

## 1. How to Compile and Run

### 1.1 Clone the Repository

Open your terminal or command prompt and run:

```bash
git clone https://github.com/Data-Structures-aka-Uniwa/Stacks.git
cd Stacks/src
```

### 1.2 Compilation

Use `gcc` to compile the project:
```bash
gcc -o stack_app main.c stacks.c
```

### 1.3 Execution
Run the compiled program:
```bash
./stack_app
```

---

## 2. Important Note about printStack
The printStack function is designed to be non-destructive.
How it works:
- Elements are popped from the stack and pushed into a temporary stack.
- While transferring, the values are printed.
- Elements are then pushed back to the original stack.
- This ensures that the stack contents remain unchanged after printing.
