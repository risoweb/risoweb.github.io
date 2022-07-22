const displayedImage = document.querySelector('.displayed-img');
const thumbBar = document.querySelector('.thumb-bar');
const images = [`https://raw.githubusercontent.com/risoweb/risoweb.github.io/master/pic1.png`, 
                `https://raw.githubusercontent.com/risoweb/risoweb.github.io/master/pic2.png`, 
                `https://raw.githubusercontent.com/risoweb/risoweb.github.io/master/pic3.png`, 
                `https://raw.githubusercontent.com/risoweb/risoweb.github.io/master/pic4.png`, 
                `https://raw.githubusercontent.com/risoweb/risoweb.github.io/master/pic5.png`];

for (const image of images) {
  const newDiv = document.createElement('div');
  newDiv.classList.add('thumb');
  const newImage = document.createElement('img');
  newImage.setAttribute('src', `${image}`);
  newImage.addEventListener('click', e => displayedImage.src = e.target.src);
  newDiv.appendChild(newImage);
  thumbBar.appendChild(newDiv);
}
