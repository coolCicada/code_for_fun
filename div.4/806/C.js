function Solution() {
  let t = 0;
  const N = Number(lines[t++]);
  const R = [];
  for (let i = 0; i < N; i++) {
    const n = Number(lines[t++]);
    const initArr = lines[t++].split(' ').map((item) => Number(item));
    for (let j = 0; j < n; j++) {
      const [numStr, str] = lines[t++].split(' ');
      const num = Number(numStr);
      for (let z = 0; z < num; z++) {
        if (str[z] === 'D') initArr[j] = (initArr[j] + 1) % 10;
        else initArr[j] = (initArr[j] - 1 + 10) % 10;
      }
    }
    R.push(initArr.join(' '));
  }
  return R.join('\n');
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