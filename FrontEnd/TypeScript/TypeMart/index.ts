import products from './products';

const shippingAddress: string = `666 Hell Lane, 
Los Angeles, California`
const productName: string = 'shirt';
const regNY = /(New York)/gi
let shipping: number;
let taxPercent: number;
let taxTotal: number;
let total: number;

// Store wanted product in variable
const product = products.filter (product => product.name === productName)[0];

// Base shipping costs on order value
if(Number(product.price) >= 25) {
  shipping = 0;
} else {
  shipping = 5;  
}

// Calculate taxes if shipping to New York
if (shippingAddress.match(regNY) != null) {
  taxPercent = 0.1;
} else {
  taxPercent = 0.05;
}

// Calculate total
taxTotal = Number(product.price) * taxPercent;
total = Number(product.price) + taxTotal + shipping;

// Print receipt
console.log(`
#########################
Receipt: 
#########################
Product: ${product.name}

Shipping address: 
${shippingAddress}

Price: $${product.price}
Tax total: $${taxTotal}
Shipping: $${shipping}
Total: $${total}
#########################\n`)

// Check if preoreders are accepted for the product.
if(product.preOrder === 'true') {
  console.log( `We will send you a message as soon as your ${product.name} is on its way!`)
}
