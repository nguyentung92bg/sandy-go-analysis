/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnRandomBtnClick
void Dino_BusSand_App_UI_PlayerSettingPanel__OnRandomBtnClick (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnRandomBtnClick
   void Dino_BusSand_App_UI_PlayerSettingPanel__OnRandomBtnClick
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__OnRandomBtnClick_2304854(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02404858 to 02504863 has its CatchHandler @ 02403fd8 */
                    /* catch() { ... } // from try @ 02404740 with catch @ 02404860
                       catch() { ... } // from try @ 024047ac with catch @ 02404860
                       catch() { ... } // from try @ 02404800 with catch @ 02404860
                       catch() { ... } // from try @ 02404850 with catch @ 02404860 */
  if ((bRam0000000004f9c4e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c4e9 = 1;
  }
  Dino_BusSand_App_UI_PlayerSettingPanel__HideLockTips_23028d8(param_1);
  uVar7 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0xd0) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xd0),0),
       lVar4 == 0)) goto LAB_02404964;
    uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar4,0);
    if ((uVar3 & 1) != 0) {
      Dino_BusSand_App_UI_PlayerSettingPanel__EndNameEdit_2304968(param_1);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_PlayerIdentity__Randomize_226ed30(0);
  lVar5 = *(long *)puVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != 0) {
    if ((bRam0000000004f9c3a7 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9c30,lVar4,0);
      bRam0000000004f9c3a7 = 1;
    }
    Dino_BusSand_App_UI_CommonNamePlateView__Setup_22cfd58(lVar5);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *(long *)PTR_DAT_04ca9c30;
    if (lVar4 != 0) {
      lVar8 = lVar4;
    }
    plVar6 = (long *)(lVar5 + 0x50);
    *plVar6 = lVar8;
    thunk_FUN_02134474(plVar6);
    Dino_BusSand_App_UI_CommonNamePlateView__SetTexts_22d0430(*(undefined8 *)(lVar5 + 0x28),*plVar6)
    ;
    puVar2 = PTR_DAT_04ca9ae8;
    lVar4 = *(long *)(lVar5 + 0x30);
    lVar5 = *plVar6;
    if ((bRam0000000004f9c3ac & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cada48);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9c3ac = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if ((lVar4 == 0) ||
         (lVar4 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                            (lVar4,1,*(undefined8 *)PTR_DAT_04cada48), lVar4 == 0)) {
LAB_023d052c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        lVar8 = 0;
        do {
          if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar6 = *(long **)(lVar4 + 0x20 + lVar8 * 8);
          if (plVar6 == (long *)0x0) goto LAB_023d052c;
          TMPro_TMP_Text__set_richText_42ccfa8(plVar6,0,0);
          (**(code **)(*plVar6 + 0x518))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x520));
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)uVar1);
      }
    }
    return;
  }
LAB_02404964:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

