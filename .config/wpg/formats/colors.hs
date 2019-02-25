--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="/root/.config/wpg/wallpapers/happytrails.jpg"

-- Special
background="#2c2c2c"
foreground="#bcfafe"
cursor="#bcfafe"

-- Colors
color0="#2c2c2c"
color1="#d3d385"
color2="#fecf6b"
color3="#d3bb5b"
color4="#9dfeaf"
color5="#4299df"
color6="#fefe4a"
color7="#bcfafe"
color8="#95c1fe"
color9="#d3d385"
color10="#fecf6b"
color11="#d3bb5b"
color12="#9dfeaf"
color13="#4299df"
color14="#fefe4a"
color15="#bcfafe"