/* IL2CPP: Dino.BusSand.App.UI.KitNav$$Select
void Dino_BusSand_App_UI_KitNav__Select (UnityEngine_RectTransform_o* bar, int32_t tab, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitNav$$Select
   void Dino_BusSand_App_UI_KitNav__Select (UnityEngine_RectTransform_o* bar, int32_t tab, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitNav__Select_2286bb4(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c15f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0b40);
    FUN_02132f7c(PTR_DAT_04cb4f30);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cb4f80);
    FUN_02132f7c(PTR_DAT_04cb4f98);
    bRam0000000004f9c15f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cb0b40,2);
  if ((param_1 == 0) ||
     (lVar6 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb4f80,0),
     plVar5 == (long *)0x0)) {
LAB_02386eb0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_02386eb8:
    uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar8,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_02134474(plVar5 + 4,lVar6);
    lVar6 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb4f30,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_02386eb8;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar6;
      thunk_FUN_02134474(plVar5 + 5,lVar6);
      puVar3 = PTR_DAT_04cb4f98;
      puVar2 = PTR_DAT_04cae5d0;
      uVar9 = *(uint *)(plVar5 + 3);
      if ((int)uVar9 < 1) {
        return;
      }
      lVar6 = 0;
      do {
        if (uVar9 <= (uint)lVar6) goto LAB_02386eb4;
        lVar7 = plVar5[lVar6 + 4];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
        if ((uVar4 & 1) != 0) {
          return;
        }
        if (lVar7 == 0) goto LAB_02386eb0;
        uVar8 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)puVar3,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          return;
        }
        uVar8 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          return;
        }
        uVar9 = *(uint *)(plVar5 + 3);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar9);
      if ((int)uVar9 < 1) {
        return;
      }
      lVar6 = 0;
      while (uVar10 = (uint)lVar6, uVar10 < uVar9) {
        if (((plVar5[lVar6 + 4] == 0) ||
            (lVar7 = UnityEngine_Transform__Find_43d4bec(plVar5[lVar6 + 4],*(undefined8 *)puVar3,0),
            lVar7 == 0)) ||
           (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar7 == 0))
        goto LAB_02386eb0;
        UnityEngine_GameObject__SetActive_43c1408(lVar7,param_2 == uVar10,0);
        if (*(uint *)(plVar5 + 3) <= uVar10) break;
        if (((plVar5[lVar6 + 4] == 0) ||
            (lVar7 = UnityEngine_Transform__Find_43d4bec(plVar5[lVar6 + 4],*(undefined8 *)puVar2,0),
            lVar7 == 0)) ||
           (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar7 == 0))
        goto LAB_02386eb0;
        UnityEngine_GameObject__SetActive_43c1408(lVar7,param_2 != uVar10,0);
        uVar9 = *(uint *)(plVar5 + 3);
        lVar6 = lVar6 + 1;
        if ((int)uVar9 <= (int)lVar6) {
          return;
        }
      }
    }
  }
LAB_02386eb4:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

