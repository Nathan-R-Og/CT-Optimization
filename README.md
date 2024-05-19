# Modding Chameleon Twist

## Setup

Simply run `./configure` to install the main `chameleonTwistv1.0-JP` repository
This will allow you to use it like normal, with this repo being a layer on top

Make sure to also have a Chameleon Twist rom, or else the rom will not be able to be split

## Making Changes

Make sure to have the files you want to edit/replace/inject in the same place they would be in the main repository

- Run `./configure` to install the main `chameleonTwistv1.0-JP` repository (if not already done)
- This will automatically copy `src/`
- The rom will split like normal
- Next, it will automatically copy any folders usually generated (`asm/`, `assets/`)

Finally, run `./ninja` when you are ready to build.

The resulting build will be in `chameleonTwistv1.0-JP/build`, like normal.