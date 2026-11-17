/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ApplyRenderSettings
void Dino_BusSand_App_UI_HallScene__ApplyRenderSettings (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ApplyRenderSettings
   void Dino_BusSand_App_UI_HallScene__ApplyRenderSettings (Dino_BusSand_App_UI_HallScene_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__ApplyRenderSettings_22d1934
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_5 + 0x80) == '\0') {
    uVar2 = UnityEngine_RenderSettings__get_ambientMode_43745a0(0);
    *(undefined4 *)(param_5 + 0x84) = uVar2;
    uVar2 = UnityEngine_RenderSettings__get_ambientSkyColor_4374604(0);
    *(undefined4 *)(param_5 + 0x88) = uVar2;
    *(undefined4 *)(param_5 + 0x8c) = param_2;
    *(undefined4 *)(param_5 + 0x90) = param_3;
    *(undefined4 *)(param_5 + 0x94) = param_4;
    uVar2 = UnityEngine_RenderSettings__get_ambientEquatorColor_4374708(0);
    *(undefined4 *)(param_5 + 0x98) = uVar2;
    *(undefined4 *)(param_5 + 0x9c) = param_2;
    *(undefined4 *)(param_5 + 0xa0) = param_3;
    *(undefined4 *)(param_5 + 0xa4) = param_4;
    uVar2 = UnityEngine_RenderSettings__get_ambientGroundColor_437480c(0);
    *(undefined4 *)(param_5 + 0xa8) = uVar2;
    *(undefined4 *)(param_5 + 0xac) = param_2;
    *(undefined4 *)(param_5 + 0xb0) = param_3;
    *(undefined4 *)(param_5 + 0xb4) = param_4;
    uVar2 = UnityEngine_RenderSettings__get_ambientIntensity_4374910(0);
    *(undefined4 *)(param_5 + 0xb8) = uVar2;
    bVar1 = UnityEngine_RenderSettings__get_fog_43743d8(0);
    *(byte *)(param_5 + 0xbc) = bVar1 & 1;
    *(undefined1 *)(param_5 + 0x80) = 1;
  }
  UnityEngine_RenderSettings__set_ambientMode_43745c8(3,0);
  UnityEngine_RenderSettings__set_ambientSkyColor_4374688
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  UnityEngine_RenderSettings__set_ambientEquatorColor_437478c
            (_UNK_00e20524,0x3e000000,_UNK_00e207d0,0x3f800000,0);
  UnityEngine_RenderSettings__set_ambientGroundColor_4374890
            (_UNK_00e20834,_UNK_00e20654,_UNK_00e1fef8,0x3f800000,0);
  UnityEngine_RenderSettings__set_ambientIntensity_4374938(0x3f800000,0);
  if (pcRam0000000004fa6998 == (code *)0x0) {
    pcRam0000000004fa6998 = (code *)FUN_02132f40(&UNK_00e60d11);
  }
                    /* WARNING: Could not recover jumptable at 0x04474438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa6998)(0);
  return;
}

