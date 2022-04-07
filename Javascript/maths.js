function add(a,b){
 
    return a + b;
}

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

console.log("Please enter two numbers to add");

var num1 = parseInt(prompt("Enter number 1 to add : "));
var num2 = parseInt(prompt("Enter the second number to add : "));

var val = add(num1, num2);


console.log(`${num1} + ${num2} = ${val}`);