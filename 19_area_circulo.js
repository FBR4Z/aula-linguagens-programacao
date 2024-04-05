const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('', (raio) => {
  const PI = 3.14159;
  //const area = PI * raio * raio;
  const area = PI * raio ** 2;

  console.log(`A=${area.toFixed(4)}`);

  rl.close();
});
