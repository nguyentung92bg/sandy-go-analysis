/* IL2CPP: Dino.BusSand.App.UI.HallScene$$OnDestroy
void Dino_BusSand_App_UI_HallScene__OnDestroy (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$OnDestroy
   void Dino_BusSand_App_UI_HallScene__OnDestroy (Dino_BusSand_App_UI_HallScene_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__OnDestroy_22d2fe0(long param_1)

{
  byte bVar1;
  
  Dino_BusSand_App_UI_HallScene__RestoreLights_22d2c20();
  if (*(char *)(param_1 + 0x80) != '\0') {
    *(undefined1 *)(param_1 + 0x80) = 0;
    UnityEngine_RenderSettings__set_ambientMode_43745c8(*(undefined4 *)(param_1 + 0x84),0);
    UnityEngine_RenderSettings__set_ambientSkyColor_4374688
              (*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),0);
    UnityEngine_RenderSettings__set_ambientEquatorColor_437478c
              (*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
               *(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),0);
    UnityEngine_RenderSettings__set_ambientGroundColor_4374890
              (*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),
               *(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),0);
    UnityEngine_RenderSettings__set_ambientIntensity_4374938(*(undefined4 *)(param_1 + 0xb8),0);
    bVar1 = *(byte *)(param_1 + 0xbc);
    if (pcRam0000000004fa6998 == (code *)0x0) {
      pcRam0000000004fa6998 = (code *)FUN_02132f40(&UNK_00e60d11);
    }
                    /* WARNING: Could not recover jumptable at 0x04474438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa6998)(bVar1 & 1);
    return;
  }
  return;
}

