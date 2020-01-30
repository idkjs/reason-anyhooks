/*
`use-constant`
signature from https: //github.com/Andarist/use-constant/blob/master/src/index.ts
*/
var React = require('react');

var useConstant = function (source) {
  var ref = React.useRef();

  if (!ref.current) {
    ref.current = {
      v: source()
    }
  }
  return ref.current.v;
}

module.exports = useConstant;
