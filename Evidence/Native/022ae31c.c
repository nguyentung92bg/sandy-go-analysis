/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass8_0$$<OnStoreItemSetup>b__0
void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass8_0___OnStoreItemSetup_b__0 (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass8_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass8_0$$<OnStoreItemSetup>b__0
   void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass8_0___OnStoreItemSetup_b__0
   (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass8_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass8_0___OnStoreItemSetup_b__0_21ae31c
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((bRam0000000004f9ba7b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba7b = 1;
  }
  puVar2 = PTR_DAT_04caec68;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc
                    (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0);
  puVar3 = PTR_DAT_04ca9ae8;
  lVar8 = *(long *)(param_1 + 0x20);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  if (lVar6 < 1) {
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004f9ba6c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9ba6c = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((lVar8 != 0) && (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar6 != 0)
       ) {
      uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
      if (lVar6 != 0) {
        if ((bRam0000000004fa8360 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
          bRam0000000004fa8360 = 1;
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar8 = *(long *)(lVar6 + 0x10);
        if (lVar8 != 0) {
          if (pcRam0000000004fa8430 == (code *)0x0) {
            pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
          }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8430)(lVar8,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar8,1);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_App_Countdown__Text_214f5d0(lVar6,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba6b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar7 & 1) == 0) {
    if ((lVar8 == 0) ||
       (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar8,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_022a95f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
      lVar8 = 0;
      do {
        if (uVar4 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar5 = *(long **)(lVar6 + 0x20 + lVar8 * 8);
        if (plVar5 == (long *)0x0) goto LAB_022a95f0;
        (**(code **)(*plVar5 + 0x518))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x520));
        uVar4 = *(uint *)(lVar6 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar4);
    }
  }
  return;
}

