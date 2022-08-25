function solve() {
  const [n, H, M] = cl().split(' ').map((item) => Number(item));
  let now = H * 60 + M;

  let res = Infinity;
  for (let i = 0; i < n; i++) {
    const [h, m] = cl().split(' ').map((item) => Number(item));
    let diff = h * 60 + m - now;
    if (diff < 0) diff += 1440;
    res = Math.min(res, diff); 
  }

  co(`${res / 60 | 0} ${res % 60}`);
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