function Solution() {
  const arr = lines.slice(1);
  const res = [];
  for (let i = 0; i < arr.length; i++) {
    if (arr[i].toUpperCase() === 'YES') res.push('YES')
    else res.push('NO');
  }
  return res.join('\n');
}

const readline = require('readline')
 
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})
const lines = []
rl.on('line', (input) => {
  lines.push(input);
})
rl.on('close', () => {
  console.log(Solution());
});