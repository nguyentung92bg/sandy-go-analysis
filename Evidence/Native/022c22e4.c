/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$Corner
void Dino_BusSand_App_UI_StreakEventPanel__Corner (Dino_BusSand_App_UI_StreakEventPanel_o* __this, System_String_o* name, System_String_o* tile, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023821f8) */
/* WARNING: Removing unreachable block (ram,0x02382204) */
/* WARNING: Removing unreachable block (ram,0x02382208) */
/* WARNING: Removing unreachable block (ram,0x0238221c) */
/* WARNING: Removing unreachable block (ram,0x02382220) */
/* WARNING: Removing unreachable block (ram,0x02382248) */
/* WARNING: Removing unreachable block (ram,0x0238225c) */
/* WARNING: Removing unreachable block (ram,0x023822a0) */
/* WARNING: Removing unreachable block (ram,0x023822a4) */
/* WARNING: Removing unreachable block (ram,0x023822a8) */
/* WARNING: Removing unreachable block (ram,0x023822cc) */
/* WARNING: Removing unreachable block (ram,0x023822d0) */
/* WARNING: Removing unreachable block (ram,0x023822d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$Corner
   void Dino_BusSand_App_UI_StreakEventPanel__Corner (Dino_BusSand_App_UI_StreakEventPanel_o*
   __this, System_String_o* name, System_String_o* tile, float x, const MethodInfo* method); */

long * Dino_BusSand_App_UI_StreakEventPanel__Corner_21c22e4
                 (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9bade & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cafd00);
    FUN_02132f7c(PTR_DAT_04cafd08);
    bRam0000000004f9bade = 1;
  }
  puVar2 = PTR_DAT_04cafd00;
  uVar3 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  plVar4 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                             (0x42f60000,0x42f80000,0,0,0x3f800000,uVar3,param_3,
                              *(undefined8 *)puVar2,0,0);
  puVar1 = PTR_DAT_04cafd08;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  (**(code **)(*plVar4 + 0x2c8))(plVar4,1,*(undefined8 *)(*plVar4 + 0x2d0));
  Dino_BusSand_App_UI_StreakEventPanel__At_21c2228(0x42e10000,param_1,plVar4);
  uVar3 = UnityEngine_Component__get_transform_43bcd18(plVar4,0);
  uVar8 = *(undefined8 *)puVar1;
  fVar12 = 93.0;
  fVar11 = 0.0;
  if ((bRam0000000004f9c17c & 1) == 0) {
    fVar11 = 0.0;
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c17c = 1;
  }
  lVar5 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(param_4,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  fVar9 = 93.0 - **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  fVar10 = 93.0 - (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (fVar9 * fVar9 + fVar10 * fVar10 < _UNK_00e1fea0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      fVar12 = 100.0;
    }
    else {
      if (lVar5 == 0) goto LAB_02382310;
      UnityEngine_Sprite__get_rect_434ee28(lVar5,0);
      fVar12 = fVar11 * 1.0;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4(fVar12,uVar3,uVar8,0,0);
  if (((lVar7 != 0) && (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar7 != 0))
     && (plVar4 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                    (lVar7,*(undefined8 *)PTR_DAT_04cacf98), plVar4 != (long *)0x0))
  {
    UnityEngine_UI_Image__set_sprite_44a7258(plVar4,lVar5,0);
    (**(code **)(*plVar4 + 0x2c8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x2d0));
    UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar4,1,0);
    return plVar4;
  }
LAB_02382310:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

