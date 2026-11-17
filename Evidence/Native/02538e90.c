/* IL2CPP: Dino.BusSand.Sdk.SandBusReview.<Run>d__1$$MoveNext
bool Dino_BusSand_Sdk_SandBusReview__Run_d__1__MoveNext (Dino_BusSand_Sdk_SandBusReview__Run_d__1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusReview.<Run>d__1$$MoveNext
   bool Dino_BusSand_Sdk_SandBusReview__Run_d__1__MoveNext
   (Dino_BusSand_Sdk_SandBusReview__Run_d__1_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_SandBusReview__Run_d__1__MoveNext_2438e90(long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  if ((bRam0000000004f9cc60 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf380);
    FUN_02132f7c(PTR_DAT_04cbf388);
    FUN_02132f7c(PTR_DAT_04cbf390);
    FUN_02132f7c(PTR_DAT_04cbf398);
    FUN_02132f7c(PTR_DAT_04cbf3a0);
    FUN_02132f7c(PTR_DAT_04cbf3a8);
    FUN_02132f7c(PTR_DAT_04cbf3b0);
    bRam0000000004f9cc60 = 1;
  }
  puVar2 = PTR_DAT_04cbf3a0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x38) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x14);
      if (iVar1 != 0) {
        uStack_38 = *(undefined8 *)PTR_DAT_04cbf398;
        uStack_30 = 0xffffffffffffffff;
        iStack_28 = iVar1;
        uVar5 = System_Enum__ToString_4863070(&uStack_38,0);
        uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbf3b0,uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
        }
        UnityEngine_Debug__LogWarning_4357a30(uVar5,0);
      }
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar5 = *(undefined8 *)(lVar4 + 0x40);
        uVar6 = *(undefined8 *)(lVar4 + 0x28);
        bVar3 = *(int *)(*(long *)(param_1 + 0x38) + 0x14) == 0;
        pcVar7 = *(code **)(lVar4 + 0x18);
LAB_025390f0:
        (*pcVar7)(uVar5,bVar3,uVar6);
        return 0;
      }
    }
  }
  else if (iVar1 == 1) {
    lVar4 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x14) != 0) {
        uStack_38 = *(undefined8 *)PTR_DAT_04cbf398;
        uStack_30 = 0xffffffffffffffff;
        iStack_28 = *(int *)(lVar4 + 0x14);
        uVar5 = System_Enum__ToString_4863070(&uStack_38,0);
        uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbf3a8,uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
        }
        UnityEngine_Debug__LogWarning_4357a30(uVar5,0);
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 == 0) {
          return 0;
        }
        pcVar7 = *(code **)(lVar4 + 0x18);
        uVar5 = *(undefined8 *)(lVar4 + 0x40);
        bVar3 = false;
        uVar6 = *(undefined8 *)(lVar4 + 0x28);
        goto LAB_025390f0;
      }
      lVar9 = *(long *)(param_1 + 0x28);
      uVar5 = Google_Play_Common_PlayAsyncOperation_object__Int32Enum___GetResult_2c3fbe8
                        (lVar4,*(undefined8 *)PTR_DAT_04cbf380);
      if (lVar9 != 0) {
        uVar5 = Google_Play_Review_ReviewManager__LaunchReviewFlow_3b5d028(lVar9,uVar5,0);
        puVar8 = (undefined8 *)(param_1 + 0x38);
        *puVar8 = uVar5;
        thunk_FUN_02134474(puVar8,uVar5);
        *(undefined8 *)(param_1 + 0x18) = *puVar8;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x10) = 2;
        return 1;
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    Google_Play_Review_ReviewManager___ctor_3b5cae0(lVar4,0);
    plVar10 = (long *)(param_1 + 0x28);
    *plVar10 = lVar4;
    thunk_FUN_02134474(plVar10,lVar4);
    if (*plVar10 != 0) {
      uVar5 = Google_Play_Review_ReviewManager__RequestReviewFlow_3b5ce64(*plVar10,0);
      puVar8 = (undefined8 *)(param_1 + 0x30);
      *puVar8 = uVar5;
      thunk_FUN_02134474(puVar8,uVar5);
      *(undefined8 *)(param_1 + 0x18) = *puVar8;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

