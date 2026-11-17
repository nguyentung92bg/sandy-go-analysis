/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$StoreBlob<__Il2CppFullySharedGenericType>
void Dino_BusSand_App_Meta_LiveOps__StoreBlob___Il2CppFullySharedGenericType_ (System_String_o* key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o data, const MethodInfo_27EF8E4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$StoreBlob<__Il2CppFullySharedGenericType>
   void Dino_BusSand_App_Meta_LiveOps__StoreBlob___Il2CppFullySharedGenericType_ (System_String_o*
   key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o data, const MethodInfo_27EF8E4*
   method); */

void Dino_BusSand_App_Meta_LiveOps__StoreBlob___Il2CppFullySharedGenericType__27ef8e4
               (undefined8 param_1,undefined8 ****param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  plVar8 = *(long **)(param_3 + 0x38);
  pppuStack_70 = param_2;
  if (plVar8 == (long *)0x0) {
    FUN_02132f7c(PTR_DAT_04cc4908);
    FUN_02132f7c(PTR_DAT_04cc4910);
    FUN_02132f7c(PTR_DAT_04cc4918);
    FUN_02132f7c(PTR_DAT_04cc4930);
    FUN_02132f7c(PTR_DAT_04cc4920);
    FUN_02132f7c(PTR_DAT_04cb4790);
    FUN_02132f7c(PTR_DAT_04cb4798);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cc4938);
    plVar8 = *(long **)(param_3 + 0x38);
    if (plVar8 == (long *)0x0) {
      FUN_0216b4cc(param_3);
      plVar8 = *(long **)(param_3 + 0x38);
    }
  }
  puVar3 = PTR_DAT_04cabaf8;
  uVar1 = *(uint *)(*plVar8 + 0xfc);
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x130) == 0) {
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar6,*(undefined8 *)PTR_DAT_04cb4790);
      *(undefined8 *)(lVar5 + 0x130) = uVar6;
      thunk_FUN_02134474(lVar5 + 0x130,uVar6);
    }
    plVar8 = *(long **)(param_3 + 0x38);
    if (-1 < *(int *)(*plVar8 + 0x28)) {
      param_2 = &pppuStack_70;
    }
    func_0x049b5410(auStack_b0 + -((ulong)uVar1 + 0xf & 0x1fffffff0),param_2,(ulong)uVar1);
    uVar6 = FUN_02133100(*plVar8,auStack_b0 + -((ulong)uVar1 + 0xf & 0x1fffffff0));
    uVar6 = UnityEngine_JsonUtility__ToJson_44323ac(uVar6,0);
    if (*(long *)(lVar5 + 0x130) == 0) {
LAB_028efc64:
      if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_028efcf8;
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_a8,*(long *)(lVar5 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
    puVar4 = PTR_DAT_04cc4910;
    puStack_88 = puStack_a0;
    uStack_90 = uStack_a8;
    lStack_80 = lStack_98;
    uStack_a8 = 0;
    puStack_a0 = &uStack_90;
    do {
      uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_90,*(undefined8 *)puVar4);
      lVar11 = lStack_80;
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_90,*(undefined8 *)PTR_DAT_04cc4908);
        lVar11 = *(long *)(lVar5 + 0x130);
        lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar5,0);
        if (lVar5 == 0) goto LAB_028efc64;
        *(undefined8 *)(lVar5 + 0x10) = param_1;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10),param_1);
        *(undefined8 *)(lVar5 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),uVar6);
        if (lVar11 == 0) goto LAB_028efc64;
        lVar9 = *(long *)(lVar11 + 0x10);
        lVar10 = *(long *)PTR_DAT_04cc4930;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_028efc64;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = lVar5;
          thunk_FUN_02134474(plVar8,lVar5);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar11,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                    );
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        goto LAB_028efc20;
      }
      if (lStack_80 == 0) {
        if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_028efcf8;
      }
      uVar7 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_80 + 0x10),param_1,0);
    } while ((uVar7 & 1) == 0);
    *(undefined8 *)(lVar11 + 0x18) = uVar6;
    thunk_FUN_02134474((undefined8 *)(lVar11 + 0x18),uVar6);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_90,*(undefined8 *)PTR_DAT_04cc4908);
  }
LAB_028efc20:
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
    return;
  }
LAB_028efcf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

