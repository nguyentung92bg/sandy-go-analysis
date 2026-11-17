/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$SetReward
void Dino_BusSand_App_UI_PassportUi__SetReward (UnityEngine_Transform_o* anchor, Dino_BusSand_App_Meta_PassportFeature_Reward_o r, int32_t boxId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$SetReward
   void Dino_BusSand_App_UI_PassportUi__SetReward (UnityEngine_Transform_o* anchor,
   Dino_BusSand_App_Meta_PassportFeature_Reward_o r, int32_t boxId, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi__SetReward_21d6c1c(long param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022d6c38 to 023d6cab has its CatchHandler @ 022d709c */
  if ((bRam0000000004f9bb8c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cae428);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb0708);
    FUN_02132f7c(PTR_DAT_04cb03d8);
                    /* try { // try from 022d6cd4 to 023d6e67 has its CatchHandler @ 022d70a0 */
    FUN_02132f7c(PTR_DAT_04caed30);
    FUN_02132f7c(PTR_DAT_04cb07f0);
    FUN_02132f7c(PTR_DAT_04cb07f8);
    FUN_02132f7c(PTR_DAT_04cb0748);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bb8c = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (param_1 == 0) goto LAB_022d7230;
  lVar7 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb03d8,0);
  lVar8 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb0708,0);
  lVar9 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb0748,0);
  puVar3 = PTR_DAT_04caec68;
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar7,0,0);
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar8,0,0);
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar9,0,0);
  if (0 < param_3) {
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cb07f8,param_3,0);
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,*(undefined8 *)PTR_DAT_04cae428,0);
    uVar10 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar10,*(undefined8 *)PTR_DAT_04ca9c30,0);
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
    }
    uVar10 = Dino_BusSand_App_UiAssets__Sprite_21636c4(uVar10,0);
    Dino_BusSand_App_UI_PassportUi__SetIcon_21dcb68(lVar7,uVar10);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 022d6e9c to 023d702f has its CatchHandler @ 022d7098 */
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004f9ba6c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,1,0);
      bRam0000000004f9ba6c = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if ((lVar7 != 0) && (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar8 != 0)
       ) {
      uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
      if ((uVar5 & 1) == 1) {
        return;
      }
      lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
      if (lVar7 != 0) {
        if ((bRam0000000004fa8360 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5bd0,1,0);
          bRam0000000004fa8360 = 1;
        }
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
          }
          if (pcRam0000000004fa8430 == (code *)0x0) {
            pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
          }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8430)(lVar8,1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *param_2;
  if (iVar1 < 1) {
    return;
  }
  if ((*(byte *)(param_2 + 4) & 1) == 0) {
    if (iVar1 == 0x3e9) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar9,1,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
      plVar11 = (long *)0x0;
      if ((uVar6 & 1) != 0) {
        if (lVar9 == 0) goto LAB_022d7230;
        plVar11 = (long *)UnityEngine_Transform__Find_43d4bec
                                    (lVar9,*(undefined8 *)PTR_DAT_04caed30,0);
      }
      uVar10 = System_Int64__ToString_482e7e4(param_2 + 2,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(iVar1,0,0);
                    /* try { // try from 022d7030 to 023d70db has its CatchHandler @ 022d6a9c */
      Dino_BusSand_App_UI_PassportUi__SetIcon_21dcb68(lVar7,uVar10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar7,1,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      puVar4 = PTR_DAT_04caed30;
      if ((uVar6 & 1) == 0) {
        return;
      }
      if (lVar7 == 0) goto LAB_022d7230;
                    /* catch() { ... } // from try @ 022d6b28 with catch @ 022d7094 */
                    /* catch() { ... } // from try @ 022d6e9c with catch @ 022d7098 */
      plVar11 = (long *)UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04caed30,0)
      ;
                    /* catch() { ... } // from try @ 022d6c38 with catch @ 022d709c */
                    /* catch() { ... } // from try @ 022d6b98 with catch @ 022d70a0
                       catch() { ... } // from try @ 022d6cd4 with catch @ 022d70a0 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(plVar11,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022d70e4 to 023d713b has its CatchHandler @ 022d70e4
                       catch() { ... } // from try @ 022d70e4 with catch @ 022d70e4
                       catch() { ... } // from try @ 022d756c with catch @ 022d70e4 */
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
        if ((uVar6 & 1) != 0) {
          if (lVar9 == 0) goto LAB_022d7230;
          uVar10 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)puVar4,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
          if ((uVar6 & 1) != 0) {
            lVar8 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)puVar4,0);
                    /* try { // try from 022d713c to 023d714f has its CatchHandler @ 022d75d0 */
            if (lVar8 == 0) {
LAB_022d7230:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            lVar7 = UnityEngine_Object__Instantiate_object__2805310
                              (uVar10,lVar7,0,*(undefined8 *)PTR_DAT_04cad390);
            if ((lVar7 == 0) ||
               (plVar11 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar7,0),
               plVar11 == (long *)0x0)) goto LAB_022d7230;
            UnityEngine_Object__set_name_43c72ec(plVar11,*(undefined8 *)puVar4,0);
            if (*plVar11 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar11);
            }
                    /* try { // try from 022d71c0 to 023d7207 has its CatchHandler @ 022d75dc */
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,0xc2700000,plVar11,0);
          }
        }
      }
      uVar10 = System_Int64__ToString_482e7e4(param_2 + 2,0);
      uVar10 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar8,1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    plVar11 = (long *)0x0;
    if ((uVar6 & 1) != 0) {
      if (lVar8 == 0) goto LAB_022d7230;
      plVar11 = (long *)UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb07f0,0)
      ;
    }
    uVar10 = *(undefined8 *)(param_2 + 2);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = Dino_BusSand_App_UI_GiftPackUi__TimeItemText_21ad894(uVar10,0);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48,uVar10,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba6b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(plVar11,0,0);
  if ((uVar6 & 1) == 0) {
    if ((plVar11 == (long *)0x0) ||
       (lVar7 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (plVar11,1,*(undefined8 *)PTR_DAT_04cada48), lVar7 == 0)) {
LAB_022a95f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar5) {
      lVar8 = 0;
      do {
        if (uVar5 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar11 = *(long **)(lVar7 + 0x20 + lVar8 * 8);
        if (plVar11 == (long *)0x0) goto LAB_022a95f0;
        (**(code **)(*plVar11 + 0x518))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x520));
        uVar5 = *(uint *)(lVar7 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar5);
    }
  }
  return;
}

