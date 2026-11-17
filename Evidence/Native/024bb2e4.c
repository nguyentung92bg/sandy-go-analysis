/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Glass
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Glass (uint8_t color, float fillMinY, float fillMaxY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Glass
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Glass (uint8_t color, float fillMinY,
   float fillMaxY, const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary__Glass_23bb2e4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c9a1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbcbb0);
    FUN_02132f7c(PTR_DAT_04cbcbb8);
    FUN_02132f7c(PTR_DAT_04cbcbc0);
    FUN_02132f7c(PTR_DAT_04cbcbc8);
    FUN_02132f7c(PTR_DAT_04caa120);
    bRam0000000004f9c9a1 = 1;
  }
  puVar3 = PTR_DAT_04cbcbc8;
  puVar2 = PTR_DAT_04cab588;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar3,0);
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_Material___ctor_437b5a8(lVar8,uVar7,0);
  puVar5 = PTR_DAT_04cbcbc0;
  puVar4 = PTR_DAT_04cbcbb8;
  puVar3 = PTR_DAT_04cbcbb0;
  puVar2 = PTR_DAT_04cbbfb8;
  puVar1 = PTR_DAT_04caa120;
  if (lVar8 != 0) {
    UnityEngine_Material__set_enableInstancing_437dbe4(lVar8,0,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_Core_SandPalette__Color_24196fc(param_3,0);
    UnityEngine_Material__SetColor_43830b0
              ((float)(uVar6 & 0xff) / 255.0,(float)(uVar6 >> 8 & 0xff) / 255.0,
               (float)(uVar6 >> 0x10 & 0xff) / 255.0,(float)(uVar6 >> 0x18) / 255.0,lVar8,
               *(undefined8 *)puVar4,0);
    UnityEngine_Material__SetFloat_4383048(param_1,lVar8,*(undefined8 *)puVar3,0);
    UnityEngine_Material__SetFloat_4383048(param_2,lVar8,*(undefined8 *)puVar5,0);
    UnityEngine_Material__SetFloat_4383048(0,lVar8,*(undefined8 *)puVar1,0);
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

