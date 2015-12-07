class Life_RscScrollBar
{
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "gui\thumb_ca.paa";
	arrowEmpty = "gui\arrowEmpty_ca.paa";
	arrowFull = "gui\arrowFull_ca.paa";
	border = "gui\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};

class Life_RscControlsGroup {
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = 16;
	
	class VScrollBar : Life_RscScrollBar
	{
		width = 0.021;
		autoScrollEnabled = 1;
	};
	
	class HScrollBar : Life_RscScrollBar
	{
		height = 0.028;
	};
	
	class Controls {};
};

class Life_RscControlsGroupNoScrollbars : Life_RscControlsGroup {
	class VScrollbar : VScrollbar {
		width = 0;
	};
	
	class HScrollbar : HScrollbar {
		height = 0;
	};
};

class Life_RscHud 
{
	idc = -1;
	type = 0;
	style = 0x00;
	colorBackground[] = { 1 , 1 , 1 , 0 };
	colorText[] = { 1 , 1 , 1 , 1 };
	font = "Zeppelin32";
	sizeEx = 0.025;
	h = 0.25;
	text = "";
};

class Life_RscListNBox
{
	style = 16;
	type = 102;
	shadow = 0;
	font = "Zeppelin32";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	color[] = {0.95,0.95,0.95,1};
	colorText[] = {1,1,1,1.0};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	period = 1.2;
	class ListScrollBar: Life_RscScrollBar{};
	class ScrollBar: Life_RscScrollBar{};
};


class Life_RscText {
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	type = 0;
	style = 0;
	shadow = 1;
	colorShadow[] = {0, 0, 0, 0.5};
	font = "Zeppelin32";
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	colorText[] = {1, 1, 1, 1.0};
	colorBackground[] = {0, 0, 0, 0};
	linespacing = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class Life_RscLine : Life_RscText {
	idc = -1;
	style = 176;
	x = 0.17;
	y = 0.48;
	w = 0.66;
	h = 0;
	text = "";
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1.0};
};

class Life_RscTree {
	style = 2;
	font = "Zeppelin32";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	expandedTexture = "gui\expandedTexture_ca.paa";
	hiddenTexture = "gui\hiddenTexture_ca.paa";
	rowHeight = 0.0439091;
	color[] = {1, 1, 1, 1};
	colorSelect[] = {0.7, 0.7, 0.7, 1};
	colorBackground[] = {0, 0, 0, 0};
	colorSelectBackground[] = {0, 0, 0, 0.5};
	colorBorder[] = {0, 0, 0, 0};
	borderSize = 0;
};

class Life_RscTitle : Life_RscText {
	style = 0;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {0.95, 0.95, 0.95, 1};
};

class life_RscPicture {
	shadow = 0;
	type = 0;
	style = 48;
	sizeEx = 0.023;
	font = "Zeppelin32";
	colorBackground[] = {};
	colorText[] = {};
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class Life_RscTextMulti : Life_RscText
{
	linespacing = 1;
	style = 0 + 16 + 0x200;
};

class Life_RscPictureKeepAspect : Life_RscPicture 
{
	style = 0x30 + 0x800;
};

class Life_RscStructuredText {
	type = 13;
	style = 0;
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {1, 1, 1, 1.0};
	shadow = 1;
	
	class Attributes {
		font = "Zeppelin32";
		color = "#ffffff";
		align = "left";
		shadow = 1;
	};
};

class Life_RscActiveText {
idc = -1;
    type = 11;
    style = 0;
    x = 0;
    y = 0;
    h = 0.037;
    w = 0.3;
    sizeEx = 0.040;
    font = "Zeppelin32";
    color[] = {1, 1, 1, 1};
    colorActive[] = {1, 0.2, 0.2, 1};

    action = "";
    text = "";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class Life_RscButton 
{
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "Zeppelin32";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {1,1,1,1.0};
	colorDisabled[] = {0.4,0.4,0.4,1};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.7};
	colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	colorFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorShadow[] = {0,0,0,1};
	colorBorder[] = {0,0,0,1};
	borderSize = 0.0;
	
	soundPush[] = { "", 0, 1 };
	soundEnter[] =	{ "", 0, 1 };
	soundClick[] ={ "", 0, 1 };
	soundEscape[] ={ "", 0, 1 };
	sound[] ={ "", 0, 1 };

};

class Life_RscButtonTextOnly : Life_RscButton {
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	colorBackground[] = {1, 1, 1, 0};
	colorBackgroundActive[] = {1, 1, 1, 0};
	colorBackgroundDisabled[] = {1, 1, 1, 0};
	colorFocused[] = {1, 1, 1, 0};
	colorShadow[] = {1, 1, 1, 0};
	borderSize = 0.0;
};

class Life_RscShortcutButton {
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	color[] = {1,1,1,1.0};
	colorFocused[] = {1,1,1,1.0};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackground2[] = {1,1,1,1};
	animTextureDefault = "gui\normal_ca.paa";
	animTextureNormal = "gui\normal_ca.paa";
	animTextureDisabled = "gui\normal_ca.paa";
	animTextureOver = "gui\over_ca.paa";
	animTextureFocused = "gui\focus_ca.paa";
	animTexturePressed = "gui\down_ca.paa";
	periodFocus = 1.2;
	periodOver = 0.8;
	class HitZone
	{
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	class ShortcutPos
	{
		left = 0;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	period = 0.4;
	font = "Zeppelin32";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	action = "";
	class Attributes
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	class AttributesImage
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
	};
	
	soundPush[] = { "", 0, 1 };
	soundEnter[] =	{ "", 0, 1 };
	soundClick[] ={ "", 0, 1 };
	soundEscape[] ={ "", 0, 1 };
	sound[] ={ "", 0, 1 };
};

class Life_RscButtonMenu : Life_RscShortcutButton {
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class TextPos
	{
		left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "(6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top = 0.005;
		w = 0.0225;
		h = 0.03;
	};
	textureNoShortcut = "";
};

class Life_RscShortcutButtonMain : Life_RscShortcutButton {
	idc = -1;
	style = 0;
	default = 0;
	w = 0.313726;
	h = 0.104575;
	color[] = {1, 1, 1, 1.0};
	colorDisabled[] = {1, 1, 1, 0.25};
	
	class HitZone {
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	
	class ShortcutPos {
		left = 0.0145;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		w = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
		h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};
	
	class TextPos {
		left = "(		((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	animTextureNormal = "gui\main\normal_ca.paa";
	animTextureDisabled = "gui\main\disabled_ca.paa";
	animTextureOver = "gui\main\over_ca.paa";
	animTextureFocused = "gui\main\focus_ca.paa";
	animTexturePressed = "gui\main\down_ca.paa";
	animTextureDefault = "gui\main\normal_ca.paa";
	period = 0.5;
	font = "Zeppelin32";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	text = "";
	action = "";
	
	class Attributes {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	
	class AttributesImage {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "false";
	};
};

class Life_RscCheckbox {
	idc = -1;
	type = 7;
	style = 0;
	x = "LINE_X(XVAL)";
	y = LINE_Y;
	w = "LINE_W(WVAL)";
	h = 0.029412;
	colorText[] = {1, 0, 0, 1};
	color[] = {0, 0, 0, 0};
	colorBackground[] = {0, 0, 1, 1};
	colorTextSelect[] = {0, 0.8, 0, 1};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 1};
	colorSelect[] = {0, 0, 0, 1};
	colorTextDisable[] = {0.4, 0.4, 0.4, 1};
	colorDisable[] = {0.4, 0.4, 0.4, 1};
	font = "Zeppelin32";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = 1;
	5ns = 1;
	strings[] = {UNCHECKED};
	checked_strings[] = {CHECKED};
	soundPush[] = { "", 0, 1 };
	soundEnter[] =	{ "", 0, 1 };
	soundClick[] ={ "", 0, 1 };
	soundEscape[] ={ "", 0, 1 };
	sound[] ={ "", 0, 1 };
};

class Life_RscProgress 
{
	type = 8;
	style = 0;
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	texture = "";
	shadow = 2;
	colorFrame[] = {0, 0, 0, 1};
	colorBackground[] = {0,0,0,0.7};
	colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
};

class Life_RscListBox 
{
	style = 16;
	idc = -1;
	type = 5;
	w = 0.275;
	h = 0.04;
	font = "Zeppelin32";
	colorSelect[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	colorBackground[] = {0.28,0.28,0.28,0.28};
	colorSelect2[] = {1, 1, 1, 1};
	colorSelectBackground[] = {0.95, 0.95, 0.95, 0.5};
	colorSelectBackground2[] = {1, 1, 1, 0.5};
	colorScrollbar[] = {0.2, 0.2, 0.2, 1};
	arrowFull = "gui\arrowFull_ca.paa";
	arrowEmpty = "gui\arrowEmpty_ca.paa";
	wholeHeight = 0.45;
	rowHeight = 0.04;
	color[] = {0.7, 0.7, 0.7, 1};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0.3};
	sizeEx = 0.023;
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class ListScrollBar: Life_RscScrollBar
	{
		color[] = {1,1,1,1};
		autoScrollEnabled = 1;
	};
	class ScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
		border = "\ca\ui\data\igui_border_scroll_ca.paa";
	};
	soundPush[] = { "", 0, 1 };
	soundEnter[] =	{ "", 0, 1 };
	soundClick[] ={ "", 0, 1 };
	soundEscape[] ={ "", 0, 1 };
	sound[] ={ "", 0, 1 };
	soundSelect[] = { "", 0, 1 };
};

class Life_RscEdit {
	type = 2;
	style = 0x00 + 0x40;
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorBackground[] = {0, 0, 0, 1};

	colorText[] = {0.95, 0.95, 0.95, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	autocomplete = false;
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 1};
	canModify = 1;
	soundPush[] = { "", 0, 1 };
	soundEnter[] =	{ "", 0, 1 };
	soundClick[] ={ "", 0, 1 };
	soundEscape[] ={ "", 0, 1 };
	sound[] ={ "", 0, 1 };
};

class Life_RscSlider {
	h = 0.025;
	color[] = {1, 1, 1, 0.8};
	colorActive[] = {1, 1, 1, 1};
};

class life_RscXSliderH 
{
	style = 1024;
	type = 43;
	shadow = 2;
	x = 0;
	y = 0;
	h = 0.029412;
	w = 0.400000;
	color[] = {
			1, 1, 1, 0.7
	};
	colorActive[] = {
			1, 1, 1, 1
	};
	colorDisabled[] = {
			1, 1, 1, 0.500000
	};
	arrowEmpty = "gui\slider\arrowEmpty_ca.paa";
	arrowFull = "gui\slider\arrowFull_ca.paa";
	border = "gui\slider\border_ca.paa";
	thumb = "gui\slider\thumb_ca.paa";
};

class Life_RscFrame {
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	font = "Zeppelin32";
	sizeEx = 0.02;
	text = "";
};

class Life_RscBackground : Life_RscText {
	type = 0;
	IDC = -1;
	style = 512;
	shadow = 0;
	x = 0.0;
	y = 0.0;
	w = 1.0;
	h = 1.0;
	text = "";
	ColorBackground[] = {0.48, 0.5, 0.35, 1};
	ColorText[] = {0.1, 0.1, 0.1, 1};
	font = "Zeppelin32";
	SizeEx = 1;
};

class Life_RscHTML {
	colorText[] = {1, 1, 1, 1.0};
	colorBold[] = {1, 1, 1, 1.0};
	colorLink[] = {1, 1, 1, 0.75};
	colorLinkActive[] = {1, 1, 1, 1.0};
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	prevPage = "gui\arrow_left_ca.paa";
	nextPage = "gui\arrow_right_ca.paa";
	shadow = 2;
	
	class H1 {
		font = "Zeppelin32";
		fontBold = "Zeppelin32";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
		align = "left";
	};
	
	class H2 {
		font = "Zeppelin32";
		fontBold = "Zeppelin32";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "right";
	};
	
	class H3 {
		font = "Zeppelin32";
		fontBold = "Zeppelin32";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
	
	class H4 {
		font = "Zeppelin32";
		fontBold = "Zeppelin32";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
	
	class H5 {
		font = "Zeppelin32";
		fontBold = "Zeppelin32";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
	
	class H6 {
		font = "Zeppelin32";
		fontBold = "Zeppelin32";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
	
	class P {
		font = "Zeppelin32";
		fontBold = "Zeppelin32";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
};

class Life_RscCombo {
	style = 16;
	type = 4;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	shadow = 0;
	colorSelect[] = {0, 0, 0, 1};	
	colorText[] = {0.95, 0.95, 0.95, 1};
	maxHistoryDelay = 1;
	colorBackground[] = {0.4,0.4,0.4,0.4};
	colorSelectBackground[] = {1, 1, 1, 0.7};
	colow_Rscrollbar[] = {1, 0, 0, 1};
	arrowFull = "gui\arrowFull_sca.paa";
	arrowEmpty = "gui\arrowEmpty_ca.paa";
	wholeHeight = 0.45;
	color[] = {1, 1, 1, 1};
	colorActive[] = {1, 0, 0, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	font = "Zeppelin32";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	
	class ComboScrollBar : Life_RscScrollBar {};
};

class Life_RscToolbox {
	colorText[] = {0.95, 0.95, 0.95, 1};
	color[] = {0.95, 0.95, 0.95, 1};
	colorTextSelect[] = {0.95, 0.95, 0.95, 1};
	colorSelect[] = {0.95, 0.95, 0.95, 1};
	colorTextDisable[] = {0.4, 0.4, 0.4, 1};
	colorDisable[] = {0.4, 0.4, 0.4, 1};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
	font = "Zeppelin32";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};

class AH_RSC_AHT {
	idd = 3030;
	movingEnable = 1;
	moving = 1;
	enableSimulation = 0;
	onload = "";
	onunload = "";
	class controlsBackground {
		class Menu_titlebarBG: RscPicture {
			idc = 1200;
			text = "DamiMods\GUI\background_ca.paa";
			x = "0.235 * safezoneW + safezoneX";
			y = "safezoneY + 0.025";
			w = "0.529 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.1,0.1,0.9};
		};
		class Menu_MBoxBG : RscText {
			idc = 1000;
			type = 0;
			text = "";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 0.75";
			w = "0.3";
			h = "safezoneH - 0.93";
			colorBackground[] = {0.3,0,0,0.5};
		};
		class Menu_TBoxBG : RscText {
			idc = 1001;
			type = 0;
			text = "";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 0.07";
			w = "0.3";
			h = "safezoneH - 1.143";
			colorBackground[] = {0, 0, 0, 0.5};
		};
		class Menu_BBox : RscText {
			idc = 1002;
			type = 0;
			text = "";
			x = "0.2365 * safezoneW + safezoneX + 0.9774245";
			y = "safezoneY + 1.65";
			w = "0.301";
			h = "safezoneH - 1.68";
			colorBackground[] = {0, 0, 0, 0.5};
		};
		class Menu_titlebar: RscText {
			moving = 1;
			idc = 1004;
			type = 0;
			text = "Title";
			font = "TahomaB";
			x = "0.235 * safezoneW + safezoneX";
			y = "safezoneY + 0.025";
			w = "0.529 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,1,1,0.8};
			colorBackground[] = {-1,-1,-1,-1};
		};
		class MainTreeBG : RscText {
			idc = 1005;
			type = 0;
			text = "";
			x = "0.235 * safezoneW + safezoneX";
			y = "safezoneY + 0.07";
			w = "0.3";
			h = "safezoneH - 0.07 - 0.03";
			colorBackground[] = {0, 0, 0, 0.5};
		};
		class MainListBG : RscText {
			idc = 1006;
			type = 0;
			text = "";
			x = "0.237 * safezoneW + safezoneX + 0.3";
			y = "safezoneY + 0.07";
			w = "safezoneWAbs - 1.75";
			h = "safezoneH - 0.07 - 0.03";
			colorBackground[] = {0, 0, 0, 0.8};
		};
	};
	class Controls {
		class Menu_TboxHolder: RscControlsGroup {
			idc = 100301;
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 0.07";
			w = "0.3";
			h = "safezoneH - 1.143";
			sizeEx = 0.023;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,-1};
			class Controls {
				class Menu_TBox : RscStructuredText {
					idc = 1003;
					text = "";
					x = "0";
					y = "0";
					w = "0.29";
					h = "1";
				};
			};
		};
		class MainTree {
			style = 0;
			maxHistoryDelay = 0;
			idc = 1;
			type = 5;
			x = "0.235 * safezoneW + safezoneX";
			y = "safezoneY + 0.07";
			w = "0.3";
			h = "safezoneH - 0.07 - 0.03";
			font = "Zeppelin32";
			sizeEx = 0.023;
			text = "";
			rowHeight = 0;
			color[] = {0.95, 0.95, 0.95, 0.5};
			colorText[] = {0.95, 0.95, 0.95, 1};
			colorScrollbar[] = {0.8, 0.3, 0.3, 1};
			colorSelect[] = {0, 0, 0, 1};
			colorSelect2[] = {0, 0, 0, 1};
			colorSelectBackground[] = {0.7, 0.7, 0.7, 1};
			colorSelectBackground2[] = {0.7, 0.7, 0.7, 1};
			colorDisabled[] = {0.8, 0.3, 0.3, 0.75};
			period = 0;
			colorBackground[] = {0, 0, 0, 0.5};
			soundSelect[] = {"", 0.1, 1};
			onLBSelChanged = "";
			onLBDblClick = ";";
			onMouseButtonDown = "";
			onKeyDown = "";
			class ScrollBar {
				color[] = {0.8, 0.3, 0.3, 1};
				colorActive[] = {1, 1, 1, 1};
				colorDisabled[] = {1, 1, 1, 1};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_left_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_left_active_ca.paa";
				border = "\ca\ui\data\ui_border_frame_ca.paa";
			};
			class ListScrollBar: ScrollBar {};
			autoScrollRewind = 0;
			autoScrollDelay = 0;
			autoScrollSpeed = 0;
			shadow = 0;
		};
		class MainList : MainTree {
			color[] = {0.8, 0.3, 0.3, 0.5};
			colorActive[] = {0.8, 0.3, 0.3, 0.5};
			colorDisabled[] = {0.8, 0.3, 0.3, 0.5};
			colorBackground[] = {0, 0, 0, 0.8};
			idc = 2;
			x = "0.237 * safezoneW + safezoneX + 0.3";
			y = "safezoneY + 0.07";
			w = "safezoneWAbs - 1.75";
			h = "safezoneH - 0.07 - 0.03";
			onLBSelChanged = "";
			onLBDblClick = "";
			onMouseButtonDown = "";
			onKeyDown = "";
			shadow = false;
		};
		class Menu_MBox : RscEdit {
			idc = 4;
			style = "0x00 + 0x10";
			linespacing = 1;
			text = "";
			font = "EtelkaMonospaceProBold";
			htmlControl = true;
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 0.75";
			w = "0.3";
			h = "safezoneH - 0.93";
			colorText[] = {1,0.8,0.8,1};
			colorBackground[] = {0,0,0,0};
		};
		class Menu_btnTTL: RscButton {
			idc = 781;
			text = "Run target";
			font = "Zeppelin32";
			onButtonClick = "[format ['if (name player == ''%1'') then {'+(ctrlText (((ctrlParent (_this select 0)) displayCtrl 4)))+'};',(lbtext [1,(lbCurSel 1)])]] spawn admin_dothis;";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 1.655";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.23,0,1};
			colorBackground[] = {0.15,0,0,1};
		};
		class Menu_btnTTR: RscButton {
			idc = 782;
			text = "Clear text";
			font = "Zeppelin32";
			onButtonClick = "((ctrlParent (_this select 0)) displayCtrl 4) ctrlSetText ''";
			x = "0.237 * safezoneW + safezoneX + 1.13";
			y = "safezoneY + 1.655";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.23,0,1};
			colorBackground[] = {0.15,0,0,1};
		};
		class Menu_btnTL: RscButton {
			idc = 891;
			text = "Run local";
			font = "Zeppelin32";
			onButtonClick = "call compile (ctrlText (((ctrlParent (_this select 0)) displayCtrl 4)));";
			x = "0.237 * safezoneW + safezoneX + 1.13";
			y = "safezoneY + 1.7";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.23,0,1};
			colorBackground[] = {0.15,0,0,1};
		};
		class Menu_btnTR: RscButton {
			idc = 892;
			text = "Run global";
			font = "Zeppelin32";
			onButtonClick = "[ctrlText (((ctrlParent (_this select 0)) displayCtrl 4))] spawn admin_dothis;";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 1.7";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.23,0,1};
			colorBackground[] = {0.15,0,0,1};
		};
		class Menu_btnBL: RscButton {
			idc = 981;
			text = "MSG server";
			font = "Zeppelin32";
			onButtonClick = "ctrlText (((ctrlParent (_this select 0)) displayCtrl 4)) spawn msg_all;";
			x = "0.237 * safezoneW + safezoneX + 0.978";
			y = "safezoneY + 1.745";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.23,0,1};
			colorBackground[] = {0.15,0,0,1};
		};
		class Menu_btnBR: RscButton {
			idc = 982;
			text = "MSG target";
			font = "Zeppelin32";
			onButtonClick = "ctrlText (((ctrlParent (_this select 0)) displayCtrl 4)) spawn msg_player";
			x = "0.237 * safezoneW + safezoneX + 1.13";
			y = "safezoneY + 1.745";
			w = "0.06 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.23,0,1};
			colorBackground[] = {0.15,0,0,1};
		};
		class Menu_btnDisc: RscButton {
			idc = 990;
			text = "Disconnect";
			font = "Zeppelin32";
			onButtonClick = "endMission 'loser'";
			x = "0.712 * safezoneW + safezoneX";
			y = "safezoneY + 0.025";
			w = "0.052 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.23,0,1};
			colorDisabled[] = {1,0.1,0.1,0};
			colorBackground[] = {1,0.1,0.1,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {1,0.1,0.1,1};
			colorFocused[] = {0.75,0.75,0.75,.5};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
		};
	};
};
class AH_RSC_TXT {
	idd = 71069;
	movingEnable = true;
	moving = 1;
	onLoad = "";
	onUnload = "";
	class controlsBackground {
		class TXT_titlebg: RscPicture {
			idc = 1200;
			text = "DamiMods\GUI\background_ca.paa";
			x = "0.376256 * safezoneW + safezoneX";
			y = "0.444978 * safezoneH + safezoneY";
			w = "0.237177 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.1,0.1,0.9};
		};
		class TXT_title: RscText {
			idc = 1000;
			type = 0;
			text = "Title";
			font = "TahomaB";
			moving = 1;
			x = "0.376256 * safezoneW + safezoneX";
			y = "0.444978 * safezoneH + safezoneY";
			w = "0.237177 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,1,1,0.8};
			colorBackground[] = {-1,-1,-1,-1};
		};
		class TXT_mainbg: RscText {
			idc = 1001;
			text = "";
			type = 0;
			x = "0.376256 * safezoneW + safezoneX";
			y = "0.466986 * safezoneH + safezoneY";
			w = "0.237177 * safezoneW";
			h = "0.0880359 * safezoneH";
			colorBackground[] = {0,0,0,0.5};
		};
		class TXT_editTitle: RscText {
			idc = 1002;
			text = "Text:";
			font = "Zeppelin32";
			x = "0.381412 * safezoneW + safezoneX";
			y = "0.466986 * safezoneH + safezoneY";
			w = "0.232021 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0.8,0.8,0.9};
		};
		class TXT_editboxbg: RscText {
			text = "";
			idc = 1003;
			x = "0.386568 * safezoneW + safezoneX";
			y = "0.488995 * safezoneH + safezoneY";
			w = "0.216553 * safezoneW";
			h = "0.022009 * safezoneH";
			colorBackground[] = {0.3,0,0,0.2};
		};
	};
	class controls {
		class TXT_editbox: RscEdit {
			idc = 101;
			text = "";
			font = "EtelkaMonospaceProBold";
			x = "0.386568 * safezoneW + safezoneX";
			y = "0.488995 * safezoneH + safezoneY";
			w = "0.216553 * safezoneW";
			h = "0.022009 * safezoneH";
			colorBackground[] = {1,1,1,1};
			colorActive[] = {1,0.5,0.5,1};
		};
		class TXT_btnLeft: RscButton {
			idc = 1;
			text = "OK";
			font = "Zeppelin32";
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			onButtonClick = "TXT_var = ctrlText (((ctrlParent (_this select 0)) displayCtrl 101));";
			x = "0.386568 * safezoneW + safezoneX";
			y = "0.522009 * safezoneH + safezoneY";
			w = "0.0412482 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {0,1,0,1};
			colorBackground[] = {0.15,0,0,1};
		};
		class TXT_btnRight: RscButton {
			idc = 2;
			text = "Cancel";
			font = "Zeppelin32";
			shortcuts[] = {1};
			onButtonClick = "closeDialog 0;";
			x = "0.561872 * safezoneW + safezoneX";
			y = "0.522009 * safezoneH + safezoneY";
			w = "0.0412482 * safezoneW";
			h = "0.022009 * safezoneH";
			colorText[] = {1,0,0,1};
			colorBackground[] = {0.15,0,0,1};
		};
	};
};