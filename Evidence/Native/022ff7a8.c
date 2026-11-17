/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$get_Unit
float Dino_BusSand_App_UI_ScreenSafe__get_Unit (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$get_Unit
   float Dino_BusSand_App_UI_ScreenSafe__get_Unit (const MethodInfo* method); */

float Dino_BusSand_App_UI_ScreenSafe__get_Unit_21ff7a8(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = UnityEngine_Screen__get_width_436a6a0(0);
  fVar3 = 1.0;
  if ((0 < iVar1) && (iVar1 = UnityEngine_Screen__get_height_436a6c8(0), fVar3 = 1.0, 0 < iVar1)) {
    iVar1 = UnityEngine_Screen__get_width_436a6a0(0);
    iVar2 = UnityEngine_Screen__get_height_436a6c8(0);
    if (0.5625 <= (float)iVar1 / (float)iVar2) {
      iVar1 = UnityEngine_Screen__get_height_436a6c8(0);
      fVar3 = 1920.0;
    }
    else {
      iVar1 = UnityEngine_Screen__get_width_436a6a0();
      fVar3 = 1080.0;
    }
    fVar3 = (float)iVar1 / fVar3;
  }
  return fVar3;
}

