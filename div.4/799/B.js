function Solution() {
  let t = 0;
  const n = Number(lines[t++]);
  const res = [];
  for (let i = 0; i < n; i++) {
    const num = Number(lines[t++]);
    const arr = lines[t++].split(' ').map((item) => Number(item));
    const set = new Set(arr);
    res[i] =  (num - set.size) % 2 === 0 ? set.size : set.size - 1;
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