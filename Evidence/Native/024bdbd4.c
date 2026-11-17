/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c__DisplayClass20_0$$<Emissive>b__0
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c__DisplayClass20_0___Emissive_b__0 (Dino_BusSand_View_MaterialLibrary___c__DisplayClass20_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c__DisplayClass20_0$$<Emissive>b__0
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c__DisplayClass20_0___Emissive_b__0
   (Dino_BusSand_View_MaterialLibrary___c__DisplayClass20_0_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary___c__DisplayClass20_0___Emissive_b__0_23bdbd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c9b0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbca90);
    FUN_02132f7c(PTR_DAT_04cbcf70);
    FUN_02132f7c(PTR_DAT_04cbcf78);
    FUN_02132f7c(PTR_DAT_04cbcf80);
    bRam0000000004f9c9b0 = 1;
  }
  puVar2 = PTR_DAT_04cbcf80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_View_MaterialLibrary__LitTemplate_23bab64(*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_04cbcf78;
  puVar2 = PTR_DAT_04cbcf70;
  puVar1 = PTR_DAT_04cbca90;
  if (lVar4 != 0) {
    UnityEngine_Material__set_enableInstancing_437dbe4(lVar4,1,0);
    UnityEngine_Material__SetColor_43830b0
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),lVar4,
               *(undefined8 *)puVar1,0);
    UnityEngine_Material__EnableKeyword_437cba0(lVar4,*(undefined8 *)puVar2,0);
    fVar5 = *(float *)(param_1 + 0x20);
    UnityEngine_Material__SetColor_43830b0
              ((float)*(undefined8 *)(param_1 + 0x10) * fVar5,
               (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar5,
               (float)*(undefined8 *)(param_1 + 0x18) * fVar5,
               (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar5,lVar4,
               *(undefined8 *)puVar3,0);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

