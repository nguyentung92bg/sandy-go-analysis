/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c$$<get_Detail>b__10_0
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c___get_Detail_b__10_0 (Dino_BusSand_View_MaterialLibrary___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c$$<get_Detail>b__10_0
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c___get_Detail_b__10_0
   (Dino_BusSand_View_MaterialLibrary___c_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary___c___get_Detail_b__10_0_23bcca8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c9a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbcf40);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    FUN_02132f7c(PTR_DAT_04cbcb20);
    FUN_02132f7c(PTR_DAT_04cbcf48);
    bRam0000000004f9c9a7 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  uVar3 = 0;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if (lVar5 == 0) goto LAB_024bcf60;
    uVar3 = Dino_BusSand_GameAssets__GetMaterial_237c614(lVar5,*(undefined8 *)PTR_DAT_04cbcf40,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_View_MaterialLibrary__get_Toon_23b96f4();
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    UnityEngine_Material___ctor_437b5a8(lVar5,uVar3,0);
    if (lVar5 == 0) goto LAB_024bcf60;
    UnityEngine_Material__set_enableInstancing_437dbe4(lVar5,1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    uVar3 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
      if (lVar6 == 0) goto LAB_024bcf60;
      uVar3 = Dino_BusSand_GameAssets__GetTexture_237ceb8(lVar6,*(undefined8 *)PTR_DAT_04cbcf48,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      UnityEngine_Material__SetTexture_43831cc(lVar5,*(undefined8 *)PTR_DAT_04cbcb20,uVar3,0);
    }
    UnityEngine_Material__SetColor_43830b0
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar5,*(undefined8 *)PTR_DAT_04cb68b8,0);
  }
  else {
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    UnityEngine_Material___ctor_437b63c(lVar5,uVar3,0);
    if (lVar5 == 0) {
LAB_024bcf60:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Material__set_enableInstancing_437dbe4(lVar5,1,0);
  }
  return lVar5;
}

