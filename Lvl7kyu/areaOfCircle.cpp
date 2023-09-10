
function circleArea(radius) {
    if (radius <= 0) {throw invalid_argument("Radius must be positive.");}
 return radius * radius * 3.14159265358979323846;
}

// 
const circleArea = radius =>
  radius > 0 && Math.round(Math.PI * radius ** 2 * 1e2) / 1e2;