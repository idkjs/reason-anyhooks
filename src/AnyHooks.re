[@bs.module "any-hooks"]
external useEffect: ([@bs.uncurry] (unit => option(unit => unit))) => unit =
  "useEffect";

let useEffect = useEffect;

[@bs.module "any-hooks"]
external useEffect0:
  ([@bs.uncurry] (unit => option(unit => unit)), [@bs.as {json|[]|json}] _) =>
  unit =
  "useEffect";
[@bs.module "any-hooks"]
external useEffect1:
  ([@bs.uncurry] (unit => option(unit => unit)), array('a)) => unit =
  "useEffect";
[@bs.module "any-hooks"]
external useEffect2:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b)) => unit =
  "useEffect";
[@bs.module "any-hooks"]
external useEffect3:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c)) => unit =
  "useEffect";
[@bs.module "any-hooks"]
external useEffect4:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd)) => unit =
  "useEffect";
[@bs.module "any-hooks"]
external useEffect5:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd, 'e)) =>
  unit =
  "useEffect";
[@bs.module "any-hooks"]
external useEffect6:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd, 'e, 'f)) =>
  unit =
  "useEffect";
[@bs.module "any-hooks"]
external useEffect7:
  (
    [@bs.uncurry] (unit => option(unit => unit)),
    ('a, 'b, 'c, 'd, 'e, 'f, 'g)
  ) =>
  unit =
  "useEffect";

[@bs.module "any-hooks"]
external useState:
  ([@bs.uncurry] (unit => 'state)) => ('state, ('state => 'state) => unit) =
  "useState";
let useState = useState;
[@bs.module "any-hooks"]
external useReducer:
  ([@bs.uncurry] (('state, 'action) => 'state), 'state) =>
  ('state, 'action => unit) =
  "useReducer";

[@bs.module "any-hooks"]
external useReducerWithMapState:
  (
    [@bs.uncurry] (('state, 'action) => 'state),
    'initialState,
    'initialState => 'state
  ) =>
  ('state, 'action => unit) =
  "useReducer";

// Callbacks

/* This is used as return values  */
type callback('input, 'output) = 'input => 'output;

[@bs.module "any-hooks"]
external useCallback:
  ([@bs.uncurry] ('input => 'output)) => callback('input, 'output) =
  "useCallback";
[@bs.module "any-hooks"]
external useCallback0:
  ([@bs.uncurry] ('input => 'output), [@bs.as {json|[]|json}] _) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "any-hooks"]
external useCallback1:
  ([@bs.uncurry] ('input => 'output), array('a)) => callback('input, 'output) =
  "useCallback";
[@bs.module "any-hooks"]
external useCallback2:
  ([@bs.uncurry] ('input => 'output), ('a, 'b)) => callback('input, 'output) =
  "useCallback";
[@bs.module "any-hooks"]
external useCallback3:
  ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c)) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "any-hooks"]
external useCallback4:
  ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd)) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "any-hooks"]
external useCallback5:
  ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd, 'e)) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "any-hooks"]
external useCallback6:
  ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd, 'e, 'f)) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "any-hooks"]
external useCallback7:
  ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd, 'e, 'f, 'g)) =>
  callback('input, 'output) =
  "useCallback";
module Context = {
  type t('any);
};
module Ref = {
  type t('value);
};
[@bs.module "any-hooks"]
external useContext: Context.t('any) => 'any = "useContext";

[@bs.module "any-hooks"]
external useRef: 'value => Ref.t('value) = "useRef";
[@bs.module "any-hooks"]
external useMemo: ([@bs.uncurry] (unit => 'any)) => 'any = "useMemo";
[@bs.module "any-hooks"]
external useMemo0:
  ([@bs.uncurry] (unit => 'any), [@bs.as {json|[]|json}] _) => 'any =
  "useMemo";
[@bs.module "any-hooks"]
external useMemo1: ([@bs.uncurry] (unit => 'any), array('a)) => 'any =
  "useMemo";
[@bs.module "any-hooks"]
external useMemo2: ([@bs.uncurry] (unit => 'any), ('a, 'b)) => 'any =
  "useMemo";
[@bs.module "any-hooks"]
external useMemo3: ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c)) => 'any =
  "useMemo";
[@bs.module "any-hooks"]
external useMemo4: ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd)) => 'any =
  "useMemo";
[@bs.module "any-hooks"]
external useMemo5:
  ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd, 'e)) => 'any =
  "useMemo";
[@bs.module "any-hooks"]
external useMemo6:
  ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd, 'e, 'f)) => 'any =
  "useMemo";
[@bs.module "any-hooks"]
external useMemo7:
  ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd, 'e, 'f, 'g)) => 'any =
  "useMemo";