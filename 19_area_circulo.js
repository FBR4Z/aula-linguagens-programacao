const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

readline.question('', (raio) => {
  const PI = 3.14159;
  // raio = raio.toFixed(5)
  const area = PI * parseFloat(raio) * parseFloat(raio);
  console.log(`A=${area.toFixed(4)}`);
  readline.close();
});
