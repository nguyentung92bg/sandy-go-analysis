/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnNameEndEdit
void Dino_BusSand_App_UI_PlayerSettingPanel__OnNameEndEdit (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnNameEndEdit
   void Dino_BusSand_App_UI_PlayerSettingPanel__OnNameEndEdit
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, System_String_o* value, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__OnNameEndEdit_2304bf8(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c4ec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c4ec = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0xd0) == 0) ||
     (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xd0),0), lVar5 == 0
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar5,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  Dino_BusSand_App_UI_PlayerSettingPanel__CommitName_2302880(uVar4,param_2);
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c4ee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c4ee = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(param_1 + 0xd0) == 0) ||
       (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xd0),0),
       lVar5 == 0)) goto LAB_02404a84;
    UnityEngine_GameObject__SetActive_43c1408(lVar5,0,0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0), lVar5 != 0
     )) {
    UnityEngine_GameObject__SetActive_43c1408(lVar5,1,0);
    lVar5 = *(long *)(param_1 + 0x80);
    if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName_225b990(0);
    if (lVar5 != 0) {
      if ((bRam0000000004f9c3a7 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9c30,lVar3,0);
        bRam0000000004f9c3a7 = 1;
      }
      Dino_BusSand_App_UI_CommonNamePlateView__Setup_22cfd58(lVar5);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)PTR_DAT_04ca9c30;
      if (lVar3 != 0) {
        lVar8 = lVar3;
      }
      plVar6 = (long *)(lVar5 + 0x50);
      *plVar6 = lVar8;
      thunk_FUN_02134474(plVar6);
      Dino_BusSand_App_UI_CommonNamePlateView__SetTexts_22d0430
                (*(undefined8 *)(lVar5 + 0x28),*plVar6);
      puVar2 = PTR_DAT_04ca9ae8;
      lVar5 = *(long *)(lVar5 + 0x30);
      lVar3 = *plVar6;
      if ((bRam0000000004f9c3ac & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cada48);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c3ac = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
      if ((uVar4 & 1) == 0) {
        if ((lVar5 == 0) ||
           (lVar5 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                              (lVar5,1,*(undefined8 *)PTR_DAT_04cada48), lVar5 == 0)) {
LAB_023d052c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          lVar8 = 0;
          do {
            if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar6 = *(long **)(lVar5 + 0x20 + lVar8 * 8);
            if (plVar6 == (long *)0x0) goto LAB_023d052c;
            TMPro_TMP_Text__set_richText_42ccfa8(plVar6,0,0);
            (**(code **)(*plVar6 + 0x518))(plVar6,lVar3,*(undefined8 *)(*plVar6 + 0x520));
            uVar1 = *(uint *)(lVar5 + 0x18);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar1);
        }
      }
      return;
    }
  }
LAB_02404a84:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

