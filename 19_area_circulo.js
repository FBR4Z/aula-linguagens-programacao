const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

//let string;

readline.question('', (raio) => {
  //const PI = 3.14159;
  // raio = raio.toFixed(5)
  //const area = PI * parseFloat(raio) * parseFloat(raio);
  //const string = "A="+ area.toFixed(4)
  
  readline.close();
});

  let string = "A=" + (3.14159 * parseFloat(raio) * parseFloat(raio)).toFixed(4);
  console.log(string);
