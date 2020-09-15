type state;
type actionInfo;
type checked('a) = 'a;

[@bs.inline]
let checked = true;

[@bs.inline]
let unchecked = false;

[@bs.inline]
let mixed = "mixed";

[@bs.obj] external actionInfo: (~name: string, ~label: string=?) => actionInfo;

[@bs.obj]
external state:
  (
    ~disabled: bool=?,
    ~selected: bool=?,
    ~checked: checked('a)=?,
    ~busy: bool=?,
    ~expanded: bool=?,
    unit
  ) =>
  state;

type value;

[@bs.obj] external textValue: (~text: string) => value;

[@bs.obj] external intValue: (~min: int, ~max: int, ~now: int) => value;

type componentType = [
  | `none
  | `button
  | `radiobutton_checked
  | `radiobutton_unchecked
];

type liveRegion = [ | `none | `polite | `assertive];

type role = [
  | `none
  | `adjustable
  | `alert
  | `article
  | `banner
  | `button
  | `checkbox
  | `combobox
  | `complementary
  | `contentinfo
  | `form
  | `header
  | `image
  | `imagebutton
  | `keyboardkey
  | `link
  | `list
  | `listitem
  | `search
  | `summary
  | `text
  | `main
  | `menu
  | `menubar
  | `menuitem
  | `navigation
  | `progressbar
  | `radio
  | `radiogroup
  | `region
  | `scrollbar
  | `spinbutton
  | `tab
  | `tablist
  | `timer
  | `toolbar
];

type trait = [
  | `none
  | `button
  | `link
  | `header
  | `search
  | `image
  | `selected
  | `plays
  | `key
  | `text
  | `summary
  | `disabled
  | `frequentUpdates
  | `startsMedia
  | `adjustable
  | `allowsDirectInteraction
  | `pageTurn
];
