/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SelectTab
void Dino_BusSand_App_UI_PlayerSettingPanel__SelectTab (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, int32_t t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SelectTab
   void Dino_BusSand_App_UI_PlayerSettingPanel__SelectTab (Dino_BusSand_App_UI_PlayerSettingPanel_o*
   __this, int32_t t, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__SelectTab_23024ec(long param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  
  puVar10 = PTR_DAT_04cb7da0;
  puVar9 = PTR_DAT_04cb7d98;
  puVar8 = PTR_DAT_04cb7cf0;
  puVar7 = PTR_DAT_04cb7ce0;
  puVar3 = PTR_DAT_04cb7cc0;
  puVar6 = PTR_DAT_04cb7c98;
  puVar5 = PTR_DAT_04cb7c78;
  puVar4 = PTR_DAT_04cb7c50;
                    /* try { // try from 02402544 to 02502553 has its CatchHandler @ 02402554 */
                    /* catch() { ... } // from try @ 024024d0 with catch @ 02402554
                       catch() { ... } // from try @ 02402544 with catch @ 02402554 */
  if ((bRam0000000004f9c4d9 & 1) == 0) {
                    /* try { // try from 02402558 to 0250255b has its CatchHandler @ 02402564 */
                    /* try { // try from 0240255c to 02502567 has its CatchHandler @ 02402250 */
    FUN_02132f7c(PTR_DAT_04cb7d98);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02402558 with catch @ 02402564
                        */
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
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar6,param_2 == 0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar4,param_2 == 1,0);
  bVar11 = param_2 == 2;
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar8,bVar11,0);
  Dino_BusSand_App_UI_PlayerSettingPanel__SetTab_2302934
            (param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar7,*(undefined8 *)puVar9,param_2 == 0)
  ;
  Dino_BusSand_App_UI_PlayerSettingPanel__SetTab_2302934
            (param_1,*(undefined8 *)PTR_DAT_04cb7cd0,*(undefined8 *)puVar3,*(undefined8 *)puVar10,
             param_2 == 1);
  puVar6 = PTR_DAT_04cb1110;
  puVar5 = PTR_DAT_04caebe8;
  puVar1 = (undefined8 *)PTR_DAT_04caccf0;
  puVar4 = PTR_DAT_04cab490;
  uVar15 = *(undefined8 *)PTR_DAT_04cb7ce8;
  uVar16 = *(undefined8 *)PTR_DAT_04cb7c88;
  uVar17 = *(undefined8 *)PTR_DAT_04cb7da8;
  if ((bRam0000000004f9c4da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caebe8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb1110);
    FUN_02132f7c(PTR_DAT_04caccf0);
    bRam0000000004f9c4da = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar12 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0(param_1,uVar15,*(undefined8 *)puVar5);
  if (!bVar11) {
    puVar1 = (undefined8 *)puVar6;
  }
  uVar15 = System_String__Concat_46c82e0(uVar17,*puVar1,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar15 = Dino_BusSand_App_UiAssets__Sprite_21636c4(uVar15,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
    if ((uVar13 & 1) != 0) {
      if (lVar12 == 0) goto LAB_02402b94;
      UnityEngine_UI_Image__set_sprite_44a7258(lVar12,uVar15,0);
    }
  }
  lVar12 = 0x88;
  if (!bVar11) {
    lVar12 = 0x90;
  }
  uVar15 = *(undefined8 *)(param_1 + lVar12);
  lVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar16,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
    if ((uVar13 & 1) == 0) {
      if ((lVar12 == 0) ||
         (lVar12 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                             (lVar12,1,*(undefined8 *)PTR_DAT_04cada48), lVar12 == 0)) {
LAB_02402b94:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar2) {
        lVar18 = 0;
        do {
          if (uVar2 <= (uint)lVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar14 = *(long **)(lVar12 + 0x20 + lVar18 * 8);
          if (plVar14 == (long *)0x0) goto LAB_02402b94;
          (**(code **)(*plVar14 + 0x538))(plVar14,uVar15,*(undefined8 *)(*plVar14 + 0x540));
          uVar2 = *(uint *)(lVar12 + 0x18);
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < (int)uVar2);
      }
    }
  }
  return;
}

