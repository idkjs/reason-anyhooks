
[@bs.val] external window: 'a = "window";
[@bs.module "unhook"]
external useEffect: ([@bs.uncurry] (unit => option(unit => unit))) => unit =
  "useEffect";
let useEffect = useEffect;
[@bs.module "unhook"]
external useEffect0:
  ([@bs.uncurry] (unit => option(unit => unit)), [@bs.as {json|[]|json}] _) =>
  unit =
  "useEffect";

[@bs.module "unhook"]
external useEffect1:
  ([@bs.uncurry] (unit => option(unit => unit)), array('a)) => unit =
  "useEffect";

[@bs.module "unhook"]
external useEffect2:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b)) => unit =
  "useEffect";
[@bs.module "unhook"]
external useEffect3:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c)) => unit =
  "useEffect";

[@bs.module "unhook"]
external useEffect4:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd)) => unit =
  "useEffect";
[@bs.module "unhook"]
external useEffect5:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd, 'e)) =>
  unit =
  "useEffect";
[@bs.module "unhook"]
external useEffect6:
  ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd, 'e, 'f)) =>
  unit =
  "useEffect";
[@bs.module "unhook"]
external useEffect7:
  (
    [@bs.uncurry] (unit => option(unit => unit)),
    ('a, 'b, 'c, 'd, 'e, 'f, 'g)
  ) =>
  unit =
  "useEffect";

[@bs.module "unhook"]
external useState:
  ([@bs.uncurry] (unit => 'state)) => ('state, ('state => 'state) => unit) =
  "useState";
let useState = useState;

[@bs.module "unhook"]
external useReducer:
  ([@bs.uncurry] (('state, 'action) => 'state), 'state) =>
  ('state, 'action => unit) =
  "useReducer";

[@bs.module "unhook"]
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

[@bs.module "unhook"]
external useCallback:
  ([@bs.uncurry] ('input => 'output)) => callback('input, 'output) =
  "useCallback";
[@bs.module "unhook"]
external useCallback0:
  ([@bs.uncurry] ('input => 'output), [@bs.as {json|[]|json}] _) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "unhook"]
external useCallback1:
  ([@bs.uncurry] ('input => 'output), array('a)) => callback('input, 'output) =
  "useCallback";
[@bs.module "unhook"]
external useCallback2:
  ([@bs.uncurry] ('input => 'output), ('a, 'b)) => callback('input, 'output) =
  "useCallback";
[@bs.module "unhook"]
external useCallback3:
  ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c)) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "unhook"]
external useCallback4:
  ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd)) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "unhook"]
external useCallback5:
  ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd, 'e)) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "unhook"]
external useCallback6:
  ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd, 'e, 'f)) =>
  callback('input, 'output) =
  "useCallback";
[@bs.module "unhook"]
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
[@bs.module "unhook"]
external useContext: Context.t('any) => 'any = "useContext";

[@bs.module "unhook"] external useRef: 'value => Ref.t('value) = "useRef";
[@bs.module "unhook"]
external useMemo: ([@bs.uncurry] (unit => 'any)) => 'any = "useMemo";
[@bs.module "unhook"]
external useMemo0:
  ([@bs.uncurry] (unit => 'any), [@bs.as {json|[]|json}] _) => 'any =
  "useMemo";
[@bs.module "unhook"]
external useMemo1: ([@bs.uncurry] (unit => 'any), array('a)) => 'any =
  "useMemo";
[@bs.module "unhook"]
external useMemo2: ([@bs.uncurry] (unit => 'any), ('a, 'b)) => 'any =
  "useMemo";
[@bs.module "unhook"]
external useMemo3: ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c)) => 'any =
  "useMemo";
[@bs.module "unhook"]
external useMemo4: ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd)) => 'any =
  "useMemo";
[@bs.module "unhook"]
external useMemo5:
  ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd, 'e)) => 'any =
  "useMemo";
[@bs.module "unhook"]
external useMemo6:
  ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd, 'e, 'f)) => 'any =
  "useMemo";
[@bs.module "unhook"]
external useMemo7:
  ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd, 'e, 'f, 'g)) => 'any =
  "useMemo";