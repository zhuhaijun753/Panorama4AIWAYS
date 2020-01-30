/*****************************************************************************
* 
* NXP Confidential Proprietary
*
* Copyright (c) 2014-2016 Freescale Semiconductor
* Copyright 2017 NXP 
* All Rights Reserved
*
******************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
****************************************************************************/

#ifndef HISTOGRAMTESTIMAGE_H
#define HISTOGRAMTESTIMAGE_H

#define HISTOGRAM_SRC_WIDTH 32
#define HISTOGRAM_SRC_HEIGHT 32

static unsigned char histogram_test_image08u[1024] = {
  136, 64, 168, 63, 66, 24, 133, 138, 154, 69, 184, 97, 37, 100, 109, 105, 143, 132, 166, 86, 105, 69, 106, 67, 137, 192, 170, 64, 135, 164, 84, 72,
  47, 68, 102, 114, 136, 58, 97, 84, 114, 62, 149, 78, 115, 146, 162, 152, 170, 54, 108, 105, 73, 46, 147, 95, 176, 179, 135, 64, 144, 161, 116, 168,
  32, 81, 66, 114, 136, 137, 63, 151, 125, 101, 59, 178, 115, 83, 142, 159, 130, 72, 123, 93, 72, 71, 133, 65, 144, 166, 92, 103, 179, 146, 122, 159,
  82, 133, 85, 62, 89, 140, 104, 143, 130, 106, 66, 194, 91, 145, 162, 129, 193, 110, 162, 52, 133, 99, 155, 141, 64, 137, 111, 150, 113, 162, 169, 176,
  127, 141, 60, 52, 75, 50, 101, 71, 175, 118, 44, 106, 85, 157, 130, 176, 147, 186, 145, 68, 156, 128, 178, 167, 78, 151, 175, 169, 77, 153, 74, 155,
  74, 88, 84, 135, 49, 103, 96, 148, 149, 96, 35, 61, 114, 130, 118, 171, 127, 91, 167, 112, 66, 126, 148, 62, 144, 158, 150, 182, 95, 169, 119, 78,
  56, 66, 100, 169, 161, 86, 148, 184, 94, 47, 88, 30, 129, 145, 108, 118, 177, 150, 65, 70, 129, 119, 171, 66, 176, 171, 86, 185, 58, 189, 154, 77,
  24, 130, 56, 57, 72, 112, 166, 109, 142, 114, 72, 48, 93, 97, 66, 201, 170, 182, 61, 49, 90, 107, 92, 63, 170, 162, 91, 193, 55, 174, 83, 111,
  95, 88, 133, 110, 62, 31, 124, 128, 154, 106, 125, 108, 73, 84, 99, 75, 184, 74, 164, 75, 66, 90, 76, 78, 166, 176, 119, 66, 78, 108, 143, 170,
  92, 55, 115, 157, 90, 36, 140, 82, 115, 51, 188, 58, 101, 86, 172, 154, 107, 57, 137, 105, 77, 142, 115, 79, 169, 129, 112, 54, 120, 119, 156, 183,
  38, 51, 114, 171, 173, 66, 68, 124, 79, 79, 155, 133, 113, 49, 193, 197, 90, 77, 118, 142, 86, 44, 104, 60, 181, 159, 80, 122, 197, 93, 81, 118,
  54, 81, 30, 92, 108, 133, 54, 169, 72, 132, 108, 195, 97, 109, 153, 143, 182, 90, 100, 91, 102, 72, 133, 127, 99, 72, 90, 159, 117, 140, 101, 173,
  80, 98, 54, 45, 115, 171, 54, 133, 168, 87, 78, 169, 109, 133, 97, 200, 194, 155, 148, 70, 176, 153, 161, 187, 127, 102, 151, 119, 54, 170, 65, 130,
  45, 34, 49, 68, 58, 91, 124, 109, 179, 120, 94, 39, 66, 139, 152, 195, 62, 123, 164, 170, 147, 134, 184, 80, 190, 78, 169, 149, 58, 137, 85, 75,
  54, 30, 58, 150, 106, 130, 93, 162, 88, 81, 62, 45, 157, 158, 161, 107, 114, 152, 71, 94, 52, 73, 183, 101, 178, 122, 142, 206, 56, 165, 95, 89,
  36, 100, 64, 148, 93, 76, 103, 134, 128, 56, 114, 65, 71, 104, 87, 176, 128, 182, 69, 122, 84, 100, 149, 144, 196, 116, 146, 176, 31, 194, 104, 73,
  65, 99, 111, 82, 144, 64, 73, 69, 145, 96, 60, 118, 78, 86, 116, 48, 201, 87, 142, 128, 57, 79, 86, 180, 143, 148, 138, 87, 80, 50, 89, 147,
  99, 96, 87, 164, 65, 128, 105, 145, 159, 52, 117, 51, 69, 74, 162, 109, 157, 80, 125, 175, 50, 105, 130, 109, 193, 136, 119, 79, 129, 57, 142, 182,
  37, 49, 87, 178, 107, 125, 140, 138, 52, 41, 177, 123, 110, 47, 194, 200, 77, 157, 138, 65, 102, 59, 91, 136, 158, 108, 104, 116, 179, 98, 64, 141,
  38, 49, 48, 161, 102, 111, 53, 144, 77, 150, 143, 193, 130, 73, 200, 130, 147, 127, 116, 80, 128, 49, 49, 136, 126, 74, 96, 132, 112, 168, 101, 183,
  97, 66, 63, 73, 104, 121, 76, 116, 109, 162, 127, 168, 161, 111, 160, 178, 196, 118, 191, 63, 138, 127, 138, 181, 118, 130, 121, 90, 53, 168, 167, 186,
  50, 34, 54, 42, 98, 134, 70, 143, 182, 84, 141, 82, 63, 144, 144, 187, 86, 136, 113, 100, 170, 151, 136, 122, 169, 138, 70, 100, 142, 126, 161, 127,
  55, 18, 38, 76, 97, 125, 87, 86, 169, 129, 114, 72, 145, 161, 153, 97, 68, 145, 80, 53, 71, 128, 132, 81, 191, 81, 95, 184, 78, 147, 64, 101,
  43, 39, 61, 150, 118, 131, 80, 68, 108, 123, 70, 100, 137, 142, 123, 137, 67, 155, 157, 103, 102, 92, 186, 149, 155, 146, 165, 179, 36, 169, 126, 70,
  58, 66, 28, 46, 135, 92, 93, 49, 96, 69, 152, 102, 150, 85, 177, 124, 165, 125, 135, 164, 131, 143, 105, 186, 99, 180, 97, 107, 76, 79, 94, 176,
  127, 84, 118, 164, 120, 97, 51, 120, 165, 58, 77, 120, 92, 117, 143, 70, 193, 99, 117, 186, 70, 145, 142, 183, 160, 118, 135, 81, 133, 97, 65, 185,
  88, 51, 85, 179, 126, 172, 92, 144, 141, 84, 98, 97, 143, 124, 177, 186, 81, 166, 128, 124, 163, 68, 95, 104, 170, 137, 130, 97, 129, 167, 69, 167,
  42, 53, 29, 164, 113, 137, 91, 167, 74, 124, 133, 164, 176, 63, 206, 155, 72, 146, 111, 132, 162, 63, 37, 150, 129, 106, 132, 97, 69, 159, 127, 114,
  67, 47, 46, 108, 98, 161, 28, 93, 90, 185, 77, 169, 164, 76, 185, 123, 164, 125, 155, 90, 89, 129, 52, 184, 90, 108, 150, 133, 77, 156, 156, 162,
  111, 26, 26, 38, 112, 154, 54, 121, 123, 41, 84, 107, 80, 171, 128, 167, 124, 140, 78, 73, 132, 187, 78, 157, 122, 111, 89, 145, 182, 73, 166, 106,
  51, 29, 45, 73, 62, 128, 43, 166, 179, 105, 96, 90, 130, 179, 117, 163, 98, 128, 84, 53, 127, 142, 145, 143, 165, 52, 138, 121, 113, 72, 53, 146,
  40, 27, 50, 82, 100, 153, 79, 108, 181, 129, 42, 94, 175, 180, 166, 136, 86, 111, 184, 146, 108, 79, 127, 93, 180, 69, 120, 101, 72, 88, 163, 112
};

#endif /* HISTOGRAMTESTIMAGE_H */ 
