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

# README

## Stacks

This project implements a **Stack Data Structure** in **C** using **dynamic memory allocation**.  
It provides standard stack operations along with additional utilities for transferring and copying data between multiple stacks.

---

## Table of Contents

| Section | Folder/File | Description |
|------:|-------------|-------------|
| 1 | `INSTALL.md` | Installation and compilation instructions |
| 2 | `README.md` | Project overview and usage guide |
| 3 | `assign/` | Assignment description images |
| 3.1 | `assign/Stacks.png` | Stacks assignment image (English) |
| 3.2 | `assign/Στοίβες.png` | Stacks assignment image (Greek) |
| 4 | `src/` | Source code of the stacks implementation |
| 4.1 | `src/main.c` | Program entry point and stack usage example |
| 4.2 | `src/stacks.h` | Stack data structure declarations and function prototypes |
| 4.3 | `src/stacks.c` | Implementation of stack operations |

---

## 1. Features

### 1.1 Dynamic Allocation
Stacks are created with a **user-defined capacity** and allocated on the heap.

### 1.2 Safety Checks
Includes protection mechanisms to prevent runtime errors:

- `isFull` - prevents stack overflow
- `isEmpty` - prevents stack underflow

### 1.3 Stack Transfer
Transfers all elements from **Stack 1** to **Stack 2**, reversing their order.

### 1.4 Stack Copying
Creates an **exact copy of a stack** while preserving the original element order.

### 1.5 Visualizer
A `printStack` function displays stack contents **without permanently removing elements**.

---

## 2. Function Overview

### 2.1 Core Operations

**init(stack \*s, int capacity)**  
Allocates memory for a stack with the specified capacity.

**push(stack \*s, int value)**  
Adds an integer value to the top of the stack.

**pop(stack \*s, int \*value)**  
Removes the top element from the stack and stores it through a pointer.

**destroy(stack \*s)**  
Releases dynamically allocated memory to prevent memory leaks.

---

## 3. Advanced Utilities

**Transfer (`transfer`)**

- Pops elements from **Stack 1**
- Pushes them into **Stack 2**
- Result: the order of elements becomes **reversed**

---

**Copy (`copyStack`)**

- Uses a **temporary stack**
- Copies Stack 1 into Stack 2
- Preserves the original order in **both stacks**