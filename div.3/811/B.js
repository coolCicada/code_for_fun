function solve() {
  const n = Number(cl());
  const arr = cl().split(' ').map((item) => Number(item));

  const set = new Set();
  for (let i = n - 1; i >= 0; i--) {
    if (set.has(arr[i])) {
      return co(i + 1);
    }
    set.add(arr[i]);
  }
  co(0);
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