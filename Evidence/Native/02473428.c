/* IL2CPP: Dino.BusSand.AudioHub$$Awake
void Dino_BusSand_AudioHub__Awake (Dino_BusSand_AudioHub_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Awake
   void Dino_BusSand_AudioHub__Awake (Dino_BusSand_AudioHub_o* __this, const MethodInfo* method); */

void Dino_BusSand_AudioHub__Awake_2373428(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  bool bVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02473418 with catch @ 02473428
                        */
  puVar4 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9c7e4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cbb0e0);
    FUN_02132f7c(PTR_DAT_04cb1840);
    FUN_02132f7c(PTR_DAT_04cbb0e8);
    FUN_02132f7c(PTR_DAT_04cbb0f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb0f8);
    bRam0000000004f9c7e4 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  uVar16 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88a == '\0') {
      FUN_02132f7c(PTR_DAT_04cab1f0);
      cRam0000000004f9b88a = '\x01';
    }
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar4;
    }
    uVar16 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,param_1,0);
    if ((uVar10 & 1) != 0) {
      lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      puVar4 = PTR_DAT_04ca9ae8;
      uVar16 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar16 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar16 = extraout_x1_00;
      }
      puVar4 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar16);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar4 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar16 = 0;
      if (lVar9 != 0) {
        uVar16 = *(undefined8 *)(lVar9 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8680)(0,uVar16);
      return;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c881 == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9c881 = '\x01';
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  **(long **)(lVar9 + 0xb8) = param_1;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),param_1);
  Dino_BusSand_AudioHub__Load_23738e8(param_1,0);
  puVar7 = PTR_DAT_04cbb0f8;
  puVar6 = PTR_DAT_04cbb0f0;
  puVar5 = PTR_DAT_04cbb0e8;
  puVar4 = PTR_DAT_04cb1840;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_024738e0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x14);
  iVar18 = iVar1;
  if (iVar1 < 2) {
    iVar18 = 1;
  }
  if (iVar1 < 1) {
    iVar18 = 0x14;
  }
  do {
    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if ((lVar9 == 0) ||
       (lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar9,*(undefined8 *)puVar4),
       lVar9 == 0)) goto LAB_024738e0;
    UnityEngine_AudioSource__set_playOnAwake_4348c54(lVar9,0,0);
    UnityEngine_AudioSource__set_spatialBlend_4348dec(0,lVar9,0);
    lVar17 = *(long *)(param_1 + 0x68);
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
    *(undefined4 *)(lVar11 + 0x34) = 0x3f800000;
    System_Object___ctor_4870e5c(lVar11,0);
    *(long *)(lVar11 + 0x10) = lVar9;
    thunk_FUN_02134474((long *)(lVar11 + 0x10),lVar9);
    if (lVar17 == 0) goto LAB_024738e0;
    lVar9 = *(long *)(lVar17 + 0x10);
    lVar15 = *(long *)puVar5;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_024738e0;
    uVar2 = *(uint *)(lVar17 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar17 + 0x18) = uVar2 + 1;
      plVar12 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *plVar12 = lVar11;
      thunk_FUN_02134474(plVar12,lVar11);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar17,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  uVar10 = 0;
  bVar8 = true;
  do {
    bVar14 = bVar8;
    lVar11 = *(long *)(param_1 + 0x78);
    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if ((lVar9 == 0) ||
       (uVar16 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar9,*(undefined8 *)puVar4),
       lVar11 == 0)) goto LAB_024738e0;
    if (*(uint *)(lVar11 + 0x18) <= uVar10) {
LAB_024738e4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined8 *)(lVar11 + uVar10 * 8 + 0x20) = uVar16;
    thunk_FUN_02134474();
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar9 == 0) goto LAB_024738e0;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_024738e4;
    lVar9 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_024738e0;
    UnityEngine_AudioSource__set_playOnAwake_4348c54(lVar9,0,0);
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar9 == 0) goto LAB_024738e0;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_024738e4;
    lVar9 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_024738e0;
    UnityEngine_AudioSource__set_loop_4348b90(lVar9,0,0);
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar9 == 0) goto LAB_024738e0;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_024738e4;
    lVar9 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_024738e0;
    UnityEngine_AudioSource__set_volume_434840c(0,lVar9,0);
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar9 == 0) goto LAB_024738e0;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_024738e4;
    lVar9 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_024738e0;
    UnityEngine_AudioSource__set_priority_4348ec0(lVar9,0,0);
    uVar10 = 1;
    bVar8 = false;
  } while (bVar14);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar16 = UnityEngine_Object__FindAnyObjectByType_object__2804844(*(undefined8 *)puVar6);
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
  if ((uVar10 & 1) != 0) {
    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar9 == 0) goto LAB_024738e0;
    UnityEngine_GameObject__AddComponent_object__275a54c(lVar9,*(undefined8 *)PTR_DAT_04cbb0e0);
  }
  lVar9 = Dino_BusSand_AudioHub__Preload_2374208(param_1);
  if (lVar9 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar13 = thunk_FUN_0216e89c();
    uVar16 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar13,uVar16,0);
  }
  else {
    uVar10 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar10 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar11 = *(long *)(param_1 + 0x10);
      if (lVar11 != 0) {
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar11,lVar9);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar13 = thunk_FUN_0216e89c();
    uVar16 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar13,uVar16,0);
  }
  uVar16 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar13,uVar16);
}

