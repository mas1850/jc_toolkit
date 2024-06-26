//***************************************************************************************/
//MIT License

//Copyright (c) 2017 CTCaer

//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:

//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.

//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.
//***************************************************************************************/

#pragma once
#include <cstdint>
struct lut_amp {
	float amp_float[101];
	uint8_t ha[101];
	uint16_t la[101];
};

static lut_amp lut_joy_amp{
	{ 0.00000f, 0.007843f, 0.011823f, 0.014061f, 0.01672f, 0.019885f, 0.023648f, 0.028123f,
    0.033442f, 0.039771f, 0.047296f, 0.056246f, 0.066886f, 0.079542f, 0.094592f, 0.112491f,
    0.117471f, 0.122671f, 0.128102f, 0.133774f, 0.139697f, 0.145882f, 0.152341f, 0.159085f,
    0.166129f, 0.173484f, 0.181166f, 0.189185f, 0.197561f, 0.206308f, 0.215442f, 0.224982f,
    0.229908f, 0.234943f, 0.240087f, 0.245345f, 0.250715f, 0.256206f, 0.261816f, 0.267549f,
    0.273407f, 0.279394f, 0.285514f, 0.291765f, 0.298154f, 0.304681f, 0.311353f, 0.318171f,
    0.325138f, 0.332258f, 0.339534f, 0.346969f, 0.354566f, 0.362331f, 0.370265f, 0.378372f,
    0.386657f, 0.395124f, 0.403777f, 0.412619f, 0.421652f, 0.430885f, 0.440321f, 0.449964f,
    0.459817f, 0.469885f, 0.480174f, 0.490689f, 0.501433f, 0.512413f, 0.523633f, 0.535100f,
    0.546816f, 0.558790f, 0.571027f, 0.583530f, 0.596307f, 0.609365f, 0.622708f, 0.636344f,
    0.650279f, 0.664518f, 0.679069f, 0.693939f, 0.709133f, 0.724662f, 0.740529f, 0.756745f,
    0.773316f, 0.790249f, 0.807554f, 0.825237f, 0.843307f, 0.861772f, 0.880643f, 0.899928f,
    0.919633f, 0.939771f, 0.960348f, 0.981378f, 1.002867f },

	{ 0x0, 0x2, 0x04, 0x06, 0x08, 0x0a, 0x0c, 0x0e,
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e,
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e,
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e,
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e,
    0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e,
    0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e,
    0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e,
    0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e,
    0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e,
    0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae,
    0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe,
    0xc0, 0xc2, 0xc4, 0xc6, 0xc8 },

	{ 0x0040, 0x8040, 0x0041, 0x8041, 0x0042, 0x8042, 0x0043, 0x8043,
    0x0044, 0x8044, 0x0045, 0x8045, 0x0046, 0x8046, 0x0047, 0x8047,
    0x0048, 0x8048, 0x0049, 0x8049, 0x004a, 0x804a, 0x004b, 0x804b,
    0x004c, 0x804c, 0x004d, 0x804d, 0x004e, 0x804e, 0x004f, 0x804f,
    0x0050, 0x8050, 0x0051, 0x8051, 0x0052, 0x8052, 0x0053, 0x8053,
    0x0054, 0x8054, 0x0055, 0x8055, 0x0056, 0x8056, 0x0057, 0x8057,
    0x0058, 0x8058, 0x0059, 0x8059, 0x005a, 0x805a, 0x005b, 0x805b,
    0x005c, 0x805c, 0x005d, 0x805d, 0x005e, 0x805e, 0x005f, 0x805f,
    0x0060, 0x8060, 0x0061, 0x8061, 0x0062, 0x8062, 0x0063, 0x8063,
    0x0064, 0x8064, 0x0065, 0x8065, 0x0066, 0x8066, 0x0067, 0x8067,
    0x0068, 0x8068, 0x0069, 0x8069, 0x006a, 0x806a, 0x006b, 0x806b,
    0x006c, 0x806c, 0x006d, 0x806d, 0x006e, 0x806e, 0x006f, 0x806f,
    0x0070, 0x8070, 0x0071, 0x8071, 0x0072 }
};

