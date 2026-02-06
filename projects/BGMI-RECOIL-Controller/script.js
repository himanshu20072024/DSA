const weaponData = {
  AR: {
    "M416": { vertical: 40, horizontal: 15, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/m416.png" },
    "AKM": { vertical: 55, horizontal: 20, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/akm.png" },
    "Beryl M762": { vertical: 65, horizontal: 25, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/beryl.png" },
    "SCAR-L": { vertical: 38, horizontal: 12, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/scarl.png" },
    "Groza": { vertical: 60, horizontal: 22, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/groza.png" },
    "FAMAS": { vertical: 58, horizontal: 24, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/famas.png" }
  },
  SMG: {
    "UMP45": { vertical: 20, horizontal: 8, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/ump45.png" },
    "Vector": { vertical: 18, horizontal: 7, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/vector.png" },
    "MP5K": { vertical: 15, horizontal: 5, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/mp5k.png" }
  },
  LMG: {
    "DP-28": { vertical: 35, horizontal: 10, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/dp28.png" },
    "M249": { vertical: 50, horizontal: 18, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/m249.png" },
    "MG3": { vertical: 70, horizontal: 28, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/mg3.png" }
  },
  DMR: {
    "SLR": { vertical: 70, horizontal: 18, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/slr.png" },
    "SKS": { vertical: 60, horizontal: 15, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/sks.png" },
    "Mini14": { vertical: 40, horizontal: 10, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/mini14.png" }
  },
  Sniper: {
    "AWM": { vertical: 0, horizontal: 0, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/awm.png" },
    "Kar98k": { vertical: 0, horizontal: 0, img: "https://raw.githubusercontent.com/himanshu-code/bgmi-images/main/kar98k.png" }
  }
};

document.getElementById("sensitivity").addEventListener("input", function () {
  document.getElementById("sensitivityValue").innerText = this.value;
});

function updateWeapons() {
  const category = document.getElementById("category").value;
  const weaponSelect = document.getElementById("weapon");
  weaponSelect.innerHTML = "";

  if (category && weaponData[category]) {
    Object.keys(weaponData[category]).forEach(weapon => {
      const option = document.createElement("option");
      option.value = weapon;
      option.innerText = weapon;
      weaponSelect.appendChild(option);
    });
  }
}

function analyze() {
  const category = document.getElementById("category").value;
  const weapon = document.getElementById("weapon").value;
  const scope = document.getElementById("scope").value;
  const sensitivity = parseInt(document.getElementById("sensitivity").value);

  if (!weapon || !weaponData[category] || !weaponData[category][weapon]) return;

  let { vertical, horizontal, img } = weaponData[category][weapon];

  // Show image
  document.getElementById("weaponImage").innerHTML = `<img src="${img}" alt="${weapon}" />`;

  // Adjust for scope
  if (scope === "3x") vertical *= 1.3;
  else if (scope === "6x") vertical *= 1.6;

  // Adjust for sensitivity
  vertical *= 1 - sensitivity / 200;
  horizontal *= 1 - sensitivity / 200;

  drawPattern(vertical, horizontal);
}

function drawPattern(v, h) {
  const canvas = document.getElementById("recoilCanvas");
  const ctx = canvas.getContext("2d");
  ctx.clearRect(0, 0, canvas.width, canvas.height);
  ctx.beginPath();

  let x = 200;
  let y = 350;

  ctx.moveTo(x, y);

  for (let i = 0; i < 20; i++) {
    x += Math.random() * h - h / 2;
    y -= v / 10;
    ctx.lineTo(x, y);
  }

  ctx.strokeStyle = "#00ff00";
  ctx.lineWidth = 2;
  ctx.stroke();
}
