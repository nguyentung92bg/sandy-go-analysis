/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$Attach
void Dino_BusSand_App_UI_UiTweaks__Attach (Dino_BusSand_App_UI_UIPanel_o* panel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$Attach
   void Dino_BusSand_App_UI_UiTweaks__Attach (Dino_BusSand_App_UI_UIPanel_o* panel, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c277 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5b40);
    FUN_02132f7c(PTR_DAT_04cb5b48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c277 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (param_1 != 0) {
    lVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_1,*(undefined8 *)PTR_DAT_04cb5b40);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar7 & 1) != 0) {
      uVar9 = Dino_BusSand_App_UI_UiTweaks__get_I_22a31b0();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
      lVar10 = Dino_BusSand_App_UI_UiTweaks__get_I_22a31b0();
      if (lVar10 == 0) goto LAB_023a377c;
      uVar7 = Dino_BusSand_App_UI_UiTweaks__HasPanel_22a34b4(lVar10,*(undefined8 *)(param_1 + 0x20))
      ;
      if ((uVar7 & 1) == 0) {
        return;
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (lVar8 == 0) goto LAB_023a377c;
      lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                        (lVar8,*(undefined8 *)PTR_DAT_04cb5b48);
    }
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(param_1 + 0x20);
      thunk_FUN_02134474();
      if ((bRam0000000004f9c27b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb5b50);
        FUN_02132f7c(PTR_DAT_04cb5b58);
        FUN_02132f7c(PTR_DAT_04cb5b60);
        FUN_02132f7c(PTR_DAT_04cb5b68);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c27b = 1;
      }
      uStack_90 = 0;
      uStack_88 = 0;
      lStack_80 = 0;
      uVar9 = Dino_BusSand_App_UI_UiTweaks__get_I_22a31b0();
      iVar1 = *(int *)(lVar8 + 0x30);
      if (cRam0000000004f9c303 == '\0') {
        FUN_02132f7c(PTR_DAT_04cb5b08);
        cRam0000000004f9c303 = '\x01';
      }
      if (iVar1 != *(int *)(*(long *)(*(long *)PTR_DAT_04cb5b08 + 0xb8) + 0xc)) {
        Dino_BusSand_App_UI_UiTweakApplier__Rebind_22a3eb8(lVar8,uVar9);
      }
      fVar14 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      puVar5 = PTR_DAT_04cb5b58;
      puVar4 = PTR_DAT_04cb5b50;
      puVar2 = PTR_DAT_04ca9ae8;
      if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_a8,*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_04cb5b68);
      puVar3 = PTR_DAT_04cacfc0;
      lStack_80 = lStack_98;
      uStack_88 = puStack_a0;
      uStack_90 = uStack_a8;
      uStack_a8 = 0;
      puStack_a0 = &uStack_90;
LAB_023a38c4:
      uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_90,*(undefined8 *)puVar5);
      lVar10 = lStack_80;
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_90,*(undefined8 *)puVar4);
        return;
      }
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      puVar13 = (undefined8 *)(lStack_80 + 0x18);
      uVar9 = *puVar13;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
      if ((uVar7 & 1) != 0) goto code_r0x023a3908;
      goto LAB_023a39b4;
    }
  }
LAB_023a377c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
code_r0x023a3908:
  if (*(float *)(lVar10 + 0x58) <= fVar14) {
    *(float *)(lVar10 + 0x58) = fVar14 + 0.25;
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = Dino_BusSand_App_UI_UiTweakApplier__Resolve_22a450c
                      (lVar8,*(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x18));
    *puVar13 = uVar9;
    thunk_FUN_02134474(puVar13);
    cVar6 = cRam0000000004f9b948;
    *(undefined1 *)(lVar10 + 0x20) = 0;
    if (cVar6 == '\0') {
      FUN_02132f7c(puVar3);
      cRam0000000004f9b948 = '\x01';
    }
    cVar6 = cRam0000000004f9b949;
    lVar12 = *(long *)puVar3;
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
    *(undefined8 *)(lVar10 + 0x3c) = uVar9;
    *(undefined8 *)(lVar10 + 0x34) = uVar9;
    if (cVar6 == '\0') {
      FUN_02132f7c(puVar3);
      lVar12 = *(long *)puVar3;
      cRam0000000004f9b949 = '\x01';
    }
    lVar11 = *(long *)puVar2;
    uVar9 = *(undefined8 *)(lVar10 + 0x18);
    *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if ((uVar7 & 1) == 0) {
LAB_023a39b4:
      lVar12 = *(long *)(lVar10 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar11 = 0;
      if (*(char *)(lVar12 + 0x48) != '\0') {
        lVar11 = lVar12;
      }
      Dino_BusSand_App_UI_UiTweakApplier__Write_22a4598(lVar10,lVar11);
    }
  }
  goto LAB_023a38c4;
}

