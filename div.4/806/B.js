function Solution() {
  const N = Number(lines[0]);
  const res = [];
  for (let i = 1; i <= 2 * N; i += 2) {
    const n = Number(lines[i]);
    const str = lines[i + 1];
    res.push(new Set(str).size + n);
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