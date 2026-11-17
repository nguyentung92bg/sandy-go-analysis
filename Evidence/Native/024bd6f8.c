/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c__DisplayClass16_0$$<Unlit>b__0
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c__DisplayClass16_0___Unlit_b__0 (Dino_BusSand_View_MaterialLibrary___c__DisplayClass16_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c__DisplayClass16_0$$<Unlit>b__0
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c__DisplayClass16_0___Unlit_b__0
   (Dino_BusSand_View_MaterialLibrary___c__DisplayClass16_0_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary___c__DisplayClass16_0___Unlit_b__0_23bd6f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c9ad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb72a0);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    FUN_02132f7c(PTR_DAT_04cb72b0);
    FUN_02132f7c(PTR_DAT_04cb72c0);
    FUN_02132f7c(PTR_DAT_04cbcf68);
    bRam0000000004f9c9ad = 1;
  }
  puVar3 = PTR_DAT_04cbcf68;
  puVar2 = PTR_DAT_04cab588;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar3,0);
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_Material___ctor_437b5a8(lVar5,uVar4,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar5 != 0) {
    UnityEngine_Material__SetColor_43830b0
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),lVar5,
               *(undefined8 *)PTR_DAT_04cb68b8,0);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar6 & 1) != 0) {
      UnityEngine_Material__SetTexture_43831cc
                (lVar5,*(undefined8 *)PTR_DAT_04cb72b0,*(undefined8 *)(param_1 + 0x20),0);
    }
    puVar1 = PTR_DAT_04cb72c0;
    if (*(char *)(param_1 + 0x28) != '\0') {
      UnityEngine_Material__SetFloat_4383048(0x40a00000,lVar5,*(undefined8 *)PTR_DAT_04cb72a0,0);
      UnityEngine_Material__SetFloat_4383048(0x3f800000,lVar5,*(undefined8 *)puVar1,0);
    }
    UnityEngine_Material__set_renderQueue_437c9d8(lVar5,*(int *)(param_1 + 0x2c) + 3000,0);
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

