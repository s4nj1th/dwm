# DWM Rice by Sanjith

This is my old rice for [DWM](https://dwm.suckless.org/). While I’ve since moved on from DWM, I’m keeping this repo around — both as a personal reference and in case others find it useful.

---

## Included Patches

This setup integrates several key patches to enhance DWM without compromising its minimalism:

* `dwm-alternativetags-6.3.diff`
* `dwm-alwayscenter-20200625-f04cac6.diff`
* `dwm-attachbelow-6.2.diff`
* `dwm-bar-height-6.2.diff`
* `dwm-cfacts-20200913-61bb8b2.diff`
* `dwm-fakefullscreen-20210714-138b405.diff`
* `dwm-gaps-6.0.diff`
* `dwm-hide_vacant_tags-6.3.diff`
* `dwm-movecenter-6.2.diff`
* `dwm-pertag-20200914-61bb8b2.diff`
* `dwm-resizecorners-6.2.diff`
* `dwm-selectivefakefullscreen-20201224-cb3f58a.diff`
* `dwm-statuscmd-20210405-67d76e.diff`
* `dwm-swallow-6.3.diff`
* `dwm-winicon-6.3-v2.1.diff`
* `dwm-xrdb-6.4.diff`

These patches bring in features like dynamic gaps, centered window placement, per-tag layouts, swallow functionality, status command support, and theming via `xrdb`. Everything is integrated with care — no patchbombing here.

---

## Installation

```bash
git clone https://github.com/s4nj1th/dwm.git
cd dwm
sudo make install
```

> Make sure your system has the necessary development tools and Xlib headers installed before building.

---

## Dynamic Theming (Xresources + Pywal)

This rice supports dynamic theming using [pywal](https://github.com/dylanaraps/pywal) and `xrdb`. Color schemes can be updated in real-time based on wallpapers.

### 1. Install Pywal

```bash
pip install pywal
```

### 2. Generate a Theme

Use an image to generate a color scheme:

```bash
wal -i /path/to/your/image.jpg
```

Or use [my `setBg` script](https://github.com/s4nj1th/shell-scripts/blob/main/setBg), which handles both wallpaper setting and theming.

> **Bound to:** `Meta + Shift + F5`

### 3. Load Xresources

Merge the updated color scheme into the X resources:

```bash
xrdb -merge ~/.Xresources
```

> **Bound to:** `Meta + F5`

### 4. Launch DWM

Start DWM from `.xinitrc` or via your login manager.
This config includes the `dwm-xrdb` patch, so the theme is loaded automatically on startup.

---

## Notes

* Most patches are lightly modified for compatibility.
* Keybindings are tailored to my workflow — don’t expect stock defaults.

---

## Why I Moved On

DWM is minimalist, fast, and highly customizable — and this config makes it even more usable day-to-day. But over time, I shifted to KDE for a more feature-rich and integrated desktop experience. If you're into lean, hackable window managers, though, this setup still holds up.
