function solve() {
  const N = Number(cl());
  const arr = cl().split(' ').map((item) => Number(item));
  const MIN = Math.min(...arr);
  const MAX = Math.max(...arr);
  let minC = 0;
  let maxC = 0;
  for (let i = 0; i < N; i++) {
    if (arr[i] === MIN) minC += 1;
    if (arr[i] === MAX) maxC += 1;
  }
  if (minC === N) {
    co(minC * (minC - 1));
  } else {
    co(minC * maxC * 2);
  }
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