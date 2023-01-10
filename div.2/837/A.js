function solve() {
  const N = Number(cl());
  const arr = cl().split(' ').map(Number);
  let min = Infinity;
  let max = -Infinity;
  for (let i = 0; i < N; i++) {
    min = Math.min(min, arr[i]);
    max = Math.max(max, arr[i]);
  }
  let minC = 0;
  let maxC = 0;
  for (const a of arr) {
    if (min === a) minC += 1;
    if (max === a) maxC += 1;
  }
  if (minC === N) return co(minC * (minC - 1))
  return co(minC * maxC * 2)
}

function Solution() {
  let n = Number(cl());
  while (n--) solve();
}

let i = 0;
const lines = []

function cl() { return lines[i++] }
function co(str) { console.log(str)}
const readline = require('readline')
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})
rl.on('line', (input) => lines.push(input));
rl.on('close', Solution);