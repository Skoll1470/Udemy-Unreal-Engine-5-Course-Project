#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(in_vectLocation, in_Color) if (GetWorld()) DrawDebugSphere(GetWorld(), in_vectLocation, 25.f, 12, in_Color, false, 30.f);
#define DRAW_SPHERE_SINGLE_FRAME(in_vectLocation, in_Color) if (GetWorld()) DrawDebugSphere(GetWorld(), in_vectLocation, 25.f, 12, in_Color, false, -1.f);
#define DRAW_LINE(in_vectStartLocation, in_vectEndLocation, in_Color) if (GetWorld()) DrawDebugLine(GetWorld(), in_vectStartLocation, in_vectEndLocation, in_Color, false, 30.f, 0, 1.f);
#define DRAW_LINE_SINGLE_FRAME(in_vectStartLocation, in_vectEndLocation, in_Color) if (GetWorld()) DrawDebugLine(GetWorld(), in_vectStartLocation, in_vectEndLocation, in_Color, false, -1.f, 0, 1.f);
#define DRAW_POINT(in_vectLocation, in_Color) if (GetWorld()) DrawDebugPoint(GetWorld(), in_vectLocation, 15.f, in_Color, false, 30.f);
#define DRAW_POINT_SINGLE_FRAME(in_vectLocation, in_Color) if (GetWorld()) DrawDebugPoint(GetWorld(), in_vectLocation, 15.f, in_Color, false, -1.f);
#define DRAW_VECTOR(in_vectStartLocation, in_vectEndLocation, in_Color) if (GetWorld())\
	{\
		DrawDebugLine(GetWorld(), in_vectStartLocation, in_vectEndLocation, in_Color, false, 30.f, 0, 1.f);\
		DrawDebugPoint(GetWorld(), in_vectEndLocation, 15.f, in_Color, false, 30.f);\
	}
#define DRAW_VECTOR_SINGLE_FRAME(in_vectStartLocation, in_vectEndLocation, in_Color) if (GetWorld())\
	{\
		DrawDebugLine(GetWorld(), in_vectStartLocation, in_vectEndLocation, in_Color, false, -1.f, 0, 1.f);\
		DrawDebugPoint(GetWorld(), in_vectEndLocation, 15.f, in_Color, false, -1.f);\
	}