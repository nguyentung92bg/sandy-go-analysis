/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$<OnOpen>b__36_2
void Dino_BusSand_App_UI_PlayerSettingPanel___OnOpen_b__36_2 (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02402a00) */
/* WARNING: Removing unreachable block (ram,0x02402aa4) */
/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$<OnOpen>b__36_2
   void Dino_BusSand_App_UI_PlayerSettingPanel___OnOpen_b__36_2
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel___OnOpen_b__36_2_2304eb0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  
  puVar9 = PTR_DAT_04cb7da0;
  puVar8 = PTR_DAT_04cb7d98;
  puVar7 = PTR_DAT_04cb7cf0;
  puVar6 = PTR_DAT_04cb7ce0;
  puVar2 = PTR_DAT_04cb7cc0;
  puVar5 = PTR_DAT_04cb7c98;
  puVar4 = PTR_DAT_04cb7c78;
  puVar3 = PTR_DAT_04cb7c50;
  if ((bRam0000000004f9c4d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7d98);
    FUN_02132f7c(PTR_DAT_04cb7c50);
    FUN_02132f7c(PTR_DAT_04cb7da8);
    FUN_02132f7c(PTR_DAT_04cb7da0);
    FUN_02132f7c(PTR_DAT_04cb7c78);
    FUN_02132f7c(PTR_DAT_04cb7c88);
    FUN_02132f7c(PTR_DAT_04cb7c98);
    FUN_02132f7c(PTR_DAT_04cb7cc0);
    FUN_02132f7c(PTR_DAT_04cb7cd0);
    FUN_02132f7c(PTR_DAT_04cb7ce0);
    FUN_02132f7c(PTR_DAT_04cb7ce8);
    FUN_02132f7c(PTR_DAT_04cb7cf0);
    bRam0000000004f9c4d9 = 1;
  }
  Dino_BusSand_App_UI_PlayerSettingPanel__HideLockTips_23028d8(param_1);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar5,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar7,1,0);
  Dino_BusSand_App_UI_PlayerSettingPanel__SetTab_2302934
            (param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar6,*(undefined8 *)puVar8,0);
  Dino_BusSand_App_UI_PlayerSettingPanel__SetTab_2302934
            (param_1,*(undefined8 *)PTR_DAT_04cb7cd0,*(undefined8 *)puVar2,*(undefined8 *)puVar9,0);
  puVar5 = PTR_DAT_04caebe8;
  puVar4 = PTR_DAT_04caccf0;
  puVar3 = PTR_DAT_04cab490;
  uVar13 = *(undefined8 *)PTR_DAT_04cb7ce8;
  uVar14 = *(undefined8 *)PTR_DAT_04cb7c88;
  uVar15 = *(undefined8 *)PTR_DAT_04cb7da8;
  if ((bRam0000000004f9c4da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caebe8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb1110);
    FUN_02132f7c(PTR_DAT_04caccf0);
    bRam0000000004f9c4da = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar10 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0(param_1,uVar13,*(undefined8 *)puVar5);
  uVar13 = System_String__Concat_46c82e0(uVar15,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar13 = Dino_BusSand_App_UiAssets__Sprite_21636c4(uVar13,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar11 & 1) != 0) {
      if (lVar10 == 0) goto LAB_02402b94;
      UnityEngine_UI_Image__set_sprite_44a7258(lVar10,uVar13,0);
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x88);
  lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar14,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  if ((uVar11 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
    if ((uVar11 & 1) == 0) {
      if ((lVar10 == 0) ||
         (lVar10 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                             (lVar10,1,*(undefined8 *)PTR_DAT_04cada48), lVar10 == 0)) {
LAB_02402b94:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar1) {
        lVar16 = 0;
        do {
          if (uVar1 <= (uint)lVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar12 = *(long **)(lVar10 + 0x20 + lVar16 * 8);
          if (plVar12 == (long *)0x0) goto LAB_02402b94;
          (**(code **)(*plVar12 + 0x538))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x540));
          uVar1 = *(uint *)(lVar10 + 0x18);
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 < (int)uVar1);
      }
    }
  }
  return;
}

