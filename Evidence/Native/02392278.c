/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.<get_AllEventNames>d__27$$MoveNext
bool Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27__MoveNext (Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.<get_AllEventNames>d__27$$MoveNext
   bool Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27__MoveNext
   (Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27__MoveNext_2292278(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  long *plStack_28;
  long lStack_18;
  
  lStack_18 = param_1;
  if ((bRam0000000004f9c1d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4868);
    FUN_02132f7c(PTR_DAT_04cb53c0);
    FUN_02132f7c(PTR_DAT_04cb53c8);
    FUN_02132f7c(PTR_DAT_04cb53d0);
    FUN_02132f7c(PTR_DAT_04cb2240);
    bRam0000000004f9c1d9 = 1;
  }
  puVar2 = PTR_DAT_04cb2240;
  iVar1 = *(int *)(param_1 + 0x10);
  plStack_28 = &lStack_18;
  lStack_30 = 0;
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        uVar5 = 0;
        goto LAB_023924b0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x68);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar3 = System_Collections_Generic_Dictionary_object__object___get_Keys_34b406c
                        (lVar3,*(undefined8 *)PTR_DAT_04cb4868);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator_38f9e8c
                (&uStack_68,lVar3,*(undefined8 *)PTR_DAT_04cb53d0);
      uStack_48 = uStack_60;
      uStack_50 = uStack_68;
      uStack_40 = uStack_58;
      *(undefined8 *)(lStack_18 + 0x30) = uStack_60;
      *(undefined8 *)(lStack_18 + 0x28) = uStack_68;
      *(undefined8 *)(lStack_18 + 0x38) = uStack_58;
      thunk_FUN_02134474(lStack_18 + 0x28,0);
      param_1 = lStack_18;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    uVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext_3646184
                      (param_1 + 0x28,*(undefined8 *)PTR_DAT_04cb53c0);
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(lStack_18 + 0x18) = *(undefined8 *)(lStack_18 + 0x38);
      thunk_FUN_02134474();
      uVar5 = 1;
      *(undefined4 *)(lStack_18 + 0x10) = 1;
      goto LAB_023924b0;
    }
    Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27____m__Finally1_2292560();
    puVar2 = PTR_DAT_04cb2240;
    *(undefined8 *)(lStack_18 + 0x30) = 0;
    *(undefined8 *)(lStack_18 + 0x38) = 0;
    lVar3 = *(long *)puVar2;
    *(undefined8 *)(lStack_18 + 0x28) = 0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x70);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = System_Collections_Generic_Dictionary_object__object___get_Keys_34b406c
                      (lVar3,*(undefined8 *)PTR_DAT_04cb4868);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator_38f9e8c
              (&uStack_68,lVar3,*(undefined8 *)PTR_DAT_04cb53d0);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    uStack_40 = uStack_58;
    *(undefined8 *)(lStack_18 + 0x30) = uStack_60;
    *(undefined8 *)(lStack_18 + 0x28) = uStack_68;
    *(undefined8 *)(lStack_18 + 0x38) = uStack_58;
    thunk_FUN_02134474(lStack_18 + 0x28,0);
    param_1 = lStack_18;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
  uVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext_3646184
                    (param_1 + 0x28,*(undefined8 *)PTR_DAT_04cb53c0);
  if ((uVar4 & 1) == 0) {
    Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27____m__Finally2_22925b0();
    uVar5 = 0;
    *(undefined8 *)(lStack_18 + 0x30) = 0;
    *(undefined8 *)(lStack_18 + 0x38) = 0;
    *(undefined8 *)(lStack_18 + 0x28) = 0;
  }
  else {
    *(undefined8 *)(lStack_18 + 0x18) = *(undefined8 *)(lStack_18 + 0x38);
    thunk_FUN_02134474();
    uVar5 = 1;
    *(undefined4 *)(lStack_18 + 0x10) = 2;
  }
LAB_023924b0:
  lVar3 = lStack_30;
  if (lStack_30 == 0) {
    return uVar5;
  }
  FUN_01e79964(&plStack_28);
                    /* WARNING: Subroutine does not return */
  FUN_0213321c(lVar3);
}

